class Kata
{
public:
    std::vector<int> fold(std::vector<int>& arr){
      if(arr.size() == 1){
        return arr;
      }
      unsigned int mid = arr.size()/2;
      unsigned int i, j;
      j = arr.size()-1;
      for(i=0; i<mid; i++){
        arr[i] += arr[j];
        j --;
      }
      if(arr.size()%2 != 0){
        mid ++;
      }
      while(arr.size() > mid){
        arr.pop_back();
      }
      return arr;
    }
    std::vector<int> foldArray(std::vector<int> array, int runs)
    {
      std::vector<int> res;
      res = array;
      int i;
      for(i=0; i<runs; i++){
        res = fold(res);
      }
      return res;
    }
};
