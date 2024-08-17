
#include <stdio.h>
#include <stdlib.h>


int* twoSum(int* nums, int numsSize, int target, int* returnSize);
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    int *numbers;
    if (!(numbers = (int *)malloc(numsSize * sizeof(int)))) {
        printf("failed to malloc memory for numbers array\n");
        exit(1);
    }
    return 0;
}

int main() {
    int nums[] = {2,7,11,15};
    int numsSize = 4; 
    printf("hello loosers");

    return 0;
    }

