typedef struct {
  unsigned first;
  unsigned second;
} pair;

pair solution(unsigned first, unsigned second) {
  int diff = second - first;
  int temp;
  while(diff <= first){
    temp = first;
    first = diff;
    second = temp;
    diff = second - first;
  }
  pair res;
  res.first = first;
  res.second = second;
  return (pair) {first, second};
}
