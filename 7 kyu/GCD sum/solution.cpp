using namespace std;

pair<int, int> solve(int s, int g){
  if(s%g != 0){return {-1, -1};}
  return {g, s-g};
}
