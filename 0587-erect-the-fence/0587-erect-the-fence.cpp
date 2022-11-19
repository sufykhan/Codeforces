class Solution {
public:
    
    int getRotationAngle(vector<int> A, vector<int> B, vector<int> C) {
        // (x2-x1)(y3-y1) - (y2-y1)(x3-x1) -> 3D Cross-product of AB and AC vectors
        return ((B[0] - A[0]) * (C[1] - A[1])) - ((B[1] - A[1]) * (C[0] - A[0]));
    }
    
    
    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        if (trees.size() <= 3) return trees;
        sort(trees.begin(), trees.end());
        
		// Upper HULL construction
        vector<vector<int>> lTrees;
        lTrees.push_back(trees[0]);
        lTrees.push_back(trees[1]);
        for (int i = 2; i < trees.size(); i++) {
            int ls = lTrees.size();
            while (lTrees.size() >= 2 && getRotationAngle(lTrees[ls-2], lTrees[ls-1], trees[i]) > 0) {
                lTrees.pop_back();
                ls--;
            }
            lTrees.push_back(trees[i]);
        }
        
		// Lower HULL construction
        vector<vector<int>> rTrees;
        rTrees.push_back(trees[trees.size() - 1]);
        rTrees.push_back(trees[trees.size() - 2]);
        for (int i = trees.size() - 3; i >= 0; --i) {
            int rs = rTrees.size(); 
            while (rTrees.size() >= 2 && getRotationAngle(rTrees[rs-2], rTrees[rs-1], trees[i]) > 0) {
                rTrees.pop_back();
                rs--;
            }
            rTrees.push_back(trees[i]);
        }
        
		// Pop the last elements as they would've occurred in both lists
        rTrees.pop_back();
        lTrees.pop_back();
        for (int i = 0; i < rTrees.size(); i++) {
            lTrees.push_back(rTrees[i]);
        }
        
		// Sort and remove duplicate elements. (It is begging for a different approach!!)
        sort(lTrees.begin(), lTrees.end());
        lTrees.erase(std::unique(lTrees.begin(), lTrees.end()), lTrees.end());
        
        return lTrees;
    }
    
};