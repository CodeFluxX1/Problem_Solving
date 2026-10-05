// here in this method we will use only one map , for first string we will add and increase the frea of particular char and for the second string we will subtract , if at last we get freq as zero then true otherwise false
class Solution {
public:
    bool isAnagram(string s, string t) {

        if(size(s)!=size(t)) return false;
        unordered_map<char,int> freq;

        for(char c : s){
            freq[c]++;
        }
        for(char c : t){
            freq[c]--;

            if(freq[c]<0){
                return false;
            }
        }
       return true;
    }
};
