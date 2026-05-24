std::string solve(std::string eq){
  std::string nums = "0123456789";
  std::string rev = "", ns = "";
  int i, j, index;
  for(i=eq.size()-1; i>-1; i--){
    index = -1;
    for(j=0; j<10; j++){
      if(nums[j] == eq[i]){
        index = j;
        break;
      }
    }
    if(index != -1){
      ns = eq[i] + ns;
    }else{
      if(ns != ""){
        rev += ns;
        ns = "";
      }
      rev += eq[i];
    }
  }
  std::cout << ns << '\n';
  if(ns != ""){rev += ns;}
  return rev;
}
