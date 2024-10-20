//2d arrays
#include<stdio.h>

int main() {
    int marks[3][3] = { {50, 70, 80}, {60, 85, 90}, {75, 80, 95} };

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("marks[%d][%d] = %d \n", i, j, marks[i][j]);
        }
    }

    return 0;
}
