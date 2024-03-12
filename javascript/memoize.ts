type Fn = (...params: number[]) => number

function memoize(fn: Fn): Fn {
    const map = {};
    return function(...args): number {
        const parsedArgs = args.join(',');
        if (parsedArgs in map) {
            return map[parsedArgs];
        }
        map[parsedArgs] = fn(...args);
        return map[parsedArgs];
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */
