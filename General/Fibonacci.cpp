#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"enter a number : ";
    cin>>n;
    
    int a = 0;
    int b = 1;
    
    for(int i=1; i<=n; i++) {
        int newNumber = a+b;
        cout<< newNumber<<" ";
        a=b;
        b=newNumber;
        
    }
    
    
    return 0;
}