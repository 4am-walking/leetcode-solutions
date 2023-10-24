void moveZeroes(int* nums, int numsSize){
    int writePointer = 0;
    for (int readPointer = 0; readPointer < numsSize; readPointer++) {
        if (nums[readPointer] != 0) {
            nums[writePointer] = nums[readPointer];
            if (writePointer != readPointer) {
                nums[readPointer] = 0;
            }
            writePointer++;
        }
    }
    
}
