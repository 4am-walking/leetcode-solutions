int numberOfSteps(int num){
    int sumOfSteps = 0;
    for (int i=0;i<num;) {
        if (num % 2 == 0) {
            num = num / 2;
            sumOfSteps++;
        } else {
            num--;
            sumOfSteps++;
        }
    }
    return sumOfSteps;
}
