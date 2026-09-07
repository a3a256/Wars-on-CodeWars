#include <cctype>

using namespace std;

class EightiesKids5
{
public:
    static string bucketOf(const string &said)
    {
      int i;
      string sent = said;
      for(i=0; i<sent.size(); i++){
        sent[i] = tolower(sent[i]);
      }
      int water = sent.find("water");
      int wet = sent.find("wet");
      int wash = sent.find("wash");
      int sline = sent.find("slime");
      int know = sent.find("i don't know");
      bool one = false, two = false;
      if(water != string::npos || wet != string::npos || wash != string::npos){
        one = true;
      }
      if(sline != string::npos || know != string::npos){
        two = true;
      }
      if(one && two){
        return "sludge";
      }
      
      return (one)?"water":(two)?"slime":"air"; // Do your magic!
    }
};
