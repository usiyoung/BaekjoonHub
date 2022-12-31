
const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const count = input[1].split(' ').filter(el =>  Number(el) < input[0].split(' ')[1]).join(' ')

console.log(count)
