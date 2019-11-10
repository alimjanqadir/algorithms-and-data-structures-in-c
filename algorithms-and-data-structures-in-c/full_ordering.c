

#include <stdio.h>
int full_order(void);

int full_order(){
    int a[9],i,j,k;
    int bucket[10];
    int difference_counter = 0;
    int counter = 0;
    for (a[0] = 1; a[0]<=9; a[0]++)
        for (a[1] = 1; a[1]<=9; a[1]++)
            for (a[2] = 1; a[2]<=9; a[2]++)
                for (a[3] = 1; a[3]<=9; a[3]++)
                    for (a[4] = 1; a[4]<=9; a[4]++)
                        for (a[5] = 1; a[5]<=9; a[5]++)
                            for (a[6] = 1; a[6]<=9; a[6]++)
                                for (a[7] = 1; a[7]<=9; a[7]++)
                                    for (a[8] = 1; a[8]<=9; a[8]++){
                                        // Reset the bucket and counters
                                        difference_counter = 0;
                                        for (i=0; i<10; i++) {
                                            bucket[i] = 0;
                                        }
                                        
                                        // Save appeared number in the bucket
                                        for (i = 0; i<9; i++)
                                            bucket[a[i]]++;
                                        
                                        // Iterate the bucket and count the numbers only appeared once
                                        for (j=1; j<10; j++) {
                                            if (bucket[j] == 1) {
                                                difference_counter++;
                                            }
                                        }
                                        
                                        // If all the numbers are appeared once we will output that result.
                                        if (difference_counter == 9) {
                                            printf("Matched: ");
                                            
                                            for (k=0; k<9; k++) {
                                                printf("%d",a[k]);
                                            }
                                            printf("\n");
                                            counter++;
                                        }
                                    }
    printf("Total match count: %d",counter);
    return 0;
}
