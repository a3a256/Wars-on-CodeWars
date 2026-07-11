class Printer
{
public:
    static std::string printerError(const std::string &s){
      int i, errors;
      errors = 0;
      for(i=0; i<s.size(); i++){
        errors += s[i] > 'm';
      }
      return std::to_string(errors) + '/' + std::to_string((int)s.size());
    }
};
