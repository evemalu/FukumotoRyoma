#include<iostream>
#include<algorithm>
#include<random>

using namespace std;
// 配列のサイズ
const int kArraySize = 100;

int main() {
  // 0〜100の範囲の乱数を格納する配列を作成
  std::vector<int> array(kArraySize);
  std::random_device rnd;
  for (int i = 0; i < kArraySize; ++i) {
    array[i] = rnd() % 101;
  }

  // 配列を昇順にソート
  std::sort(array.begin(), array.end());

  // バイナリサーチを行い、50番目の要素を検索
  int target = 50;
  int left = 0;
  int right = kArraySize - 1;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (array[mid] == target) {
      // 見つかった場合は終了
      std::cout << "Found " << target << " at index " << mid << std::endl;
      break;
    } else if (array[mid] < target) {
      // 中央値よりも小さい場合は、探索範囲を後半に絞り込む
      left = mid + 1;
    } else {
      // 中央値よりも大きい場合は、探索範囲を前半に絞り込む
      right = mid - 1;
    }
  }

  return 0;
}


