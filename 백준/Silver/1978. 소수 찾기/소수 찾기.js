const fs = require('fs');
const [N,num] = fs.readFileSync('/dev/stdin').toString().split('\n');

const array = num.split(' ').map((item) => Number(item));
let answer = 0;
for(let i=0; i < array.length; i++){
    if(array[i] === 1){
        continue;
    }else{
        let count = 0;
        for(let j=2; j<array[i]; j++){
            if(array[i]%j === 0){
                count++;
            }
        }
        if(count === 0){
            answer++;
        }
    }
}
console.log(answer)