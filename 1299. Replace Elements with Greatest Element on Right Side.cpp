
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int prevmax = -1;
        int length = arr.size();
        for(int i=length-1;i>=0;i--){
            int newmax = max(prevmax, arr[i]);
            arr[i] = prevmax;
            prevmax = newmax;
        }
        return arr;
    }
};