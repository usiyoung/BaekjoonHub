let input = require('fs').readFileSync('/dev/stdin').toString().trim();
const arr = ['c=','c-','dz=','d-','lj','nj','s=','z=']
arr.map(str=> input = input.replaceAll(str,0))
console.log(input.split('').length)