#include <stdio.h>

int main(void) {
    int equivalent_sum, size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the num: ");
    scanf("%d", &equivalent_sum);
    int nums[size];
    int array_indices[size][2];
    int pair_count = 0;
    for (int a = 0; a < size; a++) {
        printf("Enter a Numerical Value: ");
        scanf("%d", &nums[a]);
    }
    for (int x = 0; x < size; x++) {
        for (int y = x + 1; y < size; y++) {
            if (nums[x] + nums[y] == equivalent_sum) {
                array_indices[pair_count][0] = x;
                array_indices[pair_count][1] = y;
                pair_count++; 
            }
        }
    }
    if (pair_count > 0) {
        printf("Pairs of indices:\n");
        for (int m = 0; m < pair_count; m++) {
            printf("[%d,%d]\n", array_indices[m][0], array_indices[m][1]);
        }
    } else {
        printf("No pairs found.\n");
    }
    return 0;
}