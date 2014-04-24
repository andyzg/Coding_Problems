#include <iostream>
#include <assert.h>
#include "SubsetSum.h"

using namespace std;

int main() {
  bool debug = false;

  // First unit test
  const int sizeA = 3;
  int arrayA[sizeA] = {1,4,6};
  int kA = 3;
  testPrint(arrayA, sizeA, kA);
  assert(solve(kA, arrayA, sizeA, debug) == false);

  // Second unit test
  const int sizeB = 5;
  int arrayB[sizeB] = {7, 90, 23, 21, 2};
  int kB = 97;
  testPrint(arrayB, sizeB, kB);
  assert(solve(kB, arrayB, sizeB, debug) == true);

  // Third unit test
  const int sizeC = 1;
  int arrayC[sizeC] = {4};
  int kC = 5;
  testPrint(arrayC, sizeC, kC);
  assert(solve(kC, arrayC, sizeC, debug) == false);

  // Fourth unit test
  const int sizeD = 10;
  int arrayD[sizeD] = {1,1,1,1,1,1,1,1,1,1}; 
  int kD = 6;
  testPrint(arrayD, sizeD, kD);
  assert(solve(kD, arrayD, sizeD, debug) == true);

  // Fifth unit test
  const int sizeE = 5;
  int arrayE[sizeE] = {21, 22, 23, 24, 25};
  int kE = 45;
  testPrint(arrayE, sizeE, kE);
  assert(solve(kE, arrayE, sizeE, debug) == true);

  cout << "Test cases passed" << endl;
}
