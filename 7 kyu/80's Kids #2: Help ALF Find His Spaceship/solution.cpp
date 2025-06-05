using namespace std;

class EightiesKids2
{
public:
    static string findSpaceship(const string &map)
    {
      if(map.find('X') == string::npos){
        return "Spaceship lost forever.";
      }
      int i, row = 0, col = 0, rows = 0, cols = 0;
      string res = "[";
      for(i=0; i<map.size(); i++){
        if(map[i] == '\n'){
          rows++;
          cols = 0;
        }else if(map[i] == '.'){
          cols++;
        }else{
          row = rows;
          col = cols;
        }
      }
      row = rows - row;
      res += to_string(col) + ", " + to_string(row) + ']';
      return res; // Do your magic!
    }
};
