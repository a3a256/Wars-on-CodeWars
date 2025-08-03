bool eleven(const std::string input) 
{
  std::cout << input << '\n';
  std::string temp = "";
  temp += input[0];
  int i, val;
  for(i=1; i<input.size(); i++){
    temp += input[i];
    val = std::stoi(temp);
    if(val%11 == 0){
      temp = "";
    }else{
      temp = std::to_string(val%11);
    }
  }
  return temp == "";
}
