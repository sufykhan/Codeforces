class Solution {
public:
   vector<int> original;
	int n;
public:

	Solution(vector<int>& nums) {
		original = nums;
		n = original.size();
	}
	
	vector<int> reset() {
		return original;
	}
	
	vector<int> shuffle() {
			//make a copy of the original
			vector<int> shuffled = original;
			
			int leftSize = n;
			for(int i = n-1; i>=0; i--) {
				//draw from the bag
				int j = rand()%leftSize;
				
				//put this element at current position
				//and put the original element in the bag
				swap(shuffled[i], shuffled[j]);
				leftSize--;
			}
			return shuffled;
	}
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */