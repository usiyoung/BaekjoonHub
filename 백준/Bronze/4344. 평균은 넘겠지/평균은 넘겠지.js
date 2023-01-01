const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n')
const count = input.shift();

input.map(item => {
  let sum = 0;
  const numStudents = item.split(' ').shift();
  const arr = item.split(' ').slice(1);
  const avg = arr.reduce((acc, v) => acc += v * 1 , 0) / numStudents;

  let avgOverCount = arr.filter(item => avg < item).length;
  console.log(`${ (avgOverCount / numStudents * 100).toFixed(3)}%`);
})
