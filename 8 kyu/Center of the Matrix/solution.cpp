#include <vector>
#include <optional>

using opt_int_t = std::optional<int>;
using matrix_t = std::vector<std::vector<int>>;

opt_int_t center(const matrix_t& mat) {
  if(mat.size()%2 == 0){return std::nullopt;}
  if(mat[0].size()%2 ==0){return std::nullopt;}
  return mat[mat.size()/2][mat[0].size()/2];
}
