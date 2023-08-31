/*
 * leetcode 76 minimum window substring
 *
 */

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> s_hash;
        unordered_map<char,int> t_hash;

        if(s.size()<t.size()) return "";

        for(int i=0;i<t.size();i++){
            t_hash[t[i]]++;
        }
        
        int count=0, start=0,start_ind=-1,min_length=INT_MAX;
        for(int i=0;i<s.size();i++){
            s_hash[s[i]]++;
            if(s_hash[s[i]] <= t_hash[s[i]])count++;

            if(count==t.size()){
                while(s_hash[s[start]]>t_hash[s[start]]){
                    s_hash[s[start]]--;
                    start++;  
                }
                if(min_length>i-start+1){
                   min_length= i-start+1;
                   start_ind=start;
                }
            }
        }

        if(start_ind == -1)return "";
        else return s.substr(start_ind , min_length);
    }
};

