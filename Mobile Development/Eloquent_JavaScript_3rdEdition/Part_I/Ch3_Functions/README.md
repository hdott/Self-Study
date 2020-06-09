### Ch 3 - Functions


#### Notes:
- `const makeNoise = function() {};`
- `function square(x) {}`
- `const square1 = (x) => {};`
- use `=== or !==` when comparing null or undefined
- closure
```
function multiplier(factor) {
  return number => number * factor;
}

let twice = multiplier(2);
console.log(twice(5));
// → 10
```
