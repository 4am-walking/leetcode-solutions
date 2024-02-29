int thirdMax(int* nums, int numsSize) {
    // Sort
    int temp = 0;
    for (int i = 0; i < numsSize; i++) { 
        for (int j = i + 1; j < numsSize; j++) { 
            if (nums[i] < nums[j]) { 
                temp = nums[i]; 
                nums[i] = nums[j]; 
                nums[j] = temp; 
            } 
        } 
    }

    // Remove Duplicates
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (i == 0 || nums[i] != nums[i - 1]) {
            nums[count] = nums[i];
            count++;
        }
    }
    
    if (count >= 3) {
        return nums[2];
    } else {
        return nums[0];
    }
}
