#include <iostream>
using namespace std;

int main() {
    int array[5];
    int i;

    for (i = 1; i < 10; i += 2) {
        array[(i - 1) / 2] = i;
    }

    for (i = 0; i < 2; i++) {
        cout << array[i] << " ";
        array[i] = 0;
    }

    cout << endl;

    for (i = 2; i < 6; i += 2) {
        array[i / 2] = i;
    }

    for (i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }

    return 0;
}