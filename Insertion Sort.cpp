#include <iostream>
using namespace std;

double median(int length, double num[]){
  for (int i = 1; i < length; i++){
   int pos = i;
   while (num[pos] < num[pos - 1]) {
     double temp = num[pos];
     num[pos] = num[pos - 1];
     num[pos - 1] = temp;
     pos--;
     if (pos < 1)
      break;
   }
 }
 if (length % 2 == 1) 
   return(num[length/2]);
 else
  return((num[length/2] + num[length/2 - 1])/2);
}

int main() {
//Question 1: 
  cout << "Q1" << endl;
  cout << "6 2 8 3 1 7 4" << endl;
  cout << "2 6 8 3 1 7 4" << endl;
  cout << "2 6 8 3 1 7 4" << endl;
  cout << "2 3 6 8 1 7 4" << endl;
  cout << "1 2 3 6 8 7 4" << endl;
  cout << "1 2 3 6 7 8 4" << endl;
  cout << "1 2 3 4 6 7 8" << endl;
  //2. Insertion sort is unique because it would start on the second last term, compare it to the value on the right and would switch it value is larger. This would progress until all values are compared. The next value would be the left of the number which was just compared. 
  //3. 
  cout << "Q3" << "\n";
  string planets[8] = {"mercury", "venus", "earth", "mars", "jupiter", "saturn", "uranus", "neptune"};
  for (int i = 0; i < 8; i++){
    cout << planets[i] << " ";
  }
  cout << "\n";
  for (int i = 1; i < 8; i++){
   int pos = i;
   while (planets[pos] < planets[pos - 1]){
     string temp = planets[pos];
     planets[pos] = planets[pos - 1];
     planets[pos - 1] = temp;
     pos--;
     if (pos < 1)
      break;
   }
  for (int i = 0; i < 8; i++){
   cout << planets[i] << " ";
  }
  cout << "\n";
  }
  //4. test
  cout << "Q4" << "\n";
  int length;
  cin >> length;
  double num[length];
  for (int i = 0; i < length; i++){
    cin >> num[i];
  }
  cout << median(length, num);
  //5. If the two valuues have the same value, they should not be swapped so in this case, it is stable. 
}