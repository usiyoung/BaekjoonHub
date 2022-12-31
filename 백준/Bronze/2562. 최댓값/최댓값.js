const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n').map(Number)
const maxNum = Math.max(...input);

console.log(maxNum + '\n' + (parseInt(input.indexOf(maxNum)) + 1))