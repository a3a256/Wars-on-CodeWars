long long factorial(int n){
  long long ans, i;
  ans = 1;
  for(i=0; i<n; i++){
    ans *= (i+1);
  }
  return ans; // Insert brilliant solution here
}
