#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int arr[5] = {1, 3, 5, 7, 9};
    
    for (int i = 0; i < 5; i++) {
        q.push(arr[i]);
    }
    
    for (int i = 0; i < 2; i++) {
        cout << q.front() << endl;
        q.pop();
    }
    
    return 0;
}