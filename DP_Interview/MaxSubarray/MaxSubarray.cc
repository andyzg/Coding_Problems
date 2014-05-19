#include <iostream>

using namespace std;

int solve(int *array, const int size, const bool debug) {
  int max = 0;
  int maxStart = 0;
  int maxEnd = 0;
  
  int currentStart = 0;
  int currentEnd = 0;
  int sum = 0;

  for (int i=0; i<size; i++) {
    sum += array[i];
    currentEnd = i;

    if (sum < 0) {
      sum = 0;
      currentStart = i+1;
    } else if (max < sum) {
      max = sum;
      maxStart = currentStart;
      maxEnd = currentEnd;
    }
  }

  if (debug) {
    cout << "Max start: " << maxStart << " Max end: " << maxEnd << endl;
    for (int i=maxStart; i<=maxEnd; i++) {
      cout << array[i] << " "; 
    }
    cout << endl;
  }
  return max;
}
