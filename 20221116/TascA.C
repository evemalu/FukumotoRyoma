#include<iostream>
using namespace std;

const int MAX = 5;  // スタックに扱う要素数

int stack[MAX];     // スタック本体
int top = 0;        // スタックのトップ

// スタックに値をプッシュする
void push(int x) {
  if (top >= MAX) {
    // スタックが満タンの場合
    cout << "スタックが満タンです" << endl;
    return;
  }

  // スタックのトップを更新して、値を格納する
  stack[top] = x;
  top++;

  // スタックの状態を出力する
  cout << "push:";
  for (int i = 0; i < top; i++) {
    cout << stack[i] << " ";
  }
  cout << endl;
}

// スタックから値をポップする
void pop() {
  if (top <= 0) {
    // スタックが空の場合
    cout << "スタックが空です。" << endl;
    return;
  }

  // スタックのトップを更新する
  top--;

  // スタックの状態を出力する
  cout << "pop:";
  for (int i = 0; i < top; i++) {
    cout << stack[i] << " ";
  }
  cout << endl;
}

int main() {
  // スタックに1, 3, 5, 7, 9をプッシュする
  push(1);
  push(3);
  push(5);
  push(7);
  push(9);

  // スタックから2つの要素をポップする
  pop();
  pop();

  return 0;
}