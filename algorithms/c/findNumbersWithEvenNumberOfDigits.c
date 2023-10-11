int findNumbers(int* nums, int numsSize){
    int countDigits = 0;
    int countFinal = 0;
    for (int i = 0; i < numsSize; i++) {
        countDigits = 0;
        while (nums[i] != 0) {
            nums[i] = nums[i] / 10;
            countDigits++;
        }
        if (countDigits % 2 == 0) {
            countFinal++;
        }
    }
    return countFinal;
}
