#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n=nums.size();
        long long right=1;
        long long left=0;
        vector<long long> suffix(n);
        
        if(n==0) return -1;
        for(int i=0;i<n;i++){
            if(left==suffix[i])
                return i;
            left+=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            suffix[i]=right;
            right*=nums[i];
        }
        
    
            
          
            
        
        return -1;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    int result = sol.smallestBalancedIndex(nums);
    cout << "Smallest balanced index: " << result << endl; // Output: Smallest balanced index: -1
    return 0;
}