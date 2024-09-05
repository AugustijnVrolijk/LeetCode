#include <stdio.h>
#include <stdlib.h>


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n);

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int *temp = nums1 -1;
    *temp = 0;
    temp = nums2 -1;
    *temp = 0;

    int *j = nums1 + (m-1);
    nums2 += (n-1);
    int *k = j + n; 

    for(int i = 0; i < (m+n); i++){
        printf("*j: %d, *k: %d, *nums2: %d\n", *j, *k, *nums2);
        for(int i = 0; i < m+n; i++){
            printf("%d", nums1[i]);
        }
        printf("\n");
        if (*j > *nums2) {
            *k-- = *j--;
        } else {
            *k-- = *nums2--;
        }
    }
    printf("*j: %d, *k: %d, *nums2: %d\n", *j, *k, *nums2);
    printf("j: %p, k: %p, nums2: %p\n", j, k, nums2);

    return;
}

int main() {
    int nums1[] = {2,2,3,0,0,0};
    int m = 3;
    int nums2[] = {1,5,6};
    int n = 3;
    printf("*nums1: %d, nums1: %p\n", *nums1, nums1);

    merge(nums1, sizeof(int), m, nums2, sizeof(int), n);

    for(int i = 0; i < m+n; i++){
        printf("%d", nums1[i]);
    }
    return 0;
}