// part 1
function range(start, end) {
    let arr = [];
    for (let i = start ; i <= end ; ++i){
        arr.push(i);
    }
    return arr;
}

function sum(arr) {
    let sum = 0;
    for (let nr of arr) {
        sum += nr;
    }
    return sum;
}

console.log(sum(range(1,10)));



//_______________________________________
// part 2
function range(start, end, step) {
    if (!step)  step = 1;

    let arr = [];
    for (let i = start ; i != end ; i += step){
        arr.push(i);
    }
    arr.push(end);
    return arr;
}

function sum(arr) {
    let sum = 0;
    for (let nr of arr) {
        sum += nr;
    }
    return sum;
}

console.log(sum(range(5,2,-1)));