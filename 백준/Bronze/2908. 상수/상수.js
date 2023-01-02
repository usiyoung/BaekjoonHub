const [A,B] = require('fs').readFileSync('/dev/stdin').toString().trim().split(' ')

const a = A.split('').reverse().join('');
const b = B.split('').reverse().join('');

console.log(Math.max(a,b))
