class Solution {
public:
   
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>v(mp.begin(),mp.end());
        sort(v.begin(), v.end(),
            [](pair<int,int>& a, pair<int,int>& b){
            return a.second > b.second;
        });
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
