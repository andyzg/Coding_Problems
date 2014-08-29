#include <iostream>

using namespace std;

void print_array(int *array, const int size) {
  for (int i=0; i<size; i++) {
    cout << array[i] << " "; 
    if (array[i]/10 == 0 && array[i] >= 0) {
      cout << " ";
    }
  }
  cout << endl;
}

/** A pretty simple solution I found online. I'm copying this down to
  * analyze how the author got to the solution and see how a dynamic 
  * programming solution works as opposed to another technique
  */
int solve(int *array, const int size, const bool debug) {
  // Variables to keep track of what and where for the max length
  int maxLength = 1;
  int maxIndex = 0;
  
  // Array to keep track of longest subsequence at the ith index
  int maxLengths[size];
  // Array to keep track of the preceding element of the ith index
  int prev[size];

  for (int i=0; i<size; i++) {
    // The max length is always going to be >=1 from any index. This is 
    // because if this element is the startig point for the longest
    // increasing subsequence, it starts as 1, otherwise, it's >1
    maxLengths[i] = 1;

    // If it's the start of the longest increasing subsequence, then 
    // the previous index should not exist, thus 1
    prev[i] = -1;

    for (int j=i-1; j>=0; j--) {
      // Iterate through all of the previous elements to determine where
      // the ith element's predecessor should be if it exists
      // We want to make sure that its predecessor is less and has a longer
      // subsequence
      if (array[i] > array[j] && maxLengths[j]+1 > maxLengths[i]) {
        // If it's longer, update its length and the index of its predecessor
        maxLengths[i] = maxLengths[j] + 1; 
        prev[i] = j;
      } 
    }

    if (maxLengths[i] > maxLength) {
      // If we find a longer increasing subsequence than the previous one stored,
      // we update it
      maxLength = maxLengths[i]; 
      maxIndex = i;
    }

    if (debug) {
      // In order to keep track of everything, debug with this
      cout << "==============" << endl;
      cout << "Array:                     ";
      print_array(array, size);
      cout << "Max lengths of each index: ";
      print_array(maxLengths, i); 
      cout << "Index of previous number:  ";
      print_array(prev, i); 
      cout << "==============" << endl;
    }
  }
   
  return maxLength;
}

