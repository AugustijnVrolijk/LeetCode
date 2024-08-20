#include <stdio.h>
#include <stdlib.h>


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n);

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    return;
}

int main() {
    int nums1[] = {1,2,3,0,0,0};
    int m = 3;
    int nums2[] = {2,5,6};
    int n = 3;

    merge(&nums1, 2, m, &nums2, 2,n);

    for(int i = 0; i < m+n; i++){
        printf("%d", nums1[i]);
    }
    return 0;
}