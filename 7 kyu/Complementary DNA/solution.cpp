#include <string>
#include <map>

std::string DNAStrand(const std::string& dna)
{
  std::map<char, char> mp = {{'A', 'T'}, {'T', 'A'},
                            {'C', 'G'}, {'G', 'C'}};
  std::string res = "";
  for(char c: dna){
    res += mp[c];
  }
  return res;
  //your code here
}
