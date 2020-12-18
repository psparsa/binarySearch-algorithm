"strict mode";

const arr: number[] = [
  0,
  2,
  4,
  6,
  8,
  9,
  10,
  12,
  62,
  70,
  71,
  87,
  90,
  95,
  98,
  100,
]; //length = 16

const target: number = 0;

let first: number = 0;
let end: number = arr.length - 1;
let middle: number;

function setMiddle(): void {
  middle = Math.floor((first + end) / 2);
}
setMiddle();

while (first <= end) {
  if (target === arr[middle]) {
    console.log(`What did you looking for is in the ${middle + 1}th block!`);
    break;
  } else if (target < arr[middle]) end = middle - 1;
  else if (target > arr[middle]) first = middle + 1;

  setMiddle();
}