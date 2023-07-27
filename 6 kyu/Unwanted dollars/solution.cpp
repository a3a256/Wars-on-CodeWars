using namespace std;

double money_value(const string &s)
{
  string alp = "0123456789.-";
  string res = "";
  for(char c: s){
    if(alp.find(c) != string::npos){
      res += c;
    }
  }
  if(res.size() == 0){
    return 0.0;
  }
  if(res.size() == 1 && res[0] == '-'){
    return 0.0;
  }
  double v = stod(res);
  return v;
}
