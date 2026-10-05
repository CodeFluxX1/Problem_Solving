class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> freq1;
        unordered_map<int,int> freq2;

        for(char c : s){
            freq1[c]++;
        }
        for(char c : t){
            freq2[c]++;
        }
return freq1 == freq2;
    }
};
