class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
		unordered_set<int> seen; // hash set to look for seen numbers
		for(int n : nums){
			if(seen.find(n) != seen.end())
				return true;
			//otherwise the element is not in the set
			seen.insert(n);
			}
		return false; // it doesnt contain duplicates
		}
	}
}
