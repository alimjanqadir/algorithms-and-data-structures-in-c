

#include <stdio.h>
void full_order_2_dfs(int);
int full_order_2(void);



int full_order_2(){
    full_order_2_dfs(1);
    return 0;
}

void full_order_2_dfs(int step) {
    int n = 9;
    int array[10];
    int bucket[9];

    if (step == n + 1) {
        int a = array[1] * 100 + array[2] * 10 + array[3];
        int b = array[4] * 100 + array[5] * 10 + array[6];
        int c = array[7] * 100 + array[8] * 10 + array[9];
        if (a + b == c) {
            printf("Match: %d + %d = %d \n",a,b,c);
        }
        return;
    }

    for (int i=1; i<=n; i++) {
        if (bucket[i] == 0) {
            array[step] = i;
            bucket[i] = 1;
            full_order_2_dfs(step+1);
            bucket[i] = 0;
        }
    }
}
