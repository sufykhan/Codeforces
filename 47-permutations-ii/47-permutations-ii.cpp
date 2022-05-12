class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      vector<vector<int>> unique;
      do{
        unique.push_back(nums);
      }while(next_permutation(nums.begin(), nums.end()));
      return unique;
    }
};

//[[1,1,2,2],[1,2,1,2],[1,2,2,1],[1,1,2,2],[2,1,1,2],[2,1,2,1],[2,2,1,1],[2,1,1,2],[2,1,2,1],[1,1,2,2],[1,2,1,2],[1,2,2,1],[1,1,2,2]]