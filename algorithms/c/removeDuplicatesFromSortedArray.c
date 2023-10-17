int removeDuplicates(int* nums, int numsSize){
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (i == 0 || nums[i] != nums[i - 1]) {
            nums[count] = nums[i];
            count++;
        }
    }
    return count;
}
