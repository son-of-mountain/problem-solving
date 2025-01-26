class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> r = {}; // result is empty at the beginning
        // sort(nums.begin() , nums.end()); // result is sorted 

        for(int i = 0 ; i < nums.size()-1 ; ++i)
            
            for(int j=i+1 ; j < nums.size() ; ++j)
            
                if( nums[i] + nums[j] == target){
            
                    r.insert(r.begin(),i);
            
                    r.insert(r.begin()+1,j);
            
                    return r;
                }
        
        
    }
};
