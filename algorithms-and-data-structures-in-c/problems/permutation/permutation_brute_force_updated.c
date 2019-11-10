//
//  enumeration-algorithm-updated.c
//  algorithms-and-data-structures-in-c
//
//  Created by Alimjan Qadir on 2019/5/14.
//  Copyright © 2019 Alimjan Qadir. All rights reserved.
//

#include <stdio.h>
void permutation_brute_force_updated(){
    int a[10],bucket[10],total=0;
    for (a[1]=1; a[1]<=9; a[1]++)
        for (a[2]=1; a[2]<=9; a[2]++)
            for (a[3]=1; a[3]<=9; a[3]++)
                for (a[4]=1; a[4]<=9; a[4]++)
                    for (a[5]=1; a[5]<=9; a[5]++)
                        for (a[6]=1; a[6]<=9; a[6]++)
                            for (a[7]=1; a[7]<=9; a[7]++)
                                for (a[8]=1; a[8]<=9; a[8]++)
                                    for (a[9]=1; a[9]<=9; a[9]++)
                                    {
                                        if ((a[1]*100 + a[2]*10 + a[3]) + (a[4]*100 + a[5]*10 + a[6]) == (a[7]*100 + a[8]*10 + a[9])) {
                                            int sum = 0;
                                            // Reset the bucket
                                            for (int i=1; i<=9; i++) {
                                                bucket[i] = 0;
                                            }
                                            
                                            // Put flags to bucket
                                            for (int i=1; i<=9; i++) {
                                                bucket[a[i]]++;
                                            }
                                            
                                            // Read the flags in the bucket and increament the sum for how many different numbers in the bucket
                                            for (int i=1; i<=9; i++) {
                                                if(bucket[i] >= 1){
                                                    sum++;
                                                }
                                            }
                                            
                                            // Sum equals to 9 only when there are no overlap in the bucket
                                            if (sum == 9) {
                                                total++;
                                                printf("%d%d%d + %d%d%d = %d%d%d \n",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
                                            }
                                        }
                                    }
    printf("Total of %d match. \n", total/2);
}
