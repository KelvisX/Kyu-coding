// C arrays - 1D arrays
#include <stdio.h>

int main() {
    int marks[5] = {50, 70, 80, 2};
    for (int i = 0; i < 5; i++) {
        printf("marks[%d] = %d\n", i, marks[i]);  // Accessing the array element marks[i]
    }
    return 0;
}