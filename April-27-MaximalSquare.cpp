class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.size() == 0){
            return 0;
        }
        int ySize = matrix[0].size();
        int xSize = matrix.size();
        int maxLen = 0;
        int memory[xSize][ySize];
        for (int i = 0; i <xSize; i++){
            if (matrix[i][0] == '1'){
                maxLen = 1;
                memory[i][0] = 1;
            }else{
                memory[i][0] = 0;
            }
        }
        for (int j = 0; j <ySize; j++){
            if (matrix[0][j] == '1'){
                maxLen = 1;
                memory[0][j] = 1;
            }else{
                memory[0][j] = 0;
            }
        }
        for (int i = 1; i<xSize; i++){
            for (int j = 1;j<ySize;j++){
                if (matrix[i][j] == '1'){
                   memory[i][j] = min(min(memory[i-1][j],memory[i][j-1]),memory[i-1][j-1]) + 1;
                   maxLen = max(memory[i][j],maxLen);
                }else{
                    memory[i][j] = 0;
                } 
            }
        }
        return maxLen*maxLen;
    }
};