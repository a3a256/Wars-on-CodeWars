#include <string>
#include <vector>
#include <bitset>
#include <sstream>
#include <iomanip>

std::string char_to_hex(char c){
  int val = (int)c;
  std::stringstream ss;
  ss << std::hex << val;
  std::string v = ss.str();
  std::string res = "";
  res += v.back();
  v.pop_back();
  if(v.size() != 0){
    res = v.back() + res;
  }else{
    res = '0' + res;
  }
  return res;
}

std::string hexdump(const std::vector<char> &data){
  std::string res = "";
  std::string row = "00000000: ";
  std::string val_row = "";
  int i, hex_vals, index;
  index = 1;
  char cur_row = '1';
  hex_vals = 0;
  for(i=0; i<data.size(); i++){
    if(hex_vals == 0){
      res += row;
    }
    res += char_to_hex(data[i]);
    res += ' ';
    if((int)data[i] >= 32 && (int)data[i] <= 126){
      val_row += data[i];
    }else{
      val_row += '.';
    }
    hex_vals++;
    if(hex_vals >= 16){
      hex_vals = 0;
      res += ' ';
      res += val_row;
      val_row = "";
      res += '\n';
      if(index == 10){
        cur_row = 'a';
      }
      row[6] = cur_row;
      cur_row++;
      index++;
    }
  }
  while(hex_vals < 16 && hex_vals > 0){
    res += "   ";
    hex_vals++;
  }
  if(hex_vals == 16){
    res += ' ';
    res += val_row;
  }else{
    res.pop_back();
  }
  return res;
};

char hex_to_char(std::string code){
  int first_val;
  if(code[0] == 'a' || code[0] == 'b' || code[0] == 'c' || code[0] == 'd' || code[0] == 'e' || code[0] == 'f'){
    first_val = (10+((int)code[0] - 'a'))*16;
  }else{
    first_val = ((int)code[0] - '0')*16;
  }
  if(code[1] == 'a' || code[1] == 'b' || code[1] == 'c' || code[1] == 'd' || code[1] == 'e' || code[1] == 'f'){
    first_val += (10+((int)code[1] - 'a'));
  }else{
    first_val += ((int)code[1] - '0');
  }
  return (char)first_val;
}

std::vector<char> dehex(const std::string &text){
  std::vector<char> res;
  int i, j;
  std::string temp = "";
  std::string codes = "";
  for(i=0; i<text.size(); i++){
    if(text[i] == '\n'){
      for(j=0; j<16; j++){
        temp.pop_back();
      }
      for(j=0; j<temp.size(); j++){
        if(temp[j] == ' '){
          if(codes.size() == 2){
            res.push_back(hex_to_char(codes));
          }
          codes = "";
        }else{
          codes += temp[j];
        }
      }
      temp = "";
    }else{
      temp += text[i];
    }
  }
  for(j=0; j<temp.size(); j++){
    if(temp[j] == ' '){
      if(codes.size() == 2){
        res.push_back(hex_to_char(codes));
      }
      codes = "";
    }else{
      codes += temp[j];
    }
  }
  return res;
};
