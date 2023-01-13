const fs = require("fs");
const input = (
  process.platform === "linux"
    ? fs.readFileSync("/dev/stdin").toString()
    : `1000 70 170`
)
  .trim()
  .split(" ");

const [A,B,C] = input;

if(C - B <= 0){
  console.log('-1')
}else{
  console.log(Math.floor(A / (C - B) + 1))
}
