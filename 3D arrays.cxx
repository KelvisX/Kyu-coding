//3d arrays
#include<stdio.h>

int main() {
    int marks[2][2][2] = {
        { {10, 20}, {30, 40} },
        { {50, 60}, {70, 80} }
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                printf("marks[%d][%d][%d] = %d \n", i, j, k, marks[i][j][k]);
            }
        }
    }

    return 0;
}