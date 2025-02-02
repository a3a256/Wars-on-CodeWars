long long int sequence_sum(long long int begin_number, long long int end_number, long long step){
  if(begin_number > end_number && step > 0){
    return 0;
  }
  long long int val, i;
  val = 0;
  if(step > 0){
    for(i=begin_number; i<=end_number; i+=step){
      val += i;
    }
  }else{
    for(i=begin_number; i>=end_number; i+=step){
      val += i;
    }
  }
  return val;
}
