/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int* resultArray = (int*)malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        resultArray[i] = nums[i] * nums[i];
    }
    // Bubble Sort
    int temp;
    int swapped;
    for (int i = 0; i < numsSize - 1; i++) {
        swapped = 0;
        for (int j = 0; j < numsSize - i - 1; j++) {
            if (resultArray[j] > resultArray[j + 1]) {
                temp = resultArray[j];
                resultArray[j] = resultArray[j + 1];
                resultArray[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
    return resultArray;
}
