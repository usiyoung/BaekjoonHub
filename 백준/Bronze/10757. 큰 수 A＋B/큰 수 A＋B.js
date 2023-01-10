const input = require('fs').readFileSync('/dev/stdin').toString();
const [A,B] = input.split(' ');
console.log((BigInt(A) + BigInt(B)).toString())
