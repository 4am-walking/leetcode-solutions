type Fn = (...params: any[]) => Promise<any>;

function timeLimit(fn: Fn, t: number): Fn {
    return async function(...args) {
        return await new Promise(async (res, rej) => {
            setTimeout(() => rej("Time Limit Exceeded"), t);
            return fn(...args)
            .then(result => res(result))
            .catch(error => rej(error))
        });
    }
};

/**
 * const limited = timeLimit((t) => new Promise(res => setTimeout(res, t)), 100);
 * limited(150).catch(console.log) // "Time Limit Exceeded" at t=100ms
 */
