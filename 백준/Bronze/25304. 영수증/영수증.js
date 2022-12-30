const inputData = require('fs').readFileSync('/dev/stdin').toString();

let input = inputData.trim().split('\n');

let count = Number(input[1]) + 1 ;
let result = 0;

for(let i = 2; i <= count; i++){
  let arr = input[i].split(' ').map(Number);
  result += arr[0] * arr[1];
}

console.log(Number(input[0]) === result ? 'Yes': 'No')