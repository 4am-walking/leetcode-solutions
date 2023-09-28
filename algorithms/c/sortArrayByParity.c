/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int* resultArray = (int*)malloc(numsSize * sizeof(int));
    int countEven = 0;
    int countOdd = numsSize - 1;
    for (int i=0;i<numsSize;i++) {
        if (nums[i] % 2 == 0) {
            resultArray[countEven] = nums[i];
            countEven++;
        } else {
            resultArray[countOdd] = nums[i];
            countOdd--;
        }
    }
    return resultArray;
}
