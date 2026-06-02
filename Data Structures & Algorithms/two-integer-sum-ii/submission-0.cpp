class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n=numbers.size();
        int s=0,e=n-1;
        vector<int>ans(2);
        while(s<e){
            if(numbers[s]+numbers[e]==target){
                ans[0]=s+1;
                ans[1]=e+1;
                return ans;
            }else if(numbers[s]+numbers[e]<target){
                s++;
            }else{
                e--;
            }
        }
        return {0,0};
    }
};
