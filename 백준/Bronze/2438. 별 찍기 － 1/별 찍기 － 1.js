
const input = require('fs').readFileSync('/dev/stdin').toString().trim();

let result = '';
  for(let i = 0; i < input; i++){
    for(let j = 0; j < i; j++){
      result += '*'
    }
    result += '*' + '\n'
}

console.log(result)