class Kata
{
public:
    std::string replaceNth(std::string text, int n, char oldValue, char newValue)
    {
      int cur_count = 0, i;
      for(i=0; i<text.size(); i++){
        if(text[i] == oldValue){
          cur_count++;
        }
        if(cur_count == n){
          if(text[i] == oldValue){
            text[i] = newValue;
            cur_count = 0;
          }
        }
      }
      return text;
    }
};
