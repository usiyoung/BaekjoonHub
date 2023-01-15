const fs = require("fs");
const input = (
  process.platform === "linux"
    ? fs.readFileSync("/dev/stdin").toString()
    : `58`
)
  .trim()
  .split(" ");

const num = Number(input);
let count = 1;
let sum = 1;
while(sum < num){
  sum += ((count * 6 ));
  count++;
}
console.log(count)
