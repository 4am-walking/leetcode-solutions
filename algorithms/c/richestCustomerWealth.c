int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int i,j;
    int sum = 0;
    int maxWealth = 0;
    for (i=0;i<accountsSize;i++){
        sum = 0;
        for(j=0;j<accountsColSize[i];j++){
            sum = sum + accounts[i][j];
        }
        if (sum > maxWealth){
            maxWealth = sum;
        }
    }
    return maxWealth;
}
