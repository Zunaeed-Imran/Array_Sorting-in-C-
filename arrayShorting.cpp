#include <iostream>

using namespace std;

int main() {
  int i, j, temp, arr[8] = { 12, 3, 1, 5, 18, 10, 7, 35 };

  cout << "Unsorted array : \n";

  for (int i = 0; i < 8; i++) {
    cout << arr[i] << "\t";
  }

  cout << endl;

  for(int i = 0; i < 8; i++) {
    for (int j = i + 1; j < 8; j++) {
      if (arr[j] < arr[i]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  cout << "Sorted element: \n ";
  
  for (int i = 0; i < 8; i++) {
    cout << arr[i] << "\t";
  }

  return 0;
}