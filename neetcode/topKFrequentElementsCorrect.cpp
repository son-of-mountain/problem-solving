class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> count;   //  why size is not set
        vector<vector<int>> freq(nums.size()+1);

        // lets count the occurences
        for(int n : nums){
            count[n] = 1 + count[n];  // or count[n]++
        }
        
        // lets assign (count,value) into freq
        for(const auto& en : count){
            freq[en.second].push_back(en.first);
        }

        // now the result 
        vector<int> res;
        for(int i = freq.size()-1 ; i> 0 ; --i){ // why cant i make freq.size()
            for(int n : freq[i]){
                res.push_back(n);
                if(res.size() == k)
                    return res;
            }
        }

        return res;


    }
};

