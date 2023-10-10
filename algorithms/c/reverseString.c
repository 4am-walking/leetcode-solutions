void reverseString(char* s, int sSize){
    int temp;
    int start = 0;
    int end = sSize - 1;
    while (start < end) {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}
