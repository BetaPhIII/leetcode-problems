class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int rows = grid.size();
        int columns = grid[0].size();
        
        int dr[] = {0, 0, 1, -1};
        int dc[] = {1, -1, 0, 0};
        
        vector<vector<int>> cost(rows, vector<int>(columns, INT_MAX));
        cost[0][0] = 0;
        
        queue<pair<int, int>> q;
        q.push({0, 0});
        
        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();
            
            for (int i = 0; i < 4; ++i) {
                int nr = r + dr[i];
                int nc = c + dc[i];
                
                if (nr >= 0 && nr < rows && nc >= 0 && nc < columns) {
                    int newCost = (grid[r][c] == i + 1) ? cost[r][c] : cost[r][c] + 1;
                    
                    if (newCost < cost[nr][nc]) {
                        cost[nr][nc] = newCost;
                        q.push({nr, nc});
                    }
                }
            }
        }
        
        return cost[rows - 1][columns - 1];
    }
};