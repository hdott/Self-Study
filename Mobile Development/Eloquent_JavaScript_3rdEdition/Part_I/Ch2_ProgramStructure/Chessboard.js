// part_1
let a = "# # # #";

for (let i = 0 ; i < 8 ; ++i) {
    if (!(i % 2)) {
        let b = " " + a;
        console.log(b);
    } else {
        console.log(a);
    }
}

//___________________________________
// part_2
let a = "# # # #";
let size = 8;

for (let i = 0 ; i < size ; ++i) {
    if (!(i % 2)) {
        let b = " " + a;
        console.log(b);
    } else {
        console.log(a);
    }
}