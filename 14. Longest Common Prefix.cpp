
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(), strs.end());
        string a = strs[0];
        string b = strs[n-1];
        string ans = "";
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                ans += a[i];
            }
            else{
                break;
            }
        }
        if(ans.size()==0){
            return "";
        }
        else{
            return ans;
        }
    }
};