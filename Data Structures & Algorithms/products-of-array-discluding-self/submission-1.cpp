class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int cnt=0;
        int idx;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt++;
                idx=i;
            }
        }
        int ans1=1;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                ans1*=nums[i];
            }
        }
        if(cnt>=2){
            for(int i=0;i<n;i++){
                if(nums[i]==0){
                    ans[i]=0;
                }
            }
        }else if(cnt==1){
            for(int i=0;i<n;i++){
                if(i==idx){
                    ans[i]=ans1;
                }else{
                    ans[i]=0;
                }
            }
        }else{
            for(int i=0;i<n;i++){
                ans[i]=ans1/nums[i];
            }
        }
        return ans;
    }
};
