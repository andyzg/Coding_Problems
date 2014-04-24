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

  bool sol[rows+1];
  for (int i = 0; i < rows + 1; i++) {
    sol[i] = false; 
  }

  for (int i = 0; i < size; i++) {
    for (int sum = 0; sum < rows; sum++) {
      if (sol[sum] && sum + array[i] < rows+1) {
        sol[sum+array[i]] = true; 
      }
    } 
    sol[array[i]] = true;
  }

  if (debug) {
    for (int i = 0; i < rows + 1; i++) {
      cout << sol[i] << " ";
    }
  }

  if (sol[k]) {
    return true; 
  } 
  return false;
}
