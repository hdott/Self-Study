// 1st attempt
for (let i = 1 ; i <= 7 ; ++i) {
    let line = "";
    for (let j = 0 ; j < i ; ++j) {
        line += "#";
    }
    console.log(line);
}

//_______________________________________
// 2nd attempt
let line = "";
for (let i = 0 ; i < 7 ; ++i){
    line += "#";
    console.log(line);
}


//______________________________________
// 3rd attempt
let line = "";
while (line.length < 7) {
    line += "#";
    console.log(line);
}