unsigned difference_of_squares(unsigned n) {
  long long first_sum, second_sum, i;
  first_sum = 0;
  second_sum = 0;
  for(i=1; i<=n; i++){
    first_sum += i;
    second_sum += i*i;
  }
  first_sum *= first_sum;
  return first_sum-second_sum;
}
