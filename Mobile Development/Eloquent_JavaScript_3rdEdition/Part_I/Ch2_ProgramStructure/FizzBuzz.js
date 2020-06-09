// part_1
for (let i = 1 ; i <= 100 ; ++i) {
    if (!(i % 3)) {
        console.log("Fizz");0
        continue;
    } 

    if (!(i % 5)) {
        console.log("Buzz");
        continue;
    }

    console.log(i);
}

//_____________________________________
// part_2
for (let i = 1 ; i <= 100 ; ++i) {
    if (!(i % 3) && !(i % 5)) {
        console.log("FizzBuzz");
        continue;
    }

    if (!(i % 3)) {
        console.log("Fizz");0
        continue;
    } 

    if (!(i % 5)) {
        console.log("Buzz");
        continue;
    }

    console.log(i);
}