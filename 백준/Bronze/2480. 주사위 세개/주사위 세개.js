let [A,B,C] = require("fs").readFileSync("/dev/stdin").toString().trim().split(" ").map(Number).sort((x,y)=> x-y);

if(A==B && B==C){
  console.log(10000 + A*1000)
} else if(A==B || B==C){
  console.log(1000 + B*100)
} else {
  console.log(C*100)
}