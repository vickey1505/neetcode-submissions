class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int s=0,e=n-1;
        int maxi=0;
        while(s<e){
            int area=min(heights[s],heights[e])*(e-s);
            maxi=max(maxi,area);
            if(heights[s]<heights[e]){
                s++;
            }else{
                e--;
            }
        }
        return maxi;
    }
};
