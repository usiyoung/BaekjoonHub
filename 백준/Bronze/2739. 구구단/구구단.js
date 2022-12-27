
const input = require('fs').readFileSync('/dev/stdin').toString();

const inputData = Number(input);

for(let num = 1 ; num <=9 ; num++){
  console.log(`${inputData} * ${num} = ${inputData * num}`)
}


