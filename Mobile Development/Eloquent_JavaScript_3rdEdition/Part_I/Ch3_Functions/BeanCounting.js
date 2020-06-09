// part 1
function countBs(string) {
    let count = 0;
    for (let i = 0 ; i < string.length ; ++i) {
        if (string[i] == "B") count++;
    }
    return count;
}

console.log(countBs("bBBBbbBBb"));


//____________________________________________
// part 2
function countChar(string, char) {
    let count = 0;
    for (let i = 0 ; i < string.length ; ++i) {
        if (string[i] == char)  count++;
    }
    return count;
}

console.log(countChar("bBBBbbBBb", 'b'));