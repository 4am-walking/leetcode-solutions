void duplicateZeros(int* arr, int arrSize){
    int length = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == 0) {
            if (length + 1 < arrSize) {
                for (int j = arrSize - 1; j > i; j--) {
                    arr[j] = arr[j - 1];
                }
                if (i + 1 < arrSize) {
                    arr[i + 1] = 0;
                }
            }
            i++;
        }
        length++;
    }
}
