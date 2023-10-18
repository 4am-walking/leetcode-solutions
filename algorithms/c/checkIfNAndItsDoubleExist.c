bool checkIfExist(int* arr, int arrSize){
    if (arr == NULL || arrSize == 0) {
        return false;
    }
    for (int i = 0; i < arrSize; i++) {
        for (int j = 0; j < arrSize; j++) {
            if (arr[i] != arr[j] && arr[i] == 2 * arr[j] && 0 <= i && j < arrSize) {
                return true;
            }
        }
    }
    return false;
}
