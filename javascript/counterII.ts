type Counter = {
    increment: () => number,
    decrement: () => number,
    reset: () => number,
}

function createCounter(init: number): Counter {
    const temp = init;
    return {
        increment: function() {
            init++;
            return init;
        },
        decrement: function() {
            init--;
            return init;
        },
        reset: function() {
            init = temp;
            return init;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
