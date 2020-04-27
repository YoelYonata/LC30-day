class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int xSize = text1.size();
        int ySize = text2.size();
        int memory[xSize][ySize];
        if (text1[0] == text2[0]){
            memory[0][0] = 1;
        }else{
            memory[0][0] = 0;
        }
        for (int i = 1; i<xSize; i++){
            if (memory[i-1][0] == 1 || text1[i] == text2[0]){
                memory[i][0] = 1;
            }else{
                memory[i][0] = 0;
            }
        }
        for (int j = 1; j<ySize; j++){
            if (memory[0][j-1] == 1 || text1[0] == text2[j]){
                memory[0][j] = 1;
            }else{
                memory[0][j] = 0;
            }
        }
        for (int i = 1; i<xSize; i++){
            for (int j = 1; j<ySize; j++){
                if(text1[i] == text2[j]){
                    memory[i][j] = memory[i-1][j-1]+1;
                }else{
                    memory[i][j] = max(memory[i-1][j],memory[i][j-1]);
                }
            }
        }
        return memory[xSize-1][ySize-1];
    }
};