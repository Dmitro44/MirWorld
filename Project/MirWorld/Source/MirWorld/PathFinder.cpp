// // Fill out your copyright notice in the Description page of Project Settings.
//
//
 #include "PathFinder.h"
 #include <iostream>
 #include <vector>
using namespace std;
//
// // Creating a shortcut for int, int pair type
 typedef TPair<int, int> FPair;
 typedef TArray<FVector> TFVector;
// // Creating a shortcut for pair<float, pair<int32, int32>> type
 typedef TPair<float, FPair> FP_Pair;
FVector NO_WAY{-1,-1,0};

//
// // A structure to hold the necessary parameters
// struct FCell
// {
// 	// Row and Column index of its parent
// 	// Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1
// 	int32 parent_i, parent_j;
//
// 	// f = g + h
// 	float f, g, h;
// };
//
// // A Utility Function to check whether given cell (row, col)
// // is a valid cell or not.
// bool IsValid(int32 row, int32 col)
// {
// 	return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL);
// }
//
// // A Utility Function to check whether the given cell is
// // blocked or not
// bool IsUnBlocked(int32 grid[][COL], int32 row, int32 col)
// {
// 	// Returns true if the cell is not blocked else false
// 	if (grid[row][col] == 1)
// 		return true;
//
// 	return false;
// }
//
// // A Utility Function to check whether destination cell has
// // been reached or not
// bool IsDestination(int32 row, int32 col, FVector dest)
// {
// 	if (row == dest[0] && col == dest[1])
// 		return true;
// 	return false;
// }
//
// void UpdateCellDetails(TArray<TArray<FCell>>& cellDetails, int32 i, int32 j, float fNew, float gNew, float hNew, int32 parent_i, int32 parent_j)
// {
// 	cellDetails[i][j].f = fNew;
// 	cellDetails[i][j].g = gNew;
// 	cellDetails[i][j].h = hNew;
// 	cellDetails[i][j].parent_i = parent_i;
// 	cellDetails[i][j].parent_j = parent_j;
// }
//
// // A Utility Function to calculate the 'h' heuristics.
// float CalculateHValue(int32 row, int32 col, FVector dest)
// {
// 	// Return distance
// 	return FMath::Sqrt(static_cast<float>((row - dest[0]) * (row - dest[0]) + (col - dest[1]) * (col - dest[1])));
// }
// // A Utility Function to trace the path from the source
// // to destination
// // TFVector TracePath(TArray<TArray<FCell>> cellDetails, FVector dest)
// // {
// // 	UE_LOG(LogTemp, Warning, TEXT("The Path is "));
// // 	int32 row = dest[0];
// // 	int32 col = dest[1];
// //
// // 	TFVector Path;
// //
// // 	while (!(cellDetails[row][col].parent_i == row && cellDetails[row][col].parent_j == col))
// // 	{
// // 		Path.Emplace(row, col,0);
// // 		int32 temp_row = cellDetails[row][col].parent_i;
// // 		int32 temp_col = cellDetails[row][col].parent_j;
// // 		row = temp_row;
// // 		col = temp_col;
// // 	}
// // 	TFVector path;
// // 	Path.Emplace(row, col,0);
// // 	while (!path.IsEmpty())
// // 	{
// // 		FVector p;
// // 		p = Path[0];
// // 		path.Emplace(p);
// // 		Path.RemoveAt(0);
// // 		UE_LOG(LogTemp, Warning, TEXT("-> (%d,%d) "), p[0], p[1]);
// // 	}
// // 	return path;
// // }
//
// TFVector TracePath(TArray<TArray<FCell>> cellDetails, FVector dest)
// {
// 	UE_LOG(LogTemp, Warning, TEXT("The Path is "));
// 	int32 row = dest[0];
// 	int32 col = dest[1];
//
// 	TFVector Path;
//
// 	while (!(cellDetails[row][col].parent_i == row && cellDetails[row][col].parent_j == col))
// 	{
// 		Path.Insert(FVector(row, col, 0), 0);
// 		int32 temp_row = cellDetails[row][col].parent_i;
// 		int32 temp_col = cellDetails[row][col].parent_j;
// 		row = temp_row;
// 		col = temp_col;
// 	}
//
// 	Path.Insert(FVector(row, col, 0), 0);
//
// 	for (const auto& point : Path)
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT("-> (%d,%d) "), point[0], point[1]);
// 	}
//
// 	return Path;
// }
// // A Function to find the shortest path between
// // a given source cell to a destination cell according
// // to A* Search Algorithm
// TFVector AStarSearch(int32 grid[][COL], FVector src, FVector dest)
// {
// 	TFVector NO_WAY;
// 	NO_WAY.Emplace(-1,-1,0);
//     // If the source is out of range
//     if (!IsValid(src[0], src[1]))
//     {
//         UE_LOG(LogTemp, Warning, TEXT("Source is invalid"));
//         return NO_WAY;
//     }
//
//     // If the destination is out of range
//     if (!IsValid(dest[0], dest[1]))
//     {
//         UE_LOG(LogTemp, Warning, TEXT("Destination is invalid"));
//     	return NO_WAY;
//     }
//
//     // Either the source or the destination is blocked
//     if (!IsUnBlocked(grid, src[0], src[1]) || !IsUnBlocked(grid, dest[0], dest[1]))
//     {
//         UE_LOG(LogTemp, Warning, TEXT("Source or the destination is blocked"));
//     	return NO_WAY;
//     }
//
//     // If the destination cell is the same as source cell
//     if (IsDestination(src[0], src[1], dest))
//     {
//         UE_LOG(LogTemp, Warning, TEXT("We are already at the destination"));
//     	return NO_WAY;
//     }
//     // Create a closed list and initialise it to false which
//     // means that no cell has been included yet This closed
//     // list is implemented as a boolean 2D array
//     TArray<TArray<bool>> closedList;
//     closedList.Init(TArray<bool>(), ROW);
//     for (auto& Array : closedList)
//     {
//         Array.Init(false, COL);
//     }
//
//     // Declare a 2D array of structure to hold the details
//     // of that cell
//     TArray<TArray<FCell>> cellDetails;
//     cellDetails.Init(TArray<FCell>(), ROW);
//     for (auto& Array : cellDetails)
//     {
//         Array.Init(FCell(), COL);
//     }
//
//     int32 i, j;
//
//     for (i = 0; i < ROW; i++)
//     {
//         for (j = 0; j < COL; j++)
//         {
//             cellDetails[i][j].f = FLT_MAX;
//             cellDetails[i][j].g = FLT_MAX;
//             cellDetails[i][j].h = FLT_MAX;
//             cellDetails[i][j].parent_i = -1;
//             cellDetails[i][j].parent_j = -1;
//         }
//     }
//
//     // Initialising the parameters of the starting node
//     i = src[0];
//     j = src[1];
//     cellDetails[i][j].f = 0.0f;
//     cellDetails[i][j].g = 0.0f;
//     cellDetails[i][j].h = 0.0f;
//     cellDetails[i][j].parent_i = i;
//     cellDetails[i][j].parent_j = j;
//
//     /*
// 	Create an open list having information as-
// 	<f, <i, j>>
// 	where f = g + h,
// 	and i, j are the row and column index of that cell
// 	Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1
// 	This open list is implemented as a set of pair of
// 	pair.*/
//     TSet<FP_Pair> openList;
//
//     // Put the starting cell on the open list and set its
//     // 'f' as 0
//     openList.Emplace(FP_Pair(0.0f, FPair(i, j))); //the start position
//
//     // We set this boolean value as false as initially
//     // the destination is not reached.
//     bool foundDest = false;
//
//     while (!openList.IsEmpty())
//     {
//         FP_Pair p1 = *(openList.CreateIterator());
//
//         // Remove this vertex from the open list
//         openList.Remove(p1);
//
//         // Add this vertex to the closed list
//         i = p1.Value.Key;
//         j = p1.Value.Value;
//         closedList[i][j] = true;
//
//         /*
//             Generating all the 8 successor of this cell
//
//                 N.W N N.E
//                 \ | /
//                     \ | /
//                 W----Cell----E
//                     / | \
//                     / | \
//                 S.W S S.E
//
//             Cell-->Popped Cell (i, j)
//             N --> North	(i-1, j)
//             S --> South	(i+1, j)
//             E --> East (i, j+1)
//             W --> West (i, j-1)
//             N.E--> North-East (i-1, j+1)
//             N.W--> North-West (i-1, j-1)
//             S.E--> South-East (i+1, j+1)
//             S.W--> South-West (i+1, j-1)
//              */
//
//              // To store the 'g', 'h' and 'f' of the 8 successors
//         float gNew, hNew, fNew;
//
//         //----------- 1st Successor (North)
//         // ------------
//
//         // Only process this cell if this is a valid one
//         if (IsValid((i - 1), j))
//         {
//             // If the destination cell is the same as the
//             // current successor
//             if (IsDestination(i - 1, j, dest))
//             	{
//                 // Set the Parent of the destination cell
//                 cellDetails[i - 1][j].parent_i = i;
//                 cellDetails[i - 1][j].parent_j = j;
//                 UE_LOG(LogTemp, Warning, TEXT("The destination cell is found"));
//             	foundDest = true;
//                 return TracePath(cellDetails, dest);
//             }
//             // If the successor is already on the closed
//             // list or if it is blocked, then ignore it.
//             // Else do the following
//             else if (!closedList[i - 1][j] && IsUnBlocked(grid, i - 1, j))
//             {
//                 gNew = cellDetails[i][j].g + 1.0f;
//                 hNew = CalculateHValue(i - 1, j, dest);
//                 fNew = gNew + hNew;
//
//                 // If it isn’t on the open list, add it to
//                 // the open list. Make the current square
//                 // the parent of this square. Record the
//                 // f, g, and h costs of the square cell
//                 //			 OR
//                 // If it is on the open list already, check
//                 // to see if this path to that square is
//                 // better, using 'f' cost as the measure.
//                 if (cellDetails[i - 1][j].f == FLT_MAX || cellDetails[i - 1][j].f > fNew)
//                 {
//                     openList.Emplace(FP_Pair(fNew, FPair(i - 1, j)));
//                     // Update the details of this cell
//                     UpdateCellDetails(cellDetails, i - 1, j, fNew, gNew, hNew, i, j);
//                 }
//             }
//         }
//
//         //----------- 2nd Successor (South)
//         // ------------
//
//         if (IsValid(i + 1, j))
//         {
//             // If the destination cell is the same as the
//             // current successor
//             if (IsDestination(i + 1, j, dest))
//             {
//                 // Set the Parent of the destination cell
//                 cellDetails[i + 1][j].parent_i = i;
//                 cellDetails[i + 1][j].parent_j = j;
//                 UE_LOG(LogTemp, Warning, TEXT("The destination cell is found"));
//                 foundDest = true;
//                 return TracePath(cellDetails, dest);
//             }
//
//             else if (!closedList[i + 1][j] && IsUnBlocked(grid, i + 1, j)) {
//                 gNew = cellDetails[i][j].g + 1.0f;
//                 hNew = CalculateHValue(i + 1, j, dest);
//                 fNew = gNew + hNew;
//
//                 if (cellDetails[i + 1][j].f == FLT_MAX || cellDetails[i + 1][j].f > fNew)
//                 {
//                     openList.Emplace(FP_Pair(fNew, FPair(i + 1, j)));
//                     // Update the details of this cell
//                     UpdateCellDetails(cellDetails, i + 1, j, fNew, gNew, hNew, i, j);
//                 }
//             }
//         }
//
//         //----------- 3rd Successor (East)
//         //------------
//         if (IsValid(i, j + 1)) {
//             // If the destination cell is the same as the
//             // current successor
//             if (IsDestination(i, j + 1, dest))
//             {
//                 // Set the Parent of the destination cell
//                 cellDetails[i][j + 1].parent_i = i;
//                 cellDetails[i][j + 1].parent_j = j;
//                 UE_LOG(LogTemp, Warning, TEXT("The destination cell is found"));
//                 foundDest = true;
//                 return TracePath(cellDetails, dest);
//             }
//
//             else if (!closedList[i][j + 1] && IsUnBlocked(grid, i, j + 1))
//             {
//                 gNew = cellDetails[i][j].g + 1.0f;
//                 hNew = CalculateHValue(i, j + 1, dest);
//                 fNew = gNew + hNew;
//
//                 if (cellDetails[i][j + 1].f == FLT_MAX || cellDetails[i][j + 1].f > fNew)
//                 {
//                     openList.Emplace(FP_Pair(fNew, FPair(i, j + 1)));
//
//                     // Update the details of this cell
//                     UpdateCellDetails(cellDetails, i, j + 1, fNew, gNew, hNew, i, j);
//                 }
//             }
//         }
//
//         //----------- 4th Successor (West)
//         //------------
//         if (IsValid(i, j - 1))
//         {
//             // If the destination cell is the same as the
//             // current successor
//             if (IsDestination(i, j - 1, dest))
//             {
//                 // Set the Parent of the destination cell
//                 cellDetails[i][j - 1].parent_i = i;
//                 cellDetails[i][j - 1].parent_j = j;
//                 UE_LOG(LogTemp, Warning, TEXT("The destination cell is found"));
//                 foundDest = true;
//                 return TracePath(cellDetails, dest);
//             }
//
//             else if (!closedList[i][j - 1] && IsUnBlocked(grid, i, j - 1))
//             {
//                 gNew = cellDetails[i][j].g + 1.0f;
//                 hNew = CalculateHValue(i, j - 1, dest);
//                 fNew = gNew + hNew;
//
//                 if (cellDetails[i][j - 1].f == FLT_MAX || cellDetails[i][j - 1].f > fNew)
//                 {
//                     openList.Emplace(FP_Pair(fNew, FPair(i, j - 1)));
//
//                     // Update the details of this cell
//                     UpdateCellDetails(cellDetails, i, j - 1, fNew, gNew, hNew, i, j);
//                 }
//             }
//         }
//
//         //----------- 5th Successor (North-East)
//         //------------
//         if (IsValid(i - 1, j + 1)) {
//             // If the destination cell is the same as the
//             // current successor
//             if (IsDestination(i - 1, j + 1, dest))
//             {
//                 // Set the Parent of the destination cell
//                 cellDetails[i - 1][j + 1].parent_i = i;
//                 cellDetails[i - 1][j + 1].parent_j = j;
//                 UE_LOG(LogTemp, Warning, TEXT("The destination cell is found"));
//                 foundDest = true;
//                 return TracePath(cellDetails, dest);
//             }
//
//             else if (!closedList[i - 1][j + 1] && IsUnBlocked(grid, i - 1, j + 1)) {
//                 gNew = cellDetails[i][j].g + 1.414f;
//                 hNew = CalculateHValue(i - 1, j + 1, dest);
//                 fNew = gNew + hNew;
//
//                 if (cellDetails[i - 1][j + 1].f == FLT_MAX || cellDetails[i - 1][j + 1].f > fNew)
//                 {
//                     openList.Emplace(FP_Pair(fNew, FPair(i - 1, j + 1)));
//
//                     // Update the details of this cell
//                     UpdateCellDetails(cellDetails, i - 1, j + 1, fNew, gNew, hNew, i, j);
//                 }
//             }
//         }
//
//         //----------- 6th Successor (North-West)
//         //------------
//
//         if (IsValid(i - 1, j - 1)) {
//             // If the destination cell is the same as the
//             // current successor
//             if (IsDestination(i - 1, j - 1, dest))
//             {
//                 // Set the Parent of the destination cell
//                 cellDetails[i - 1][j - 1].parent_i = i;
//                 cellDetails[i - 1][j - 1].parent_j = j;
//                 UE_LOG(LogTemp, Warning, TEXT("The destination cell is found"));
//                 foundDest = true;
//                 return TracePath(cellDetails, dest);
//             }
//
//             else if (!closedList[i - 1][j - 1] && IsUnBlocked(grid, i - 1, j - 1)) {
//                 gNew = cellDetails[i][j].g + 1.414f;
//                 hNew = CalculateHValue(i - 1, j - 1, dest);
//                 fNew = gNew + hNew;
//
//                 if (cellDetails[i - 1][j - 1].f == FLT_MAX || cellDetails[i - 1][j - 1].f > fNew)
//                 {
//                     openList.Emplace(FP_Pair(fNew, FPair(i - 1, j - 1)));
//
//                     // Update the details of this cell
//                     UpdateCellDetails(cellDetails, i - 1, j - 1, fNew, gNew, hNew, i, j);
//                 }
//             }
//         }
//         //----------- 7th Successor (South-East)
//         //------------
//
//         if (IsValid(i + 1, j + 1)) {
//             // If the destination cell is the same as the
//             // current successor
//             if (IsDestination(i + 1, j + 1, dest))
//             {
//                 // Set the Parent of the destination cell
//                 cellDetails[i + 1][j + 1].parent_i = i;
//                 cellDetails[i + 1][j + 1].parent_j = j;
//                 UE_LOG(LogTemp, Warning, TEXT("The destination cell is found"));
//                 foundDest = true;
//                 return TracePath(cellDetails, dest);
//             }
//
//             else if (!closedList[i + 1][j + 1] && IsUnBlocked(grid, i + 1, j + 1)) {
//                 gNew = cellDetails[i][j].g + 1.414f;
//                 hNew = CalculateHValue(i + 1, j + 1, dest);
//                 fNew = gNew + hNew;
//
//                 if (cellDetails[i + 1][j + 1].f == FLT_MAX || cellDetails[i + 1][j + 1].f > fNew)
//                 {
//                     openList.Add(FP_Pair(fNew, FPair(i + 1, j + 1)));
//
//                     // Update the details of this cell
//                     UpdateCellDetails(cellDetails, i + 1, j + 1, fNew, gNew, hNew, i, j);
//                 }
//             }
//         }
//
//         //----------- 8th Successor (South-West)
//         //------------
//
//         if (IsValid(i + 1, j - 1)) {
//             // If the destination cell is the same as the
//             // current successor
//             if (IsDestination(i + 1, j - 1, dest))
//             {
//                 // Set the Parent of the destination cell
//                 cellDetails[i + 1][j - 1].parent_i = i;
//                 cellDetails[i + 1][j - 1].parent_j = j;
//                 UE_LOG(LogTemp, Warning, TEXT("The destination cell is found"));
//                 foundDest = true;
//                 return TracePath(cellDetails, dest);
//             }
//
//             else if (!closedList[i + 1][j - 1] && IsUnBlocked(grid, i + 1, j - 1)) {
//                 gNew = cellDetails[i][j].g + 1.414f;
//                 hNew = CalculateHValue(i + 1, j - 1, dest);
//                 fNew = gNew + hNew;
//
//                 if (cellDetails[i + 1][j - 1].f == FLT_MAX || cellDetails[i + 1][j - 1].f > fNew)
//                 {
//                     openList.Add(FP_Pair(fNew, FPair(i + 1, j - 1)));
//
//                     // Update the details of this cell
//                     UpdateCellDetails(cellDetails, i + 1, j - 1, fNew, gNew, hNew, i, j);
//                 }
//             }
//         }
//     }
// 	//if (foundDest == false)UE_LOG(LogTemp, Warning, TEXT("Failed to find the Destination Cell"));
// 		return NO_WAY;
// }
// TFVector APathFinder::getPathFromTo(int32 grid[][COL],FVector start, FVector dest)
// {
// 	return AStarSearch(grid,start, dest);
// }
//
// int main() {
// 	// Define a grid
// 	int32 grid[ROW][COL] = {
// 		{1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
// 		{1, 1, 1, 0, 1, 1, 1, 0, 1, 1},
// 		{1, 1, 1, 1, 1, 0, 1, 1, 0, 1},
// 		{0, 0, 1, 0, 1, 0, 0, 1, 0, 0},
// 		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
// 		{1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
// 		{1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
// 		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
// 	};
//
// 	// Define a start point
// 	FVector start(0, 0, 0);
//
// 	// Define an end point
// 	FVector end(7, 9, 0);
//
// 	// Create a PathFinder object
// 	APathFinder pathFinder;
//
// 	// Get the path from start to end
// 	TFVector path = pathFinder.getPathFromTo(grid, start, end);
//
// 	// Print the path
// 	for (const auto& point : path) {
// 		std::cout << "(" << point[0] << ", " << point[1] << ")" << std::endl;
// 	}
//
// 	return 0;
// }


