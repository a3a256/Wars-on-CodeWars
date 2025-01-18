#include <vector>
class Opstrings3
{
public:
    static std::string diag1Sym(const std::string &strng){
      std::vector<std::string> v;
      v = split(strng);
      int i, j, len;
      len = v[0].size();
      std::string line = "";
      for(i=0; i<len; i++){
        for(j=0; j<v.size(); j++){
          line += v[j][i];
        }
        line += '\n';
      }
      line.pop_back();
      return line;
    }
    static std::string rot90Clock(const std::string &strng){
      std::string diag = diag1Sym(strng);
      std::vector<std::string> v;
      v = split(diag);
      int i;
      std::string line = "";
      for(i=0; i<v.size(); i++){
        std::reverse(v[i].begin(), v[i].end());
        line += v[i];
        line += '\n';
      }
      line.pop_back();
      return line;
    }
    static std::string selfieAndDiag1(const std::string &strng){
      std::string diag = diag1Sym(strng);
      std::vector<std::string> split_diag = split(diag);
      int index = 0;
      std::string res = "", line = "";
      for(char c: strng){
        if(c == '\n'){
          res += line + '|' + split_diag[index] + '\n';
          index++;
          line = "";
        }else{
          line += c;
        }
      }
      res += line + '|' + split_diag[index];
      return res;
    }
    static std::string oper(std::string (*f)(const std::string &s), const std::string &s){
      return f(s);
    }
  
private:
    static std::vector<std::string> split(const std::string &string){
      std::vector<std::string> v;
      std::string line = "";
      int i;
      for(i=0; i<string.size(); i++){
        if(string[i] == '\n'){
          v.push_back(line);
          line = "";
        }else{
          line += string[i];
        }
      }
      if(line.size() != 0){
        v.push_back(line);
      }
      return v;
    }
};
