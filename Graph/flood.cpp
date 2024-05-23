class Solution {
public:
    void dfs(int i, int j, vector<vector<int>> &img, int ic, int color){
        int r = img.size();
        int c = img[0].size();
        if(i < 0 || j < 0 || i >= r || j >= c)
            return;
        if(img[i][j] != ic) return;

        img[i][j] = color;

        dfs(i, j+1, img, ic, color);
        dfs(i, j-1, img, ic, color);
        dfs(i-1, j, img, ic, color);
        dfs(i+1, j, img, ic, color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int ic = image[sr][sc];
        if(ic != color)
            dfs(sr, sc, image, ic, color);
        return image;
    }
};

1 : 2,3
2 : 4
3 : 4
4 : 5,6
5 : 6