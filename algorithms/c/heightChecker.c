int heightChecker(int* heights, int heightsSize) {
    int temp;
    int swapped;
    int compareArray[heightsSize];

    for (int i = 0; i < heightsSize; i++) {
        compareArray[i] = heights[i];
    }

    // Bubble Sort
    for (int i = 0; i < heightsSize - 1; i++) {
        swapped = 0;
        for (int j = 0; j < heightsSize - i - 1; j++) {
            if (compareArray[j] > compareArray[j + 1]) {
                temp = compareArray[j];
                compareArray[j] = compareArray[j + 1];
                compareArray[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }

    int count = 0;
    for (int i = 0; i < heightsSize; i++) {
        if (compareArray[i] != heights[i]) {
            count++;
        }
    }
    return count;
}
