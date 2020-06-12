### Ch4 - Data Structures - Objects and Arrays
- [The Sum of a Range](./SumOfRange.js)
- [Reversing an Array](./ReverseArray.js)
- [A List](./AList.js)
- [Deep Comparison](./DeepComparison.js)

#### Notes:
- `let listOfNumbers = [2, 3, 5, 7, 11]`
- Object properties:
```
let day1 = {
   squirrel: false,
   events: ["work", "touched tree", "pizza", "running"]
};
```
- `Object.assign(objectA, {b: 3, c: 4})` copies properties frorm another oject into the current object
- `for (let entry of JOURNAL)` foreach
- `todoList.shift()` = pop - but from te front of the array
- `todoList.unshift(task)` = push - but to the front of the array
- `array.slice(2, 4)` shows the elements within the specified range
>   The delete operator cuts off a tentacle from such an octopus. It is a unary operator that, when applied to an object property, will remove the named property from the object.
- `String(6).padStart(3, "0")` padding
- `words.join(". ")`
- `"LA".repeat(3)`
- `function max(...numbers)` any number of arguments
>  JSON looks similar to JavaScript’s way of writing arrays and objects, with a few restrictions. All property names have to be surrounded by double quotes, and only simple data expressions are allowed—no function calls, bindings, or anything that involves actual computation. Comments are not allowed in JSON.
- `JSON.stringify` convert to
- `JSON.parse` convert from
- `value.prop` access properties