#include <vector>
using std::vector;
std::vector<std::vector<int>> create_spiral(int rows)
{
  if(rows<1){
    return{};
  }
  vector<vector<int>>matrix(rows,vector<int>(rows,0));
    int value = 1;
    int above = 0;
    int below = rows-1;
    int left = 0;
    int right = rows-1;
    while (above<=below && left<=right) {
        for (int i=left;i<=right;i++) {
            matrix[above][i] = value++;
        }
        above++;
        for (int i=above;i<=below;i++) {
            matrix[i][right] = value++;
        }
        right--;
        if (above<=below) {
            for (int i=right;i>=left;i--) {
                matrix[below][i] = value++;
            }
            below--;
        }
        if (left<=right) {
            for (int i=below;i>=above;i--) {
                matrix[i][left] = value++;
            }
            left++;
        }
    }

  return matrix;
}
