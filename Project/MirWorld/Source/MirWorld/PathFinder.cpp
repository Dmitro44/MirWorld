// // Fill out your copyright notice in the Description page of Project Settings.
//
//
 #include "PathFinder.h"
 #include <iostream>
 #include <vector>

#include "Generator.h"
#include "Kismet/GameplayStatics.h"
using namespace std;
//
// // Creating a shortcut for int, int pair type
typedef TPair<int, int> FPair;
typedef TArray<FVector> TFVector;
// // Creating a shortcut for pair<float, pair<int32, int32>> type
 typedef TPair<float, FPair> FP_Pair;
FVector NO_WAY{-1,-1,0};
const float TREE_DELAY = 1.5;
// Creating a shortcut for int, int pair type
typedef pair<int, int> Pair;
// Creating a shortcut for pair<int, pair<int, int>> type
typedef pair<double, Pair > pPair;
// A structure to hold the necessary parameters
struct cell
{
    // Row and Column index of its parent
    // Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1
    int parent_i, parent_j;

    // f = g + h
    double f, g, h;
};

// A Utility Function to check whether given cell (row, col)
// is a valid cell or not.
bool isValid(int row, int col)
{
    return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL);
}

// A Utility Function to check whether the given cell is
// blocked or not
bool isUnBlocked(int grid[][COL], int row, int col)
{
    // Returns true if the cell is not blocked else false
    if (grid[row][col] == 1)
        return true;

    return false;
}

// A Utility Function to check whether destination cell has
// been reached or not
bool isDestination(int row, int col, Pair dest)
{
    if (row == dest.first && col == dest.second)
        return true;
    return false;
}

void updateCellDetails(vector<vector<cell>>& cellDetails, int i, int j, double fNew, double gNew, double hNew, int parent_i, int parent_j)
{
    cellDetails[i][j].f = fNew;
    cellDetails[i][j].g = gNew;
    cellDetails[i][j].h = hNew;
    cellDetails[i][j].parent_i = parent_i;
    cellDetails[i][j].parent_j = parent_j;
}
// A Utility Function to calculate the 'h' heuristics.
double calculateHValue(int row, int col, Pair dest)
{
    // Return distance
    return ((double)sqrt((row - dest.first) * (row - dest.first) + (col - dest.second) * (col - dest.second)));
}
void findMinVal(Pair src,Pair& dest)
{
    Pair min;
    double nearest = FLT_MAX;
   
    // first
    if (isValid(dest.first - 1, dest.second) && calculateHValue(src.first,src.second,{dest.first - 1, dest.second}) < nearest)
    {
        nearest = calculateHValue(src.first,src.second,{dest.first - 1, dest.second});
        dest.first = dest.first - 1;
    }
    //second
    if (isValid(dest.first + 1, dest.second) && calculateHValue(src.first,src.second,{dest.first + 1, dest.second}) < nearest)
    {
        nearest = calculateHValue(src.first,src.second,{dest.first + 1, dest.second});
        dest.first = dest.first + 1;
    }
    //third
    if (isValid(dest.first, dest.second + 1) && calculateHValue(src.first,src.second,{dest.first, dest.second + 1}) < nearest)
    {
        nearest = calculateHValue(src.first,src.second,{dest.first, dest.second + 1});
        dest.second = dest.second + 1;
    }
    //fourth
    if (isValid(dest.first, dest.second - 1) && calculateHValue(src.first,src.second,{dest.first, dest.second - 1}) < nearest)
    {
        nearest = calculateHValue(src.first,src.second,{dest.first, dest.second - 1});
        dest.second = dest.second - 1;
    }
    //fitth
    if (isValid(dest.first - 1, dest.second + 1 ) && calculateHValue(src.first,src.second,{dest.first - 1, dest.second + 1}) < nearest)
    {
        nearest = calculateHValue(src.first,src.second,{dest.first - 1, dest.second + 1});
        dest.first = dest.first - 1;
        dest.second = dest.second + 1;
    }
    //sixth
    if (isValid(dest.first - 1, dest.second - 1) && calculateHValue(src.first,src.second,{dest.first - 1, dest.second - 1}) < nearest)
    {
        nearest = calculateHValue(src.first,src.second,{dest.first - 1, dest.second - 1});
        dest.first = dest.first - 1;
        dest.second = dest.second - 1;
    }
    //seventh
    if (isValid(dest.first + 1, dest.second + 1) && calculateHValue(src.first,src.second,{dest.first + 1, dest.second + 1}) < nearest)
    {
        nearest = calculateHValue(src.first,src.second,{dest.first + 1, dest.second + 1});
        dest.first = dest.first + 1;
        dest.second = dest.second + 1;
    }
    //eighth
    if (isValid(dest.first + 1, dest.second - 1) && calculateHValue(src.first,src.second,{dest.first + 1, dest.second - 1}) < nearest)
    {
        nearest = calculateHValue(src.first,src.second,{dest.first + 1, dest.second - 1});
        dest.first = dest.first + 1;
        dest.second = dest.second - 1;
    }
}

