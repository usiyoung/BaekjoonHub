const fs = require("fs");
const input = (
  process.platform === "linux"
    ? fs.readFileSync("/dev/stdin").toString()
    : `
    2
6 12 10
30 50 72
    `
)
  .trim()
  .split('\n');

const count = input.shift();

for(let i = 0; i < count; i++){
  const [ H, W, N ] = input[i].trim().split(' ').map(Number);
  let Y = N % H;
  let X = parseInt(N / H);

  if(Y != 0 ){
    X++;
  }else{
    Y = H;
  }
  console.log(Y + String(X).padStart(2,'0'));
}
