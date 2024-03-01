/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* resultArray = (int*)malloc(numsSize * sizeof(int));
    int* visitedArray = (int*)calloc((numsSize + 1), sizeof(int));
    int count = 0;
    int arrCount = 0;
    int temp;
    for (int i = 0; i < numsSize; i++) {
        temp = nums[i];
        if (visitedArray[temp] == 0) {
            visitedArray[temp] = 1;
        }
    }

    for (int i = 1; i <= numsSize; i++) {
        if (visitedArray[i] == 0) {
            resultArray[arrCount++] = i;
        }
    }
    *returnSize = arrCount;
    return resultArray;
}
