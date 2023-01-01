const index = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n').map(Number);
const arr = index.map(el => el % 42);

const findDuplicates = arr => arr.filter((item,index)=> arr.indexOf(item) === index).length;

const duplicates = findDuplicates(arr)

console.log(duplicates)