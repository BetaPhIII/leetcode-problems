class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int rows = isWater.size();
        int cols = isWater[0].size();

        int dirs[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        queue<pair<int, int>> waterQueue;
        vector<vector<int>> heights(rows, vector<int>(cols, -1));

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(isWater[i][j] == 1) {
                    waterQueue.push({i, j});
                    heights[i][j] = 0;
                }
            }
        }

        while (!waterQueue.empty()) {
            auto [x,y] = waterQueue.front();
            waterQueue.pop();

            for(const auto& dir: dirs){
                int newX = x + dir[0];
                int newY = y + dir[1];

                if(newX >= 0 && newX < rows & newY >= 0 && newY < cols && isWater[newX][newY] == 0 && heights[newX][newY] == -1){
                    heights[newX][newY] = heights[x][y] + 1;
                    waterQueue.push({newX, newY});
                }
            }
        }
        return heights;
    }
};