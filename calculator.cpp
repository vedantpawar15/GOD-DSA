#include <iostream>
using namespace std;

int main() {
        int n;
        int m;
        cout<<"enter a number n"<<endl;
        cin>>n;
        cout<<"enter a number m : "<<endl;
        cin>>m;
        char op;
        cout<<"enter the operation u want to peform : "<<endl;
        cin>>op;
        
        switch ( op ) {
            case '+' : cout<<(n+m)<<endl;
            break;
            
            case '-' :  cout<<(n-m)<<endl;
            break;
            
            case '*' : cout<<(n*m)<<endl;
            break;
        }
}
