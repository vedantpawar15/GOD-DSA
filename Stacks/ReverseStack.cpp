#include <iostream>
#include <stack>
using namespace std;

class Solution {
  public:
    string reverse(const string& S) {
        
        stack<char>st;
        string ans = "";
        
        for(int i=0; i<S.length(); i++) {
            st.push(S[i]);
        }
        
        while(!st.empty()) {
            ans = ans + st.top();
            st.pop();
        }
        return ans;
    }
};

int main() {

        string S ="GEEK";
        Solution obj;
        cout << S << endl;
        cout << obj.reverse(S) << endl;
        return 0;
    }