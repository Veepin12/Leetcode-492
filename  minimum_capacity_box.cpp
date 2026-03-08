#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int n=capacity.size();
        int minCapacity=INT_MAX;
        int count=-1;
        for(int i=0;i<n;i++){
            if(capacity[i]>=itemSize && minCapacity >capacity[i]){
                minCapacity=capacity[i];
               count=i;
                
            }
            
              
        }
    return count;
        
    }
};
int main() {
    Solution sol;
    vector<int> capacity = {10, 20, 5, 15};
    int itemSize = 12;
    int result = sol.minimumIndex(capacity, itemSize);
    cout << "Minimum index: " << result << endl; // Output: Minimum index: 3
    return 0;
}