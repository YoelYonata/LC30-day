class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int numberOfIslands = 0;
        
        for (int i = 0; i<grid.size(); i++ ){
            for(int j = 0; j<grid[i].size(); j++){
                if (grid[i][j] == '1'){
                    DFS(grid, j, i);
                    numberOfIslands++;
                }
            }
        }
        return numberOfIslands;
    }
    
    void DFS(vector<vector<char>>& grid, int x, int y){
        grid[y][x] = '0';
        if (x < grid[y].size()-1){
            if (grid[y][x+1] == '1'){
                DFS(grid, x+1, y);
            }
        }
        if (y < grid.size()-1){
           if (grid[y+1][x] == '1') {
                DFS(grid, x, y+1);
           } 
        }
        if (x > 0){
            if (grid[y][x-1] == '1'){
                DFS(grid, x-1, y);
            }
        }
        if (y > 0){
           if (grid[y-1][x] == '1') {
                DFS(grid, x, y-1);
           } 
        }
    }
};