/////////////////////////////////////////////
/////////////////////////////////////////////
/////////////////////////////////////////////
///

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

// A Utility Function to trace the path from the source
// to destination
TFVector tracePath(vector<vector<cell>> cellDetails, Pair dest)
{
    //printf("\nThe Path is ");
    UE_LOG(LogTemp, Warning, TEXT("The path is: "));
    int row = dest.first;
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
    return PATH;
}

// A Function to find the shortest path between
// a given source cell to a destination cell according
// to A* Search Algorithm
TFVector  APathFinder::getPathFromTo(int grid[][COL], FVector src_1, FVector dest_1)
{
    // If the source is out of range
    Pair src,dest;
    src.first = src_1[0];
    src.second = src_1[1];
    
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
<<<<<<< HEAD
        UE_LOG(LogTemp, Warning, TEXT("Destination is invalid"));
        return NO_WAY;
=======
        //printf("Destination is invalid\n");
        return{NO_WAY};
>>>>>>> 4f43bab (pathfinding method with ordinary vector)
    }

    // Either the source or the destination is blocked
    if (isUnBlocked(grid, src.first, src.second) == false || isUnBlocked(grid, dest.first, dest.second) == false)
    {
       // printf("Source or the destination is blocked\n");
        return{NO_WAY};
    }

    // If the destination cell is the same as source cell
    if (isDestination(src.first, src.second, dest) == true)
    {
        //printf("We are already at the destination\n");
        return{NO_WAY};
    }

    // Create a closed list and initialise it to false which
    // means that no cell has been included yet This closed
    // list is implemented as a boolean 2D array

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

    /*
	Create an open list having information as-
	<f, <i, j>>
	where f = g + h,
	and i, j are the row and column index of that cell
	Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1
	This open list is implemented as a set of pair of
	pair.*/
    std::vector<pPair> openList;

    // Put the starting cell on the open list and set its
    // 'f' as 0
    openList.push_back(make_pair(0.0, make_pair(i, j))); //the start position

    // We set this boolean value as false as initially
    // the destination is not reached.

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

        // Only process this cell if this is a valid one
        if (isValid(i - 1, j)) {
            // If the destination cell is the same as the
            // current successor
            if (isDestination(i - 1, j, dest))
            {
                // Set the Parent of the destination cell
                cellDetails[i - 1][j].parent_i = i;
                cellDetails[i - 1][j].parent_j = j;
               // printf("The destination cell is found\n");
                foundDest = true;
                return tracePath(cellDetails, dest);
            }
            // If the successor is already on the closed
            // list or if it is blocked, then ignore it.
            // Else do the following
            else if (closedList[i - 1][j] == false && isUnBlocked(grid, i - 1, j) == true)
            {
                gNew = cellDetails[i][j].g + 1.0;
                hNew = calculateHValue(i - 1, j, dest);
                fNew = gNew + hNew;

                // If it isn’t on the open list, add it to
                // the open list. Make the current square
                // the parent of this square. Record the
                // f, g, and h costs of the square cell
                //			 OR
                // If it is on the open list already, check
                // to see if this path to that square is
                // better, using 'f' cost as the measure.
                if (cellDetails[i - 1][j].f == FLT_MAX || cellDetails[i - 1][j].f > fNew)
                {
                    openList.push_back(std::make_pair(fNew, std::make_pair(i - 1, j)));
                    // Update the details of this cell
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

            else if (closedList[i + 1][j] == false && isUnBlocked(grid, i + 1, j) == true) {
                gNew = cellDetails[i][j].g + 1.0;
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

            else if (closedList[i][j + 1] == false && isUnBlocked(grid, i, j + 1) == true)
            {
                gNew = cellDetails[i][j].g + 1.0;
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

        if (isValid(i, j - 1) == true)
        {
            // If the destination cell is the same as the
            // current successor
            if (isDestination(i, j - 1, dest) == true)
            {
                // Set the Parent of the destination cell
                cellDetails[i][j - 1].parent_i = i;
                cellDetails[i][j - 1].parent_j = j;
                //printf("The destination cell is found\n");
                foundDest = true;
                return tracePath(cellDetails, dest);
            }

            else if (closedList[i][j - 1] == false && isUnBlocked(grid, i, j - 1) == true)
            {
                gNew = cellDetails[i][j].g + 1.0;
                hNew = calculateHValue(i, j - 1, dest);
                fNew = gNew + hNew;

                if (cellDetails[i][j - 1].f == FLT_MAX
                    || cellDetails[i][j - 1].f > fNew)
                {
                    openList.push_back(std::make_pair(fNew, std::make_pair(i, j - 1)));
                    // Update the details of this cell
                    updateCellDetails(cellDetails, i , j - 1, fNew, gNew, hNew, i, j);
                }
            }
        }

        //----------- 5th Successor (North-East)
        //------------

        if (isValid(i - 1, j + 1) == true) {
            // If the destination cell is the same as the
            // current successor
            if (isDestination(i - 1, j + 1, dest) == true)
            {
                // Set the Parent of the destination cell
                cellDetails[i - 1][j + 1].parent_i = i;
                cellDetails[i - 1][j + 1].parent_j = j;
                //printf("The destination cell is found\n");
                foundDest = true;
                return tracePath(cellDetails, dest);
            }

            else if (closedList[i - 1][j + 1] == false && isUnBlocked(grid, i - 1, j + 1) == true) {
                gNew = cellDetails[i][j].g + 1.414;
                hNew = calculateHValue(i - 1, j + 1, dest);
                fNew = gNew + hNew;


                if (cellDetails[i - 1][j + 1].f == FLT_MAX || cellDetails[i - 1][j + 1].f > fNew)
                {
                    openList.push_back(std::make_pair(fNew, std::make_pair(i - 1, j + 1)));

                    // Update the details of this cell
                    updateCellDetails(cellDetails, i - 1, j + 1, fNew, gNew, hNew, i, j);
                }
            }
        }

        //----------- 6th Successor (North-West)
        //------------

        if (isValid(i - 1, j - 1) == true)
        {
            // If the destination cell is the same as the
            // current successor
            if (isDestination(i - 1, j - 1, dest) == true)
            {
                // Set the Parent of the destination cell
                cellDetails[i - 1][j - 1].parent_i = i;
                cellDetails[i - 1][j - 1].parent_j = j;
                //printf("The destination cell is found\n");
                foundDest = true;
                return tracePath(cellDetails, dest);
            }

            else if (closedList[i - 1][j - 1] == false && isUnBlocked(grid, i - 1, j - 1) == true) {
                gNew = cellDetails[i][j].g + 1.414;
                hNew = calculateHValue(i - 1, j - 1, dest);
                fNew = gNew + hNew;

                if (cellDetails[i - 1][j - 1].f == FLT_MAX
                    || cellDetails[i - 1][j - 1].f > fNew)
                {
                    openList.push_back(std::make_pair(fNew, std::make_pair(i - 1, j - 1)));
                    // Update the details of this cell
                    updateCellDetails(cellDetails, i - 1, j - 1, fNew, gNew, hNew, i, j);
                }
            }
        }

        //----------- 7th Successor (South-East)
        //------------

        if (isValid(i + 1, j + 1) == true)
        {
            // If the destination cell is the same as the
            // current successor
            if (isDestination(i + 1, j + 1, dest) == true)
            {
                // Set the Parent of the destination cell
                cellDetails[i + 1][j + 1].parent_i = i;
                cellDetails[i + 1][j + 1].parent_j = j;
                //printf("The destination cell is found\n");
                foundDest = true;
                return tracePath(cellDetails, dest);
            }

            else if (closedList[i + 1][j + 1] == false && isUnBlocked(grid, i + 1, j + 1)== true)
            {
                gNew = cellDetails[i][j].g + 1.414;
                hNew = calculateHValue(i + 1, j + 1, dest);
                fNew = gNew + hNew;

                if (cellDetails[i + 1][j + 1].f == FLT_MAX || cellDetails[i + 1][j + 1].f > fNew)
                {
                    openList.push_back(std::make_pair(fNew, std::make_pair(i + 1, j + 1)));
                    // Update the details of this cell
                    updateCellDetails(cellDetails, i + 1, j + 1, fNew, gNew, hNew, i, j);
                }
            }
        }

        //----------- 8th Successor (South-West)
        //------------

        if (isValid(i + 1, j - 1) == true)
        {
            if (isDestination(i + 1, j - 1, dest) == true)
            {
                // Set the Parent of the destination cell
                cellDetails[i + 1][j - 1].parent_i = i;
                cellDetails[i + 1][j - 1].parent_j = j;
                //printf("The destination cell is found\n");
                foundDest = true;
                return tracePath(cellDetails, dest);
            }

            else if (closedList[i + 1][j - 1] == false && isUnBlocked(grid, i + 1, j - 1)== true)
            {
                gNew = cellDetails[i][j].g + 1.414;
                hNew = calculateHValue(i + 1, j - 1, dest);
                fNew = gNew + hNew;

                if (cellDetails[i + 1][j - 1].f == FLT_MAX
                    || cellDetails[i + 1][j - 1].f > fNew) {
                    openList.push_back(std::make_pair(fNew, std::make_pair(i + 1, j - 1)));
                    // Update the details of this cell
                    updateCellDetails(cellDetails, i + 1, j - 1, fNew, gNew, hNew, i, j);
                }
            }
        }
    }
<<<<<<< HEAD
<<<<<<< HEAD
	//if (foundDest == false)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to find the Destination Cell"));
=======
	if (foundDest == false)UE_LOG(LogTemp, Warning, TEXT("Failed to find the Destination Cell"));
>>>>>>> 6eee571 (my commit)
		return NO_WAY;
}
TFVector APathFinder::getPathFromTo(int32 grid[][COL],FVector start, FVector dest)
{
    GEngine->AddOnScreenDebugMessage(-1, 1000.f, FColor::Red, start.ToString());
    GEngine->AddOnScreenDebugMessage(-1, 1000.f, FColor::Red, dest.ToString());
    std::string str;
    for (int i = 0; i < 50; ++i) {
        for (int j = 0; j < 50; ++j) {
            str.append(1, IsUnBlocked(grid, i, j) + '0');
        }
        str.append("\n");
    }
    FString fstr(str.c_str());
    //GEngine->AddOnScreenDebugMessage(-1, 1000.f, FColor::Red, fstr);

	return AStarSearch(grid,start, dest);
=======

    // When the destination cell is not found and the open
    // list is empty, then we conclude that we failed to
    // reach the destination cell. This may happen when the
    // there is no way to destination cell (due to
    // blockages)
    if (foundDest == false)
        std::cout << "Failed to find the Destination Cell\n";
    return{NO_WAY};
>>>>>>> 4f43bab (pathfinding method with ordinary vector)
}
