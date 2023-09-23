#include <iostream>
using namespace std;

void selectionSort(int num[], int len){
  for (int i = 0; i < len - 1; i++) {
    int min = i;
    for (int x = i; x < len; x++) {
      if (num[x] < num[min]) 
        min = x;
    }
    int temp = num[i];
    num[i] = num[min];
    num[min] = temp;
    for (int i = 0; i < len; i++){
      cout << num[i] << " ";
    }
    cout << "\n";
  }
}

void selectSort (int num[], int len, int k){
  for (int i = len -1; i > len - 1 - k; i--){
    int max = i;
    for (int x = i; x >= 0; x--){
      if (num[x] >= num[max])
        max = x;
    }
    int temp = num[i];
    num[i] = num[max];
    num[max] = temp;
  }
  for (int i = 0; i < len; i++){
    cout << num[i] << " ";
  }
}

int main() {
  //Question 1:
  cout << "Q1" << endl;
  cout << "Robert Brian Victor David Scott" << endl;
  cout << "Robert Brian Scott David Victor" << endl;
  cout << "Robert Brian David Scott Victor" << endl;
  cout << "David Brian Robert Scott Victor" << endl;
  cout << "Brian David Robert Scott Victor" << endl;
  //Question 2: since the usual function switches it with the next value if it is a greater value, it will sort the list from least to greatest. Although, if we were to compare and find the smaller value, it would sort the list from greatest to smallest. 
  //Question 3: a) a simple if statement would suffice by not comparing itself it the value is the same. b) this would require the function to run the if statment multiple times, reducing the effiency of the code
  //Question 4:
  int len = 6;
  int num[] = {8, 9, 6, 1, 2, 4};
  int k;
  cout << "Q4\n8 9 6 1 2 4" << endl;
  selectionSort(num, len);
  //Question 5:
  cout << "Q5" << endl;
  cin >> len;
  cin >> k;
  int num1[len];
  for (int i = 0; i < len; i++){
    cin >> num1[i];
  }
  selectSort(num1, len, k);
}