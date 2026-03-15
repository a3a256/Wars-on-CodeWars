#include <array>
#include <set>
#include <math.h>

bool validate(const std::array<std::array<int, 9>, 9>& board) {
  int i, j, k, l, min_val, max_val;
  std::set<int> row, col;
  min_val = 1;
  max_val = 1;
  for(i=0; i<9; i++){
    for(j=0; j<9; j++){
      row.insert(board[i][j]);
      col.insert(board[j][i]);
      min_val = std::min(board[i][j], min_val);
      max_val = std::max(board[i][j], max_val);
    }
    if(row.size() != 9 || col.size() != 9){return false;}
    std::set<int>().swap(row);
    std::set<int>().swap(col);
  }
  if(min_val != 1 || max_val != 9){return false;}
  for(i=0; i<9; i+=3){
    for(j=0; j<9; j+=3){
      for(k=i; k<i+3; k++){
        for(l=j; l<j+3; l++){
          row.insert(board[k][l]);
        }
      }
      if(row.size() != 9){return false;}
      std::set<int>().swap(row);
    }
  }
  return true;
}
