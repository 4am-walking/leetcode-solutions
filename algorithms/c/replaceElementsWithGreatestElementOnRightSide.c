/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize){
    *returnSize = arrSize;
    int temp = arr[arrSize - 1];
    arr[arrSize - 1] = -1;
    for (int i = arrSize - 2; i >= 0; i--) {
        int current = arr[i];
        arr[i] = temp;
        if (current > temp) {
            temp = current;
        }
    }
    return arr;
}
