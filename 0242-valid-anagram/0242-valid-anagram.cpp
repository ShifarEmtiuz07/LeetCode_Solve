class Solution {
public:
    bool isAnagram(string s, string t) {

        //////shortcut///// 

        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t)return true;
        // else return false;

        /////better////

        vector<int>sFreq(26,0);
        vector<int>tFreq(26,0);
        for(char c:s){
            sFreq[c-'a']++;
        }
       for(char c:t){
            tFreq[c-'a']++;
        }

        for(int i=0;i<26;i++){
        if(sFreq[i]!=tFreq[i]) return false;
        }
        return true;
        
    }
};