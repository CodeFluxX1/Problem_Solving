class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string newS;
        for(int i = 0 ; i< n; i++){
            if(isalnum(s[i])){
                newS.push_back(tolower(s[i]));
            }
        }
        int m = newS.size();
        int left = 0 ;
        int right = m-1;
        while(left<=right){
            if(newS[left]!=newS[right]){
                return false;
            }
            right--;
            left++;
        }
return true;
    }
};
