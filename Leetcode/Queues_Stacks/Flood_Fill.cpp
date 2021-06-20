#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rr[4] = {-1, 1, 0, 0};
    int cc[4] = {0, 0, 1, -1};

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        int prevColor = image[sr][sc];
        dfs(sr, sc, image, prevColor, newColor);
        return image;
    }
    void dfs(int row, int col, vector<vector<int>> &image, int prevColor, int newColor)
    {
        if (row < 0 || col < 0 || row >= image.size() || col >= image[0].size() || image[row][col] != prevColor || image[row][col] == newColor)
            return;
        image[row][col] = newColor;
        for (int i = 0; i < 4; i++)
        {
            dfs(row + rr[i], col + cc[i], image, prevColor, newColor);
        }
    }
};

int main(void)
{
    Solution s;
  
    return 0;
}
