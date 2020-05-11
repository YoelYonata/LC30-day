class Solution {
public:
    void DFS(vector<vector<int>>& image, int r, int c, int startColor, int newColor){
        if (image [r][c] == startColor){
            cout<<"Colouring "<<r<<","<<c<<endl;
            image[r][c] = newColor;
            if(r+1 < image.size()){
                DFS(image, r+1, c, startColor, newColor);
            }
            if(c+1 < image[0].size()){
                DFS(image, r, c+1,startColor, newColor);
            }
            if(r >= 1){
                DFS(image, r-1, c, startColor, newColor);
            }
            if (c >= 1){
                DFS(image, r, c-1, startColor, newColor);
            }
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int startColor = image[sr][sc];
        if (startColor != newColor){
            DFS(image, sr, sc, startColor, newColor);
        }
        return image;
    }
};