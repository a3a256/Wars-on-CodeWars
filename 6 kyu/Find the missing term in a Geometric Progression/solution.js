function findMissing(arr){
  let last = arr[arr.length - 1];
  let diff = arr[1]/arr[0];
  let first = arr[0];
  while(first <= last){
    if(!(arr.includes(first))){
      break;
    }else{
      first *= diff;
    }
  }
  return first;
}
