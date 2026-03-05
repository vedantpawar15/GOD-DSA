#include<iostream>
#include<queue>
using namespace std;

int main() {

    //creating a queue
    queue<int>q;

    q.push(11);
    q.push(13);
    q.push(15);

    cout << "front of q is: " << q.front() << endl;
    cout << "size of queue: " << q.size() <<endl;
    q.pop();
    cout << "size of queue: " << q.size() <<endl;
    cout << "front of q is: " << q.front() << endl;

    if(q.empty()) {
        cout << "queue is empty" << endl;
    }
    else{
        cout << "queue is not empty" << endl;
    }
    
    return 0;
}



