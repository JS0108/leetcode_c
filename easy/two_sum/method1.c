int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j;
    int value;
    *returnSize = 2;
    int *arr = malloc(*returnSize * sizeof(int));
    
    for (i = 0; i < numsSize - 1; i++) {
        value = target - nums[i];
        for (j = i + 1; j < numsSize; j++) {
            if (nums[j] == value) {
                arr[0] = i;
                arr[1] = j;
                return arr;
            }
        }
    }
    arr[0] = -1;
    arr[1] = -1;
    return arr;
}