float CHAR_HEIGHT;
// A Utility Function to trace the path from the source
// to destination
TFVector tracePath(vector<vector<cell>> cellDetails, Pair dest)
{
    //printf("\nThe Path is ");
    UE_LOG(LogTemp, Warning, TEXT("The path is: "));
    int row = dest.first;
    ////
    int col = dest.second;
    std::vector<Pair> Path;
    TFVector PATH;
    
    while (!(cellDetails[row][col].parent_i == row && cellDetails[row][col].parent_j == col))
    {
        Path.emplace_back(row, col);
        int temp_row = cellDetails[row][col].parent_i;
        int temp_col = cellDetails[row][col].parent_j;
        row = temp_row;
        col = temp_col;
    }
    vector<Pair> path;
    Path.emplace_back(row, col);
    FVector p_1;
    while (!Path.empty())
    {
        pair<int, int> p = Path[0];
        p_1[0] = p.first;
        p_1[1] = p.second;
        p_1[2] = 0;
        PATH.Push(p_1);
        path.push_back(p);
        Path.erase(Path.begin());
        UE_LOG(LogTemp, Warning, TEXT("-> (%d,%d) "), PATH.Last()[0], PATH.Last()[1]);
    }
    for (auto& now : PATH) {
        now.Z = CHAR_HEIGHT;
    }
    return PATH;
}

// A Function to find the shortest path between
// a given source cell to a destination cell according
// to A* Search Algorithm
float getTexture(FVector pos)
{
    // TArray<AActor*> FoundActors = { nullptr };
    // UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGenerator::StaticClass(), FoundActors);
    // auto MapInfoActor = reinterpret_cast<MapInfo*>(FoundActors[0]);
    // if (MapInfoActor)
    // {
    //     TArray<TArray<FInfoMatrix>> map = MapInfoActor->GetMap();
    //     if(map[pos.X][pos.Y].Resources == 2)
    //     return TREE_DELAY;
    // }
    return 1;
}

