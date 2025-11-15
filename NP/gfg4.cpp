/*
it should contain map beacuse question have negative number as well 
//but here in hash we store only positive number

class Solution {
  public:
    bool isFrequencyUnique(int n, int arr[]) {
        
       vector<int>aalu;
       int hash[256]={0};

       for (int i = 0; i < n; i++) {
            hash[arr[i]]++;
       }

       // push frequency only once per number
       for (int i = 0; i < 256; i++) {
            if (hash[i] > 0) {
                aalu.push_back(hash[i]);
            }
       }

       // check duplicates in aalu
       for (int i = 0; i < aalu.size(); i++) {
            for (int j = i + 1; j < aalu.size(); j++) {
                if (aalu[i] == aalu[j]) {
                    return false;
                }
            }
       }

       return true;
    }
};
*/
