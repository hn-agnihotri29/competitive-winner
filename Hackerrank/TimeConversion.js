let s = "06:05:45AM"

let result = s.substring(8, 10);
console.log(result);
let number = Number(s.substring(0,2));
console.log(number);


let newNumber;
let stringNumber;
let newString;

let arr = s.split("");
arr.pop();
arr.pop();
console.log(arr);

if(result === "PM") {
  newNumber = 12 + number;
  stringNumber = newNumber.toString();
  
} 
if(result === "PM" && number === 12) {
  stringNumber = number.toString();
  
} 
if(result === "AM") {
  stringNumber = 0 + number.toString();
}
if(result == "AM" && number === 12) {
  stringNumber = "00";
}

arr.splice(0, 2, stringNumber);
s = arr.join('');
console.log(s);





