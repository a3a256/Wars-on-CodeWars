#include <vector>
#include <functional>

template <typename T>
std::vector<T> reject(const std::vector<T>& array, const std::function<bool(T)>& predicate)
{
  int i;
  std::vector<T> res;
  for(i=0; i<array.size(); i++){
    if(!predicate(array[i])){
      res.push_back(array[i]);
    }
  }
  return res; // You can call `predicate` like any function. It accepts an arg of type T and returns a bool.
}