TFVector  APathFinder::getPathFromTo(int grid[][COL], FVector src_1, FVector dest_1)
{
    // If the source is out of range
    Pair src,dest;
    src.first = src_1[0];
    src.second = src_1[1];
    CHAR_HEIGHT = src_1.Z;
    
    dest.first = dest_1[0];
    dest.second = dest_1[1];
    
    if (isValid(src.first, src.second) == false)
    {
        //printf("Source is invalid\n");
        return {NO_WAY};
        
    }

    // If the destination is out of range
    if (isValid(dest.first, dest.second) == false)
    {
        UE_LOG(LogTemp, Warning, TEXT("Destination is invalid"));
        return {NO_WAY};
        //printf("Destination is invalid\n");
    }

    // Either the source or the destination is blocked
    if (!isUnBlocked(grid, dest.first, dest.second))
    {
       // printf("Source or the destination is blocked\n");
       findMinVal(src,dest);
    }

    // If the destination cell is the same as source cell
    if (isDestination(src.first, src.second, dest))
    {
        //printf("We are already at the destination\n");
        return{NO_WAY};
    }

    vector <vector<bool>> closedList(ROW, vector<bool>(COL,false));
    // Declare a 2D array of structure to hold the details
    // of that cell
    vector<vector<cell>> cellDetails(ROW, vector<cell>(COL));

    int i, j;

    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            cellDetails[i][j].f = FLT_MAX;
            cellDetails[i][j].g = FLT_MAX;
            cellDetails[i][j].h = FLT_MAX;
            cellDetails[i][j].parent_i = -1;
            cellDetails[i][j].parent_j = -1;
        }
    }

    float maxFloat = FLT_MAX;

    // Initialising the parameters of the starting node
    i = src.first;
    j = src.second;
    cellDetails[i][j].f = 0.0;
    cellDetails[i][j].g = 0.0;
    cellDetails[i][j].h = 0.0;
    cellDetails[i][j].parent_i = i;
    cellDetails[i][j].parent_j = j;
    
    std::vector<pPair> openList;

    // Put the starting cell on the open list and set its
    // 'f' as 0
    openList.push_back(make_pair(0.0, make_pair(i, j))); //the start position

    bool foundDest = false;

    while (!openList.empty())
    {
        pPair p = *openList.begin();

        // Remove this vertex from the open list
        openList.erase(openList.begin());

        // Add this vertex to the closed list
        i = p.second.first;
        j = p.second.second;
        closedList[i][j] = true;

        /*
		Generating all the 8 successor of this cell

			N.W N N.E
			\ | /
				\ | /
			W----Cell----E
				/ | \
				/ | \
			S.W S S.E

		Cell-->Popped Cell (i, j)
		N --> North	(i-1, j)
		S --> South	(i+1, j)
		E --> East (i, j+1)
		W --> West (i, j-1)
		N.E--> North-East (i-1, j+1)
		N.W--> North-West (i-1, j-1)
		S.E--> South-East (i+1, j+1)
		S.W--> South-West (i+1, j-1)
         */

        // To store the 'g', 'h' and 'f' of the 8 successors
        double gNew, hNew, fNew;

        //----------- 1st Successor (North)
        // ------------
        
        if (isValid(i - 1, j)) {

            if (isDestination(i - 1, j, dest))
            {
                // Set the Parent of the destination cell
                cellDetails[i - 1][j].parent_i = i;
                cellDetails[i - 1][j].parent_j = j;
               // printf("The destination cell is found\n");
                foundDest = true;
                return tracePath(cellDetails, dest);
            }
            else if (!closedList[i - 1][j] && isUnBlocked(grid, i - 1, j))
            {
                gNew = cellDetails[i][j].g + 1.0*getTexture(FVector(i - 1,j,CHAR_HEIGHT));
                hNew = calculateHValue(i - 1, j, dest);
                fNew = gNew + hNew;
                
                if (cellDetails[i - 1][j].f == FLT_MAX || cellDetails[i - 1][j].f > fNew)
                {
                    openList.push_back(std::make_pair(fNew, std::make_pair(i - 1, j)));
                    updateCellDetails(cellDetails, i - 1, j, fNew, gNew, hNew, i, j);
                }
            }
        }

        //----------- 2nd Successor (South)
        // ------------

        if (isValid(i + 1, j))
        {
            // If the destination cell is the same as the
            // current successor
            if (isDestination(i + 1, j, dest))
            {
                // Set the Parent of the destination cell
                cellDetails[i + 1][j].parent_i = i;
                cellDetails[i + 1][j].parent_j = j;
                //printf("The destination cell is found\n");
                foundDest = true;
                return tracePath(cellDetails, dest);
            }

            else if (!closedList[i + 1][j] && isUnBlocked(grid, i + 1, j))
                {
                gNew = cellDetails[i][j].g + 1.0 * getTexture(FVector(i + 1,j,CHAR_HEIGHT));
                hNew = calculateHValue(i + 1, j, dest);
                fNew = gNew + hNew;

                if (cellDetails[i + 1][j].f == FLT_MAX || cellDetails[i + 1][j].f > fNew)
                {
                    openList.push_back(std::make_pair(fNew, std::make_pair(i + 1, j)));
                    // Update the details of this cell
                    updateCellDetails(cellDetails, i + 1, j, fNew, gNew, hNew, i, j);
                }
            }
        }

        //----------- 3rd Successor (East)
        //------------

        if (isValid(i, j + 1) == true) {
            // If the destination cell is the same as the
            // current successor
            if (isDestination(i, j + 1, dest) == true)
            {
                // Set the Parent of the destination cell
                cellDetails[i][j + 1].parent_i = i;
                cellDetails[i][j + 1].parent_j = j;
                //printf("The destination cell is found\n");
                foundDest = true;
                return tracePath(cellDetails, dest);
            }

            else if (!closedList[i][j + 1] && isUnBlocked(grid, i, j + 1))
            {
                gNew = cellDetails[i][j].g + 1.0 * getTexture(FVector(i,j + 1,CHAR_HEIGHT));;
                hNew = calculateHValue(i, j + 1, dest);
                fNew = gNew + hNew;

                if (cellDetails[i][j + 1].f == FLT_MAX || cellDetails[i][j + 1].f > fNew)
                {
                    openList.push_back(std::make_pair(fNew, std::make_pair(i, j + 1)));

                    // Update the details of this cell
                    updateCellDetails(cellDetails, i, j + 1, fNew, gNew, hNew, i, j);
                }
            }
        }

        //----------- 4th Successor (West)
        //------------

        if (isValid(i, j - 1))
        {
            if (isDestination(i, j - 1, dest))
            {
                cellDetails[i][j - 1].parent_i = i;
                cellDetails[i][j - 1].parent_j = j;
                foundDest = true;
                return tracePath(cellDetails, dest);
            }

            else if (!closedList[i][j - 1]  && isUnBlocked(grid, i, j - 1))
            {
                gNew = cellDetails[i][j].g + 1.0 * getTexture(FVector(i ,j - 1,CHAR_HEIGHT));;
                hNew = calculateHValue(i, j - 1, dest);
                fNew = gNew + hNew;

                if (cellDetails[i][j - 1].f == FLT_MAX
                    || cellDetails[i][j - 1].f > fNew)
                {
                    openList.push_back(std::make_pair(fNew, std::make_pair(i, j - 1)));
                    updateCellDetails(cellDetails, i , j - 1, fNew, gNew, hNew, i, j);
                }
            }
        }

        //----------- 5th Successor (North-East)
        //------------

        if (isValid(i - 1, j + 1))
            {
            if (isDestination(i - 1, j + 1, dest))
            {
                cellDetails[i - 1][j + 1].parent_i = i;
                cellDetails[i - 1][j + 1].parent_j = j;
                foundDest = true;
                return tracePath(cellDetails, dest);
            }

            else if (!closedList[i - 1][j + 1]  && isUnBlocked(grid, i - 1, j + 1))
                {
                gNew = cellDetails[i][j].g + 1.414 * getTexture(FVector(i - 1,j + 1,CHAR_HEIGHT));;
                hNew = calculateHValue(i - 1, j + 1, dest);
                fNew = gNew + hNew;


                if (cellDetails[i - 1][j + 1].f == FLT_MAX || cellDetails[i - 1][j + 1].f > fNew)
                {
                    openList.push_back(std::make_pair(fNew, std::make_pair(i - 1, j + 1)));
                    updateCellDetails(cellDetails, i - 1, j + 1, fNew, gNew, hNew, i, j);
                }
            }
        }

        //----------- 6th Successor (North-West)
        //------------

        if (isValid(i - 1, j - 1))
        {
            if (isDestination(i - 1, j - 1, dest))
            {
                cellDetails[i - 1][j - 1].parent_i = i;
                cellDetails[i - 1][j - 1].parent_j = j;
                foundDest = true;
                return tracePath(cellDetails, dest);
            }

            else if (closedList[i - 1][j - 1] == false && isUnBlocked(grid, i - 1, j - 1) == true) {
                gNew = cellDetails[i][j].g + 1.414 * getTexture(FVector(i - 1,j - 1,CHAR_HEIGHT));;
                hNew = calculateHValue(i - 1, j - 1, dest);
                fNew = gNew + hNew;

                if (cellDetails[i - 1][j - 1].f == FLT_MAX
                    || cellDetails[i - 1][j - 1].f > fNew)
                {
                    openList.push_back(std::make_pair(fNew, std::make_pair(i - 1, j - 1)));
                    updateCellDetails(cellDetails, i - 1, j - 1, fNew, gNew, hNew, i, j);
                }
            }
        }

        //----------- 7th Successor (South-East)
        //------------

        if (isValid(i + 1, j + 1))
        {
            if (isDestination(i + 1, j + 1, dest))
            {
                cellDetails[i + 1][j + 1].parent_i = i;
                cellDetails[i + 1][j + 1].parent_j = j;
                foundDest = true;
                return tracePath(cellDetails, dest);
            }

            else if (!closedList[i + 1][j + 1] && isUnBlocked(grid, i + 1, j + 1))
            {
                gNew = cellDetails[i][j].g + 1.414 * getTexture(FVector(i + 1,j + 1,CHAR_HEIGHT));;
                hNew = calculateHValue(i + 1, j + 1, dest);
                fNew = gNew + hNew;

                if (cellDetails[i + 1][j + 1].f == FLT_MAX || cellDetails[i + 1][j + 1].f > fNew)
                {
                    openList.push_back(std::make_pair(fNew, std::make_pair(i + 1, j + 1)));
                    updateCellDetails(cellDetails, i + 1, j + 1, fNew, gNew, hNew, i, j);
                }
            }
        }

        //----------- 8th Successor (South-West)
        //------------

        if (isValid(i + 1, j - 1))
        {
            if (isDestination(i + 1, j - 1, dest))
            {
                cellDetails[i + 1][j - 1].parent_i = i;
                cellDetails[i + 1][j - 1].parent_j = j;
                foundDest = true;
                return tracePath(cellDetails, dest);
            }

            else if (!closedList[i + 1][j - 1] && isUnBlocked(grid, i + 1, j - 1))
            {
                gNew = cellDetails[i][j].g + 1.414 * getTexture(FVector(i + 1,j - 1,CHAR_HEIGHT));;
                hNew = calculateHValue(i + 1, j - 1, dest);
                fNew = gNew + hNew;

                if (cellDetails[i + 1][j - 1].f == FLT_MAX
                    || cellDetails[i + 1][j - 1].f > fNew) {
                    openList.push_back(std::make_pair(fNew, std::make_pair(i + 1, j - 1)));
                    updateCellDetails(cellDetails, i + 1, j - 1, fNew, gNew, hNew, i, j);
                }
            }
        }
    }

	if (foundDest == false)
		UE_LOG(LogTemp, Warning, TEXT("Failed to find the Destination Cell"));
	    
    return {NO_WAY};
    
}
