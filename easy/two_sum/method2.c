#include <stdlib.h>
#include <stdio.h>

int cmpfcn(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    qsort(nums, numsSize, sizeof(int), cmpfcn);
    for (int i = 0; i < numsSize; i++)
        printf("%d ", nums[i]);
    printf("\n");
    *returnSize = 2;
    int *arr = malloc(*returnSize * sizeof(int));
    int i = 0;
    int j = numsSize - 1;
    
    while (i < j) {
        if (nums[i] + nums[j] > target) {
            j--;
        } else if (nums[i] + nums[j] < target) {
            i++;
        } else {
            arr[0] = i;
            arr[1] = j;
            return arr;
        }
    }
    
    arr[0] = -1;
    arr[1] = -1;
    return arr;
}