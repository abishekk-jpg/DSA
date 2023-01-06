
class Solution {
public:
    int lengthOfLastWord(string s) {
        bool flag = false;
        int count = 0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]!=' '){
                flag = true;
                count++;
            }
            else if(s[i]==' ' && flag == true){
                break;
            }
        }
        return count;
    }
};