class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string ans="";
        for(int i=0;i<n;i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
                ans+=tolower(s[i]);
            }else if(s[i]>='0'&&s[i]<='9'){
                ans+=s[i];
            }
        }
        int i=0,e=ans.length()-1;
        while(i<=e){
            if(ans[i]!=ans[e]){
                return false;
            }
            i++;
            e--;
        }
        return true;
    }
};
