
const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');
const newArr = new Array(30).fill(null);

input.map(el => newArr[el - 1] = Number(el))
newArr.map((el,index) => el === null && console.log(index + 1 ))