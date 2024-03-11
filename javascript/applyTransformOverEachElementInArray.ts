function map(arr: number[], fn: (n: number, i: number) => number): number[] {
    const returnArray: number[] = [];
    for (let i = 0; i < arr.length; i++) {
        returnArray[i] = fn(arr[i], i);
    }
    return returnArray;
};
