#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string trimTrailingVowels(string s) {

        string ans = "";
 
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                return ans;
            }
            else {
                ans.push_back(s[i]);
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;
    string s;

    cout << "Enter string: ";
    cin >> s;

    string result = obj.trimTrailingVowels(s);

    cout << "Result is this: " << result << endl;

    return 0;
}