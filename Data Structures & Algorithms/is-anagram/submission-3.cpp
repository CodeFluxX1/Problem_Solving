// here in this approach we will use an array of size 26 and we will place the characters at the particular indexes by ("c"-"a"), then foe the string one , we add and for the index two we subrtract , at last if freq of any index is not zero then false
// time complexity will be roughly o(n) with no extra space 
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(size(s)!=size(t)) return false;

        int freq[26] ={};
         for(char c : s){
            freq[c-'a']++;
         }
         for(char c : t){
            freq[c-'a']--;
         }
         for(int i = 0 ; i<26 ; i++){
            if(freq[i]!=0){
                return false;
            }
         }
         return true;
    }
};
