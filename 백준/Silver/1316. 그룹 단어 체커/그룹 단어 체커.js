const input = require('fs').readFileSync('/dev/stdin').toString().trim();
const list = input.split('\n');
const n = list.shift();
let notGroupWord = 0;
for(let i = 0; i < n; i++){
  let strArr = new Array(26).fill(0);
  let item = list[i].trim();
  for(let j = 0; j < item.length -1; j++){
    let cur = item[j];
    let next = item[j + 1 ];

    if(cur === next) continue;
    else {
      if(strArr[next.charCodeAt(0) - 97]){
        notGroupWord += 1;
        break;
      }
      strArr[cur.charCodeAt(0) - 97] += 1;
    }
  }
}
console.log(n - notGroupWord)
