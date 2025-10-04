#include <algorithm>

int SJF(std::vector <int> jobs, int index){
  int desired = jobs[index], target_count = 0;
  int i;
  for(i=index; i > -1; i--){
    if(jobs[i] == desired){
      target_count++;
    }
  }
  std::sort(jobs.begin(), jobs.end());
  int cc = 0;
  for(i=0; i<jobs.size(); i++){
    if(jobs[i] < desired){
      cc += jobs[i];
    }else if(jobs[i] == desired){
      cc += target_count*desired;
      break;
    }
  }
  return cc;
}
