class ComposeSqStrings
{
public:
    static std::string compose(const std::string &s1, const std::string &s2){
      int n=0;
      for(char c: s1){
        if(c == '\n'){
          break;
        }
        n++;
      }
      int i, j, start, end;
      std::string res = "";
      for(i=0; i<n; i++){
        start = i*n + i;
        end = start + (i+1);
        for(j=start; j<end; j++){
          res += s1[j];
        }
        start = s1.size() - (start + n);
        end = start + (n-i);
        for(j=start; j<end; j++){
          res += s2[j];
        }
        res += '\n';
      }
      
      res.pop_back();
      return res;
    }
};
