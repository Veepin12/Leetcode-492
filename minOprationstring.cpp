#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minOperations(string s) {
        int n=s.length();
        string sorted_s=s;
        sort(sorted_s.begin(),sorted_s.end());
        if(s==sorted_s) return 0;
        if(n==2) return -1;
         char minchar=sorted_s[0];
        char maxchar=sorted_s[n-1];
        if(s[0] == sorted_s[0] || s[n-1]==sorted_s[n-1]) return 1;
       
        return 2;
        
    }
    
};
int main(){
    Solution sol;
    string s = "cba";
    int result = sol.minOperations(s);
    cout << "Minimum operations: " << result << endl; // Output: Minimum operations: 2
    return 0;
}