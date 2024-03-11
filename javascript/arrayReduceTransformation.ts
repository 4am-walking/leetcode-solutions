type Fn = (accum: number, curr: number) => number

function reduce(nums: number[], fn: Fn, init: number): number {
    if (nums.length == 0) {
        return init;
    } else {
        let res: number = fn(init, nums[0]);
        for (let i = 1; i < nums.length; i++) {
            res = fn(res, nums[i]);
        }
        return res;
    }
};
