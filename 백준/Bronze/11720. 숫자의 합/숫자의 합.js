const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');
console.log(input[1].split('').reduce((item,v)=> item += (v * 1),0))