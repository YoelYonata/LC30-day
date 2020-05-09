class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double initialSlope;
        double temp;
        if (coordinates.size() <= 2){
            return true;
        }
        initialSlope = ((double)coordinates[1][1] - coordinates[0][1])/(coordinates[1][0] - coordinates[0][0]);
        for (int i = 1; i<coordinates.size(); i++){
            temp = ((double)coordinates[i][1] - coordinates[i-1][1])/(coordinates[i][0] - coordinates[i-1][0]);
            if (temp != initialSlope ){
                return false;
            }
            initialSlope = temp;
        }
        return true;
    }
};