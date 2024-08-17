
#include <stdio.h>
#include <stdlib.h>


int* twoSum(int* nums, int numsSize, int target, int* returnSize);
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* temp;
    if (!(temp = (int *)malloc(2 * sizeof(int)))) {
        printf("failed to malloc memory for numbers array\n");
        exit(1);
    }

    for(int i = 0; i < numsSize;i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[i] + nums[j] == target) {
                *returnSize = 2;
                temp[0] = i;
                temp[1] = j;
                return temp;
            }
        }
    }

    printf("no match was found");
    return 0;
}

int main() {
    int nums[] = {2,7,11,15};
    int numsSize = 4; 
    int target = 9;
    int* returnSize;
    if (!(returnSize = (int *)malloc(2 * sizeof(int)))) {
        printf("failed to malloc memory for numbers array\n");
        exit(1);
    }
    returnSize = twoSum(nums, numsSize, target, returnSize);
    printf(returnSize);
    free(returnSize);
    printf("hello loosers");

    return 0;
    }

