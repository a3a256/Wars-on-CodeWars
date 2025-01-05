#include <cctype>
#include <bits/stdc++.h>

bool is_num(std::string &l){
  if(l.size() == 0){
    return false;
  }
  if(l.size() == 1 && (l[0] == '-' || l[0] == '+')){
    return false;
  }
  int i, val;
  for(i=0; i<l.size(); i++){
    val = (int)std::tolower(l[i]);
    if(val >= 97 && val <= 122){
      return false;
    }
  }
  return true;
}

std::string calculateArray(std::string stringArray) 
{
  std::string line;
  long long i, count;
  float _sum;
  count = 0;
  _sum = 0.0f;
  line = "";
  for(i=0; i<stringArray.size(); i++){
    if(stringArray[i] == ';'){
      if(is_num(line)){
        _sum += std::stof(line);
        count ++;
      }
      line = "";
    }else{
      line += stringArray[i];
    }
  }
  if(is_num(line)){
    _sum += std::stof(line);
    count++;
  }
  long long avg = (long long)std::round(_sum/(float)count);
  std::string res = "";
  res += std::to_string(avg) + ',';
  long long n = 0;
  while(avg>0){
    n += avg%10;
    avg /= 10;
  }
  res += std::to_string(n) + ',';
  if(n%5 == 0){
    res += "TRUE";
  }else{
    res += "FALSE";
  }
  return res;
}   
