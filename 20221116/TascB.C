#include<stdlib.h>
#include<iostream>

// キューのサイズ
const int kQueueSize = 5;

// キューを表す構造体
struct Queue {
  // 要素を格納する配列
  int array[kQueueSize];
  // 先頭要素
  int head;
  // 末尾要素
  int tail;
};

//キューを初期化
void InitQueue(Queue* queue) {
  queue->head = 0;
  queue->tail = 0;
}

//キューが空か判断
bool IsEmpty(const Queue& queue) {
  return queue.head == queue.tail;
}

//キューが満タンか判断
bool IsFull(const Queue& queue) {
  return queue.tail == kQueueSize;
}

//キューに要素を追加
void Enqueue(Queue* queue, int value) {
  if (IsFull(*queue)) {
    // キューが満タンだｔ
    return;
  }
  queue->array[queue->tail] = value;
  ++queue->tail;
}

// キューから要素を取り出す
int Dequeue(Queue* queue) {
  if (IsEmpty(*queue)) {
    // キューが空の場合は何もしない
    return 0;
  }
  int value = queue->array[queue->head];
  ++queue->head;
  return value;
}

int main() {
  // キューを作成して初期化
  Queue queue;
  InitQueue(&queue);

  // 1, 3, 5, 7, 9をEnqueueする
  Enqueue(&queue, 1);
  Enqueue(&queue, 3);
  Enqueue(&queue, 5);
  Enqueue(&queue, 7);
  Enqueue(&queue, 9);

  // Enqueue・Dequeueするたびに配列の中身を出力する
  std::cout << "Enqueue 1, 3, 5, 7, 9" << std::endl;
  std::cout << "queue: ";
  for (int i = 0; i < kQueueSize; ++i) {
    std::cout