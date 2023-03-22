#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void bubbleSort(int array[], int n) {
    int i;
    int j;
    int tmp;
    int count = 0; // Counts the amount of swaps
    int pass = 0; // Counts which pass it is on

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                tmp = array[j];
                count++;
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
        pass++;
        printf("Pass #%d: %d\n", pass, count);
        count = 0;
    }
}

int main() {
    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

    bubbleSort(array, 9);


    return 0;
}
