const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n')

const count = input[1].split(' ').filter(el =>  el === input[2]).length;

console.log(count)

