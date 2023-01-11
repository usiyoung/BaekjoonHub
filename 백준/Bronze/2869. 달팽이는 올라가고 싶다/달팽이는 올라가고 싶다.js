const fs = require("fs");
const input = (
  process.platform === "linux"
    ? fs.readFileSync("/dev/stdin").toString()
    : `100 99 1000000000`
)
  .trim()
  .split(" ");

const [up,down,totalMeter] = input.map(Number)
let days = 0;
days = Math.ceil((totalMeter - down) / (up - down));

console.log(days);


