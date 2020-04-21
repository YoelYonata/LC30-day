/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> size = binaryMatrix.dimensions();
        int xSize = size[1];
        int ySize = size[0];
        int p = 0;
        int y = 0;
        int x = xSize-1;
        int found1 = INT_MAX;
        bool no1 = true;
        while (x>=0 && y < ySize){
            p = binaryMatrix.get(y, x);
            if (p == 0){
                y++;
            }else{
                no1 = false;
                found1 = x;
                x--;
            }
        }
        if (no1 == true){
            return -1;
        }
        return found1;
    }
};