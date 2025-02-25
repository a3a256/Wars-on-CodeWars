#include <string>
#include <vector>

class Opstrings4
{
public:
    static std::vector<std::string> split_rotations(std::string s){
      std::string temp = "";
      std::vector<std::string> og, one, two;
      for(char c: s){
        if(c == '\n'){
          og.push_back(temp);
          temp = "";
        }else{
          temp += c;
        }
      }
      if(temp.size() != 0){
        og.push_back(temp);
      }
      std::string s_one, s_two, s_three;
      s_one = "";
      s_two = "";
      s_three = "";
      int i, j, starting;
      starting = 0;
      for(i=og[0].size()-1; i>-1; i--){
        temp = "";
        for(j=og.size()-1; j>-1; j--){
          temp += og[j][i];
          if(j == starting){
            s_three += og[j] + '|';
            starting++;
          }
        }
        s_one += temp + '\n';
        s_three += temp + '|';
        temp = "";
        for(j=0; j<og.size(); j++){
          temp += og[j][i];
        }
        s_two += temp + '\n';
        s_three += temp + '\n';
      }
      s_one.pop_back();
      s_two.pop_back();
      s_three.pop_back();
      return {s_one, s_two, s_three};
    }
  
    static std::string diag2Sym(const std::string &strng){
      std::vector<std::string> answers = split_rotations(strng);
      return answers[0];
    }
    static std::string rot90Counter(const std::string &strng){
      std::vector<std::string> answers = split_rotations(strng);
      return answers[1];
    }
    static std::string selfieDiag2Counterclock(const std::string &strng){
      std::vector<std::string> answers = split_rotations(strng);
      return answers[2];
    }
    
    static std::string oper(std::string (*f) (const std::string &strng), const std::string &s){
      return f(s);
    }
};
