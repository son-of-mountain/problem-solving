class Solution {
public:


/*

Input: ["neet","code","love","you"]

Output:["neet","code","love","you"]

*/

    
    string encode(vector<string>& strs) {
        string res ;

        for(string ss: strs){
            res += to_string(ss.size())+"#"+ss;
        }
        //4#neet4#code ...
        return res;

    }

    vector<string> decode(string s) {

        int i=0,j,k;
        vector<string>res;
        while(i < s.size()){
            j = i;
            
            // track the delimeter #
            while( s[j] != '#' ){
                ++j;
            }
            // if the # if found , j is in its position
            // lets get the length 
            k = stoi(s.substr(i,j-i));

            // pos[#] +1 meaning it is on the string 
            i = j+1;

            // lets store the string
            res.push_back(s.substr(i,k));

            // increment by the length of the string
            i += k;


        }




        return res;





    }


};

