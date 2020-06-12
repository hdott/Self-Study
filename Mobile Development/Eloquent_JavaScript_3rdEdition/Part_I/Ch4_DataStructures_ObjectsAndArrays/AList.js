function arrayToList(array) {
    let list = {
        value: array[0],
        rest: null
    }

    let e = array.indexOf(1);
    let pointer = list;
    for (let i = 1; i < array.length; ++i) {
        pointer.rest = {
            value: array[i],
            rest: null
        }
        pointer = pointer.rest;
    }
    return list;
}

function listToArray(list) {
    let array = [];
    for (pointer = list; pointer != null; pointer = pointer.rest) {
        array.push(pointer.value);
    }
    return array;
}

function prepend(el, list) {
    return list = {
        value: el,
        rest: list
    }
}

function nth(list, pos) {
    let pointer = list;
    let i = 0;
    
    while (pointer) {
        if (i == pos) {
            return pointer.value;
        }      
        pointer = pointer.rest;
        ++i;
    }
    return undefined;
}

function recursiveNth(list, pos) {
    let pointer = list;
    if (!list) {
        return undefined;
    }

    if (!pos) {
        return list.value;
    }

    return recursiveNth(pointer.rest, pos-1);
}

let list = arrayToList([1,2,3,4,5]);
let arr = listToArray(list);

console.log(list);
console.log(arr);
console.log(prepend(00, list));
console.log(nth(list, 1));
console.log(recursiveNth(list, 1));