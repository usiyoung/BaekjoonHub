const input = require('fs').readFileSync('/dev/stdin').toString().trim();

let result = '';
for(let i = 1; i <= input; i++){
  result += ' '.repeat(input - i) + '*'.repeat(i) + '\n';
}

console.log(result)