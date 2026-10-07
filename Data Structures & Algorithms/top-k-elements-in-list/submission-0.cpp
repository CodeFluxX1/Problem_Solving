class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int num: nums){
            mp[num]++;
        }
        vector<pair<int,int>> array;
        for(auto it : mp){
            array.push_back({it.second , it.first});
        }
        sort(array.rbegin() , array.rend());
        vector<int> res;
        for(int i = 0 ; i<k ; i++){
            res.push_back(array[i].second);
        }
        return res;
    }
};
