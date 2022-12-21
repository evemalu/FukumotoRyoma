#include<iostream>
#include<cstdLib>
#include<algorithm>
using namespace std;

int main() {
  int array[100];
  for (int i = 0; i < 100; i++) {
    array[i] = rand() % 100;
  }
  sort(array, array + 100);
  cout << array[50] << endl;
  return 0;
}