let calendar = [31, 28, 31, 30, 31, 30, 31, 31];

let year = 1918;

if(year === 1918) {
  calendar[1] = (28 - 14) + 1;
}else if(year < 1917) {
  if(year % 4 == 0) {
    calendar[1] = 29;
  }
} else {
  if (year % 4 == 0) {
  if (year % 100 == 0) {
    if (year % 400 == 0) {
      calendar[1] = 29;
    }else {
      console.log("Not leap year.")
    }
  } else {
    console.log("Leap year.")
    calendar[1] = 29;

  }
} else {
  console.log("Not leap year.") 
}
}

function date(year) {

  let array  = ["dd",".","mm",".",`${year}`];
  let sum = 0;

  let i;
  for(i = 0; i < 8; i++) {
     if(sum < 256) {
       sum += calendar[i];
       console.log(sum);
     } else {
       break;
     }
  }
  i = i + 1;
  array[0] = (256  - sum).toString();
  if(i < 10)
    array[2] = 0 + i.toString();
  else
   array[2] = i.toString();


  s = array.join('');
  

  return s;
  
  
}
console.log(calendar);
console.log(date(year));