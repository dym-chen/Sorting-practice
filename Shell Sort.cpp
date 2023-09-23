#include <iostream>
using namespace std;

void kSortSublist(int arr[], int k, int x, int length) {
  for (int start = x; start < k; start ++) {
    for (int top = start + k; top < length; top += k) {
        int item = arr[top]; //temporary store for current item
        int i = top;
        while (i > start && item < arr[i-k]) {
          // shift larger items to the right by k
          arr[i] = arr[i-k];
          // prepare to check the next item, k spaces left
          i = i - k;
        }
        arr[i] = item; // put sorted item in open location
    }
  }
}

int main() {
  cout << "Q1" << endl;
  cout << "19 18 21 22 29 26 37 26 41 63 47 61 72 55" << endl;
  cout << "Q2" << endl;
  cout << "19 18 21 22 29 26 37 26 41 55 47 61 72 63"<< endl;
  // Question 3: it is not necessaliry slower than insertion short due to its nature of possibly sorting the list of numbers before having to compare individual values. 
  /*Question 4: 
    Part A:
    int max = n / 3;
    int k = 0;
    while (true) {
      if (k * 3 + 1 < max) {
        break;
      } else {
        k = k * 3 + 1;
      }
    }

    Part B:
    smallK = k / 3 - 1;

    45 897 582 82 414 733 103 417 51 542 313 736 490 790 62
  */
  cout << "Q5" << endl;
  int len = 0; int k = 1;
  cin >> len; 
  int num[len];
  for (int i = 0; i < len; i++) {
    cin >> num[i];
  }
  for (int i = 1; i < len / 3; i = i * 3 + 1) {
    k = i;
  }
  
  while (k >= 1) {
    kSortSublist(num, k, 0, len);
    cout << k << "k sort list:";
    for (int y = 0; y < len; y++) {
      if (y%10 == 0) {
        cout << endl;
      }
    cout << num[y] << " ";
    }
    cout << "\n" << endl;
    k = (k-1)/3;
  }
}