#include <stddef.h>

enum SequenceType {
	UNORDERED,
	STRICTLY_INCREASING,
	NOT_DECREASING,
	STRICTLY_DECREASING,
	NOT_INCREASING,
	CONSTANT
};

enum SequenceType classify_sequence (size_t length, const int sequence[length])
{
  int increment, decrement, equal, i;
  increment = 0;
  decrement = 0;
  equal = 0;
  for(i=1; i<length; i++){
    if(sequence[i] > sequence[i-1]){
      increment = 1;
    }else if(sequence[i] < sequence[i-1]){
      decrement = 1;
    }else{
      equal = 1;
    }
  }
  if(decrement && increment){
    return UNORDERED;
  }
  if(decrement && equal){
    return NOT_INCREASING;
  }
  if(increment && equal){
    return NOT_DECREASING;
  }
  if(increment){
    return STRICTLY_INCREASING;
  }
  if(decrement){
    return STRICTLY_DECREASING;
  }
	return CONSTANT;
}
