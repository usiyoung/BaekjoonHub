const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n')

input.shift();
input.map(item => {
  const repeatCount = item.split(' ')[0]
  const repeatString = item.split(' ')[1].split('')
console.log(repeatString.map(str => str.repeat(repeatCount)).join(''))
})
