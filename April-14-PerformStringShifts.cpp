class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int numOfShifts = shift.size();
        int resultShift = 0;
        bool leftShift;
        string temp;
        for (int i = 0; i<numOfShifts; i++){
            if(shift[i][0] == 0){//left
                resultShift -= shift[i][1];
            }
            else if (shift[i][0] == 1){//right
                resultShift += shift[i][1];
            }
        }
        
        if (resultShift == 0){
            return s;
        }
        else if (resultShift < 0){
            leftShift = true;
        }
        else{
            leftShift = false;
        }
        
        if (leftShift == true){
            resultShift = abs(resultShift);
            if (resultShift>=s.size()){
                resultShift = resultShift%s.size();
            }
            temp = s.substr(0,resultShift);
            s.erase(0,resultShift);
            s = s + temp;
        }
        else{
            if (resultShift>=s.size()){
                resultShift = resultShift%s.size();
            }
            temp = s.substr(s.size()-resultShift,s.size()-1);
            s.erase(s.size()-resultShift,s.size()-1);
            s = temp + s;
        }
        return s;
    }
};