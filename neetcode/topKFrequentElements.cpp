class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int frq[1005]={};

        // 1, 2, 2, 3, 3, 3 

        // counting frq of each element
        for(int i=0 ; i< nums.size();++i){
            frq[ nums[i] ]++;
        }

        // calculating the frequent elements 
        vector<int> r;
        int max = INT_MAX;
        for(int i=0 ; i < 1005 ; ++i ){
            if(frq[i] > max){
                r.push_back(i);
                max = frq[i];
            }
        }

        // r stores the frq elements in the array 
        vector<int> rn(r.begin() , r.begin()+k);

        // returning the frequent element in form of vector
        return rn;
        


    }
};

