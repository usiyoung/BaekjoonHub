const input = require('fs').readFileSync('/dev/stdin').toString().trim();
const string = new Array(26).fill().map((_,i) => String.fromCharCode(i + 97))

let result = '';
result += string.map(str => input.includes(str) ? input.indexOf(str) : -1).join(' ');
console.log(result)