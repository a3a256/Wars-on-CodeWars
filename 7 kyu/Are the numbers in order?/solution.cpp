bool isAscOrder(std::vector<int> arr)
{
  if(arr.size() == 0 || arr.size() == 1){return true;}
  for(int i=1; i<arr.size(); i++){
    if(arr[i] < arr[i-1]){return false;}
  }
  return true;
}
