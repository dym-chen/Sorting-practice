#include <iostream>
using namespace std;

int counter = 1;

void merge(string items[], int len, int start, int mid, int end) {
  string temp[len];
  int pos1 = start;
  int pos2 = mid + 1;
  int spot = start;
  while (!(pos1 > mid && pos2 > end)) {
    if ((pos1 > mid) || ((pos2 <= end) && (items[pos2] < items[pos1]))) {
      temp[spot] = items[pos2];
      pos2++;
    } else {
      temp[spot] = items[pos1];
      pos1++;
    }
    spot++;
  }

  for (int i = start; i <= end; i++) {
    items[i] = temp[i];
  }
}

void mergesort(string items[], int start, int end, int len) {
  if (start < end) {
    counter += 2;
    int mid = (start + end) / 2;
    mergesort(items, start, mid, len);
    mergesort(items, mid + 1, end, len);
    merge(items, len, start, mid, end);
  }
}

int main() {
  int len;
  cin >> len;
  string arr[len];
  for (int i = 0; i < len; i++) {
    cin >> arr[i];
  }
  mergesort(arr, 0, len - 1, len);
  cout << counter << endl;
  for (int i = 0; i < len; i++) {
    cout << arr[i] << " ";
  }
}