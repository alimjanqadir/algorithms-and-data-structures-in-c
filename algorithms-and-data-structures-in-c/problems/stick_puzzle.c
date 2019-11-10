//
//  stick_puzzle.c
//  algorithms-and-data-structures-in-c
//
//  Created by Alimjan Qadir on 2019/5/30.
//  Copyright © 2019 Alimjan Qadir. All rights reserved.
//

#include <stdio.h>
int solve_puzzle(void);
int calculate_stick_count(int number);

int solve_puzzle(){
    int a,b,c;
    int available_stick_count = 24;
    
    // Find equation that could be formed by 24 sticks.
    for (a=0; a<999; a++) {
        for (b=0; b<999; b++) {
            c = a+b;
            int total_stick_count = calculate_stick_count(a) +  calculate_stick_count(b) + calculate_stick_count(c);
            if (total_stick_count == available_stick_count - 4) {
                if (a+b == c) {
                    printf("%d + %d = %d \n",a,b,c);
                }
            }
        }
    }
    
    getchar();getchar();
    return 0;
}

int calculate_stick_count(int number){
    int preset[] = {6,2,5,5,4,5,6,3,7,6};
    int stickCount = 0;
    
    // if the number is multiple digits, break it and calculate stick count one digit at a time.
    while (number / 10 != 0) {
        stickCount += preset[number % 10];
        number = number / 10;
    }
    
    // calculate a single digit's stick count.
    stickCount+= preset[number];
    
    return stickCount;
}
