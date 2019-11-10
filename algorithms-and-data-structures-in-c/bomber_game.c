//
//  bomber-game.c
//  algorithms-and-data-structures-in-c
//
//  Created by Alimjan Qadir on 2019/5/27.
//  Copyright © 2019 Alimjan Qadir. All rights reserved.
//

#include <stdio.h>
int find_the_best_position(){
    char map[20][20];
    int i,j,previous_enemy_count = 0,current_enemy_count = 0,columns,rows,current_row_index,current_column_index,result_row_index = 0,result_column_index = 0;
    
    // row and column count will be defined
    printf("Insert how many rows and columns you want to define: \n");
    scanf("%d %d",&rows,&columns);
    
    // map that'll going to solve would be defined
    printf("Please insert the map you wish to solve: \n");
    for (i=0; i<rows; i++) {
        scanf("%s",map[i]);
    }
    
    // Enumerate the map
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            if (map[i][j] == '.') {
                // Reset the killable enemy count before evaluate current position
                current_enemy_count = 0;
                
                // enumerate to top
                current_row_index = i;
                current_column_index = j;
                while (map[current_row_index][current_column_index] != '#') {
                    // increament enemy count
                    if (map[current_row_index][current_column_index] == 'G') {
                        current_enemy_count++;
                    }
                    
                    // go to next row
                    current_row_index++;
                }
                
                
                // enumerate to right
                current_row_index = i;
                current_column_index = j;
                while (map[current_row_index][current_column_index] != '#') {
                    // increament enemy count
                    if (map[current_row_index][current_column_index] == 'G') {
                        current_enemy_count++;
                    }
                    
                    // go to next row
                    current_column_index++;
                }
                
                // enumerate to bottom
                current_row_index = i;
                current_column_index = j;
                while (map[current_row_index][current_column_index] != '#') {
                    // increament enemy count
                    if (map[current_row_index][current_column_index] == 'G') {
                        current_enemy_count++;
                    }
                    
                    // go to next row
                    current_row_index--;
                }
                
                // enumerate to left
                current_row_index = i;
                current_column_index = j;
                while (map[current_row_index][current_column_index] != '#') {
                    // increament enemy count
                    if (map[current_row_index][current_column_index] == 'G') {
                        current_enemy_count++;
                    }
                    
                    // go to next row
                    current_column_index--;
                }
                
                if (previous_enemy_count < current_enemy_count) {
                    result_row_index = i;
                    result_column_index = j;
                    previous_enemy_count = current_enemy_count;
                }
            }
        }
    }
    
    printf("Best position place the bomb is (%d %d), killable enemy count: %d. \n",result_row_index,result_column_index,previous_enemy_count);
    return 0;
}
