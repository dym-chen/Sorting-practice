#include <iostream>
using namespace std;
#include <array>

void quickSort (int list[], int low, int high) {
  int MOVING_LEFT = 0;
  int MOVING_RIGHT = 1;
  if (low < high) {
    int left = low;
    int right = high;
    int currentDirection = MOVING_LEFT;
    int pivot = list[low];
    cout << pivot << " [" << left << " " << right << "]\n";
  while (left < right) {
    if (currentDirection == MOVING_LEFT) {
      while ((list[right] >= pivot) && (left < right))
        right--;
      list[left] = list[right];
      currentDirection = MOVING_RIGHT;
    }
    if (currentDirection == MOVING_RIGHT) {
      while ((list[left] <= pivot) && (left < right))
        left++;
      list[right] = list[left];
      currentDirection = MOVING_LEFT;
    }
  }
  list[left] = pivot; // or list[right] = pivot, since left == right
  quickSort(list, low, left - 1);
  quickSort(list, right + 1, high);
  }
}

int main() {
  int length;
  cin >> length;
  int num[length];
  for (int i = 0; i < length; i++){
    cin >> num[i];
  }
  quickSort(num, 0, length-1);
  for (int i = 0; i < length; i++){
    cout << num[i] << " ";
  }
}