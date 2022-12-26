const inputData = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const cookTime = Number(inputData[1].trim());
const  hour = Number(inputData[0].split(' ')[0]);
const  minute = Number(inputData[0].split(' ')[1]);

const cookEndHour = parseInt((hour * 60  + (cookTime + minute)) / 60);
const cookEndMinute = parseInt((hour * 60  + (cookTime + minute)) % 60);



console.log(cookEndHour >= 24 ? Math.abs(24 - cookEndHour) : cookEndHour, cookEndMinute)

