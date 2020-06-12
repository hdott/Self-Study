function deepEqual(first, second) {
    if (first === second) return true;

    if (!first || !second) {
        return false;
    }

    if ((typeof(first) == "object" && typeof(second) != "object") ||
        (typeof(first) != "object" && typeof(second) == "object")) {
            return false;
    }

    let keysFirst = Object.keys(first);
    let keysSecond = Object.keys(second);

    if (keysFirst.length != keysSecond.length) {
        return false;
    }

    for (let key of keysFirst) {
        if (!keysFirst.includes(key) || !deepEqual(first[key], second[key])) return false;
      }

    return true;
}

let obj = {here: {is: "an"}, object: 2};

console.log(deepEqual(obj, obj));
console.log(deepEqual(obj, {here: 1, object: 2}));
console.log(deepEqual(obj, {here: {is: "an"}, object: 2}));