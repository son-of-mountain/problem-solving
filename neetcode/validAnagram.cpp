class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false ; 
        
        int sf[26]={0},tf[26]={0};
        
        for(int i = 0 ; i< s.size() ; ++i){
            int c = s[i] - 'a';
            sf[ c ]++;
        }

        for(int i = 0 ; i< s.size() ; ++i){
            int c = t[i]-'a';
            tf[ c ]++;
        }
        for(int i = 0 ; i < 26 ; ++i){
            if(sf[i] != tf[i])
                return false;
        }
        return true; 

    }
};

    /*
    store both strings on an unordered_set 
    store their size as well for edge cases  

    if(s.size() != t.size())
        return false;


    unordered_set<char> ss(s.begin(),s.end()),tt(t.begin(),t.end());
    if(ss.size() != tt.size())
        return false;

    for(char sss: s){
        if(!tt.count(sss))
            return false; 
    }
    return true ; */
