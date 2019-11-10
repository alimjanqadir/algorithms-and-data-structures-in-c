//
//  full_ordering_2.c
//  algorithms-and-data-structures-in-c
//
//  Created by Alimjan Qadir on 2019/5/8.
//  Copyright © 2019 Alimjan Qadir. All rights reserved.
//


#include <stdio.h>
int main(){
    int array[10]={0,1,2,3,4,5,6,7,8,9};
    printf("The 9th number is: %d",array[9]);
    
    getchar();
    return 0;
}
//int main(){
//    struct node {
//        int row;
//        int column;
//        int step;
//    };
//
//    struct queue {
//        int head;
//        int tail;
//        struct node array[2500];
//    };
//
//
//    int map[50][50] = {
//        {0,0,0,2,0},
//        {0,0,2,0,0},
//        {0,0,0,2,0},
//        {0,2,1,0,0},
//        {2,0,2,0,0}
//    };
//
//    int book[5][5];
//
//    int direction_preset[4][2] = {
//        {0,1},
//        {1,0},
//        {0,-1},
//        {-1,0},
//    };
//
//    int boundry = 4;
//
//    struct queue que;
//    que.head = 0;
//    que.tail = 0;
//    que.array[que.tail].row = 0;
//    que.array[que.tail].column = 0;
//    que.tail++;
//
//    while (que.head < que.tail) {
//        for(int i = 0; i<4; i++){
//            int temp_row = que.array[que.head].row + direction_preset[i][0];
//            int temp_column = que.array[que.head].column + direction_preset[i][1];
//            if(temp_row < boundry || temp_row > boundry || temp_column < 0 || temp_column > boundry){
//                continue;
//            }
//
//            if(map[temp_row][temp_column] != 2 && book[temp_row][temp_column] == 0){
//                que.array[que.tail].row = temp_row;
//                que.array[que.tail].column = temp_column;
//                que.array[que.tail].step = que.array[que.head].step + 1;
//                que.tail++;
//                book[temp_row][temp_column] = 1;
//            }
//        }
//    }
//    return 0;
//}
