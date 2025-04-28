#include <vector>
#include <algorithm>

class Dinglemouse
{
    std::string name;
    int age;
    char sex;
  std::vector<std::string> order;
  

public:

    Dinglemouse()
    {
    }

    Dinglemouse &setAge(int age)
    {
      if(std::find(order.begin(), order.end(), "age") == order.end()){
        order.push_back("age");
      }
        this->age = age;
        return *this;
    }

    Dinglemouse &setSex(char sex)
    {
      if(std::find(order.begin(), order.end(), "sex") == order.end()){
        order.push_back("sex");
      }
        this->sex = sex;
        return *this;
    }

    Dinglemouse &setName(const std::string &name)
    {
      if(std::find(order.begin(), order.end(), "name") == order.end()){
        order.push_back("name");
      }
        this->name = name;
        return *this;
    }

    std::string hello()
    {
      int i;
      std::string res = "Hello. ";
      for(i=0; i<order.size(); i++){
        if(order[i] == "name"){
          res += "My name is " + name + ". ";
        }else if(order[i] == "sex"){
          res += "I am ";
          if(sex == 'M'){
            res += "male. ";
          }else{
            res += "female. ";
          }
        }else{
          res += "I am " + std::to_string(age) + ". ";
        }
      }
      res.pop_back();
        return res;
    }
};
