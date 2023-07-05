#include <vector>
#include <string>

std::vector<std::string> split(std::string orig, std::string splitter){
  unsigned int len_split = splitter.size();
  std::string backup;
  std::vector<std::string> res;
  size_t pos;
  while(orig.find(splitter) != std::string::npos){
    pos = orig.find(splitter);
    res.push_back(orig.substr(0, static_cast<int>(pos)));
    orig = orig.substr(static_cast<unsigned int>(pos)+splitter.size());
  }
  if(orig.size() != 0){
    res.push_back(orig);
  }
  
  return res;
}

std::string decode_word(std::string word){
  std::string line = "";
  std::string temp = "";
  for(char c: word){
    if(c != ' '){
      temp += c;
    }else{
      line += MORSE_CODE[temp];
      temp = "";
    }
  }
  if(temp.size() != 0){
    line += MORSE_CODE[temp];
  }
  
  return line;
}

std::string decodeMorse(std::string morseCode) {
  std::vector<std::string> div;
  div = split(morseCode, "   ");
  std::string line = "";
  for(std::string c: div){
    line += decode_word(c);
    line += ' ';
  }
  line.pop_back();
  while(line[0] == ' '){
    line.erase(line.begin()+0);
  }
  while(line[line.size()-1] == ' '){
    line.pop_back();
  }
  return line;
}
