#include <stdio.h>

int main() {
    // Step i: Define an array data structure
    


    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };

    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            printf("%d\n",scores[i][j]);
        }
    }

    return 0;
}
