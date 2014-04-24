#include <iostream>

using namespace std;

void testPrint(int *array, const int size, int k) {
  cout << "************************" << endl;
  cout << "Test on ";

  for (int i = 0; i < size; i++) {
    cout << array[i] << " "; 
  }
  cout << " to a sum of " << k << endl;
  cout << "************************" << endl;
}

/**
 * Assuming that all numbers are positive
 */
bool solve(int k, int* array, const int size, bool debug) {
  int max = 0;
  for (int i = 0; i < size; i++) {
    max += array[i];
  }
  
  if (k > max) {
    return false;
  }

  const int rows = max;
  bool matrix[rows+1][size];

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < size; j++) {
      matrix[i][j] = false; 
    } 
  }

  for (int i = 0; i < size; i++) {
    for (int sum = 0; sum < rows; sum++) {
      if (matrix[sum][i] && sum + array[i] < rows + 1) {
        for (int k = i; k < size; k++) {
          matrix[sum + array[i]][k] = true; 
        }
      } 
    }
    for (int j = i; j < size; j++) {
      matrix[array[i]][j] = true; 
    }
  }

  if (debug) {
    for (int i = 0; i < rows; i++) {
      cout << i << " ";
      for (int j = 0; j < size; j++) {
        cout << matrix[i][j] << " ";
      }
      cout << endl;
    }
  }
  cout << endl;

  for (int i = 0; i < size; i++) {
    if (matrix[k][i]) {
      return true; 
    } 
  }
  return false;
}
/*
int main() {
  const int size = 5;
  int array[size] = {1,2,3,4,5};
  bool good = solve(10, array, size);
  if (good) {
    cout << "IT WORKS!" << endl; 
  }
}*/
