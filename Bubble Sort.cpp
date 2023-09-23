#include <iostream>
using namespace std;

int cocktailShakerSort(double a[], int n)
{
  bool tf = true;
  int count = 0;
  int start = 0;
  int end = n - 1;
  while (tf) {
    tf = false;
    for (int i = start; i < end; ++i) {
      if (a[i] > a[i + 1]) {
        swap(a[i], a[i + 1]);
        tf = true;
        count ++;
      }
    }
    if (!tf)
      break;
    tf = false;
    --end;
    for (int i = end - 1; i >= start; --i) {
      if (a[i] > a[i + 1]) {
        swap(a[i], a[i + 1]);
        tf = true;
        count ++;
      }
    }
    ++start;
  }
  return count;
}

int main() {
  //Question 1:
  cout << "Q1" << endl;
  cout << "(3  8) 3  2  7  5 " << endl;
  cout << " 3 (8  3) 2  7  5 " << endl;
  cout << " 3  3 (8  2) 7  5 " << endl;
  cout << " 3  3  2 (8  7) 5 " << endl;
  cout << " 3  3  2  7 (8  5)" << endl;
  cout << "(3  3) 2  7  5  8 " << endl;
  cout << " 3 (3  2) 7  5  8 " << endl;
  cout << " 3  2 (3  7) 5  8 " << endl;
  cout << " 3  2  3 (7  5) 8 " << endl;
  cout << "(3  2) 3  5  7  8 " << endl;
  cout << " 2 (3  3) 5  7  8 " << endl;
  cout << " 2  3 (3  5) 7  8 " << endl;
  cout << "(2  3) 3  5  7  8 " << endl;
  cout << " 2 (3  3) 5  7  8 " << endl;
  cout << " 2  3  3  5  7  8 " << endl;
  //Question 2: rather than array[x] > array[x+1], you would have to use array[x] < array[x+1]
  //Question 3:
  cout << "Q3" << endl;
  cout << "(2  9) 4  6  1  7  4 " << endl;
  cout << " 2 (9  4) 6  1  7  4 " << endl;
  cout << " 2  4 (9  6) 1  7  4 " << endl;
  cout << " 2  4  6 (9  1) 7  4 " << endl;
  cout << " 2  4  6  1 (9  7) 4 " << endl;
  cout << " 2  4  6  1  7 (9  4)" << endl;
  cout << " 2  4  6  1 (7  4) 9 " << endl;
  cout << " 2  4  6 (1  4) 7  9 " << endl;
  cout << " 2  4 (6  1) 4  7  9 " << endl;
  cout << " 2 (4  1) 6  4  7  9 " << endl;
  cout << "(2  1) 4  6  4  7  9 " << endl;
  cout << " 1  2  4  6  4  7  9 " << endl;
  //Question 4:
  cout << "Q4" << endl;
  int len;
  cin >> len;
  double num[len];
  for (int i = 0; i < len; i++){
    cin >> num[i];
  }
  int count = cocktailShakerSort(num, len);
  for (int i = 0; i < len; i++){
    cout << num[i] << " ";
  }
  cout << "\n" << count;
}
