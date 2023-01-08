const arr = new Array(10000).fill(null);

arr.forEach((_,index)=>{
  const cal = String(index).trim().split('').map(Number).reduce((acc,cur) => acc + cur, 0)
  const sum = index + cal;
  arr[sum] = sum;
})

arr.filter((item,index) => item === null && console.log(index))