const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');
const score = input[1].split(' ');
const max =  Math.max(...score);

let result = 0;
for(let i = 0; i < input[0]; i++){
  result += score[i] / max * 100;
}

console.log(result / input[0]);