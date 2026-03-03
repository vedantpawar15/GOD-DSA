#include<iostream>
using namespace std;
#include<string>

class Solution {
public:
    string removeOuterParentheses(string s) {

        int depth = 0;
        string result = "";

        for(int i=0; i<s.length(); i++) {
            char ch = s[i];

            if(ch == '(') {
                if(depth > 0){
                    result = result + ch;
                }
                depth++;
            }

            else{
                depth--;
                if(depth > 0) {
                    result = result + ch;
                }
            }
        }
        return result;
    }
};

int main() {

    Solution obj;

    string s = "(()())(())";

    cout << "input string : " << s << endl;
    
    cout << "sorted string : " << obj.removeOuterParentheses(s) << endl;

    return 0;
}