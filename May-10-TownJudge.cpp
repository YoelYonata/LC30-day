class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        if (trust.size() == 0){
            return 1;
        }
        vector<int> in(N+1);
        vector<int> out(N+1);
        int judge = 0;
        for (int i = 0; i<trust.size(); i++){
            out[trust[i][0]]++;
            in[trust[i][1]]++;
        }
        for (int j = 0; j<N+1;j++){
            if (in[j] == N-1 && out[j] == 0){
                return j;
            }
        }
        return -1;
    }
};