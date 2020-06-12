function reverseArray(arr) {
    let newArr = arr;
    for (let i = 0, j = newArr.length-1; i < j / 2; ++i, --j) {
        let tmp = newArr[i];
        newArr[i] = newArr[j];
        newArr[j] = tmp;
    }
    return newArr;
}

function reverseArrayInPlace(arr) {
    for (let i = 0, j = arr.length-1; i < j / 2; ++i, --j) {
        let tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

let array = [1,2,3,4,5];

console.log("Array:\t\t" + array);
console.log("Reversed:\t" + reverseArray(array));
console.log("Array:\t\t" + array);
reverseArrayInPlace(array);
console.log("InPlace:\t" + array);