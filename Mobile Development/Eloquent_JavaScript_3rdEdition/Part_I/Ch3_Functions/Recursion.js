// part 1
function isEven(value) {
    if (value == 0) return true;
    if (value == 1) return false;
    return isEven(value-2);
}

console.log(isEven(50));
console.log(isEven(75));
console.log(isEven(-1));


//_________________________________
// part 2
function isEven(value) {
    if (value < 0)  value = -value;
    if (value == 0) return true;
    if (value == 1) return false;
    return isEven(value-2);
}

console.log(isEven(50));
console.log(isEven(75));
console.log(isEven(-1));