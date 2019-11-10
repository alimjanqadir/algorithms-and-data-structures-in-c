//
//  full_ordering_2.c
//  algorithms-and-data-structures-in-c
//
//  Created by Alimjan Qadir on 2019/5/8.
//  Copyright © 2019 Alimjan Qadir. All rights reserved.
//

//#include <stdio.h>
//void map_search_dfs(int[4][4],int[4][4],int, int, int);

//int maze_dfs(){
//    // Map of the maze
//    int map[4][4]= {
//        {0,0,0,1},
//        {0,0,0,0},
//        {0,2,1,0},
//        {1,0,0,0}
//    };
//
//    int book[4][4];
//    for (int i =0; i<4; i++) {
//        for (int j =0 ; j<4; j++)
//            book[i][j] = 0;
//    }
//
//    // Start the search with depth-first approach
//    map_search_dfs(map, book, 0, 0, 1);
//    return 0;
//}

//void map_search_dfs(int map[4][4], int book[4][4],int row, int column, int steps){
//    // Check whether we are at the target position
//    if (map[row][column] == 2) {
//        printf("Search complete, %d steps used.\n", steps);
//        return;
//    }
//    // Direction preset for checking position availablity
//    int direction_presets[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
//    for (int i=0; i<4; i++) {
//        // Try direction relative to current position from right, bottom, left, and up order.
//        int next_row = row + direction_presets[i][0];
//        int next_column = column + direction_presets[i][1];
//
//        // continue try other direction if current direction is blocked
//        if(next_row >= 4 || next_column >= 4 ||
//           map[next_row][next_column] == 1 ||
//           book[next_row][next_column] == 1)
//            continue;
//
//        // Check whether current position has obstacle and visited before
//        row = next_row;
//        column = next_column;
//
//        book[row][column] = 1;
//        map_search_dfs(map, book, row, column ,++steps);
//        book[row][row] = 0;
//    }
//}
