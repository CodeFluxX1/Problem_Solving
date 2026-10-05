class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        for(int value : nums){
            if(st.count(value)){
                return true;
            }
            st.insert(value);
        }
        return false;
    }
};