class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>> st2;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int s=i+1,e=n-1;
            while(s<e){
                if(nums[i]+nums[s]+nums[e]==0){
                    st2.insert({nums[i],nums[s],nums[e]});
                    s++;
                    e--;
                }else if(nums[i]+nums[s]+nums[e]<0){
                    s++;
                }else{
                    e--;
                }
            }
        }
        vector<vector<int>> ans;

for(auto &s : st2){
    ans.push_back(vector<int>(s.begin(), s.end()));
}

return ans;
    }
};
