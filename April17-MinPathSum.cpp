class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int yLength = grid.size();
        int xLength = grid[0].size();
        vector<vector<int>> memory(yLength, vector<int> (xLength, 0));
        if (yLength == 1 && xLength == 1){
            return grid[0][0];
        }
        memory[0][0] = grid[0][0];
        for (int i = 1;i<xLength; i++){
            memory[0][i] = grid[0][i]+ memory[0][i-1];
        }
        for (int j = 1;j<yLength; j++){
            memory[j][0] = grid[j][0] + memory[j-1][0];
        }
        for (int i = 1; i<xLength; i++){
            for (int j = 1; j<yLength; j++){
               memory[j][i] = min(memory[j-1][i],memory[j][i-1]) + grid[j][i];
            }
        }
        return memory[yLength-1][xLength-1];
    }
};