class Solution {
    public:
        void reverseColumns(vector<vector<int>>& matrix) {
            for (auto& row : matrix) {
                reverse(row.begin(), row.end()); 
            }
        }
        void rotate(vector<vector<int>>& matrix) {
            for (int i = 0; i < matrix.size(); i++) {
                for (int j = i + 1; j < matrix[i].size(); j++) { 
                    std::swap(matrix[i][j], matrix[j][i]);
                }
            }
            reverseColumns(matrix);
        }
    };