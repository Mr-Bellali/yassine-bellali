#include <stdio.h>
#include <stdlib.h>

int randgen() {
    int lower = 0;
    int higher = 9;
    return (rand() % (higher - lower + 1)) + lower;
}

int main() {
    int tab[7], min_idx;
    
    for (int i = 0; i < 7; i++) {
        tab[i] = randgen();
    }

    printf("Unsorted array:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d\t", tab[i]);
    }
    printf("\n");

    for (int i = 0; i < 7; i++) {
        min_idx = i;
        for (int j = i; j < 7; j++) {
            if (tab[j] < tab[min_idx])
                min_idx = j;
        }

        int temp = tab[min_idx];
        tab[min_idx] = tab[i];
        tab[i] = temp;

        printf("Array after swap %d:\n", i+1);
        for (int k = 0; k < 7; k++) {
            printf("%d\t", tab[k]);
        }
        printf("\n");
    }

    printf("Sorted array:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d\t", tab[i]);
    }
    printf("\n");

    return 0;
}
