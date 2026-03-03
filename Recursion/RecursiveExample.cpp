#include<iostream>
using namespace std;

void reachHome(int src, int dest) {
    cout << " source " << src << " destination " << dest << endl;

    //Base case
    if(src == dest) {
        cout << "reached home successfully" << endl;
        return;
    }

    //processing - moving a step forward
    src++;

    //recursive call
    reachHome(src, dest);

}

int main() {
    int dest = 10;
    int src = 1;

    cout << endl;

    reachHome(src, dest);
}