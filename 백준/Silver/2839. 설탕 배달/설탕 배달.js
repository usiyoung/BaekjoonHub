const fs = require("fs");
let input = (
  process.platform === "linux"
    ? fs.readFileSync("/dev/stdin").toString()
    : `11`
)
  .trim()


let count = 0;

while(true){
  if(input % 5 === 0){
    count += input / 5;
    break;
  }

  input -= 3;
  count += 1;

  if(input < 0){
    count = -1;
    break;
  }
}

console.log(count)