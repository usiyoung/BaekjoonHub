const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

let result = '';
for(let i = 1; i <= input[0]; i++){
  let newArr = input[i].split(' ');
  result += Number(newArr[0]) + Number(newArr[1]) + '\n';
}

console.log(result);