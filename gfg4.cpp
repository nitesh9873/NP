// to check the largest number in the given array
class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
        string longest = arr[0];
        for(int i =1;i<arr.size();i++){
            if (arr[i].size()>longest.size()){
                longest=arr[i];
                
            }
            
            
        }
        return longest;
    }
};
