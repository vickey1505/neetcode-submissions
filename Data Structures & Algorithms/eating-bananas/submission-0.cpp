class Solution {
public:
    int timefunc(int mid,vector<int>&piles){
        int sum=0;
        for(int i=0;i<piles.size();i++){
            sum+=(piles[i]/mid)+((piles[i]%mid)!=0);
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            int time=timefunc(mid,piles);
            if(time<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
