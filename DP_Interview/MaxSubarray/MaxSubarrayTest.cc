#include <iostream>
#include <assert.h>
#include "MaxSubarray.h"

using namespace std;

int main() {
  bool debug = true;

  // First unit test
  const int sizeA = 8;
  int arrayA[sizeA] = {1, -2, 3, 10, -4, 7, 2, -5};
  assert(solve(arrayA, sizeA, debug) == 18);

  // Second unit test
  const int sizeB = 1;
  int arrayB[sizeB] = {10};
  assert(solve(arrayB, sizeB, debug) == 10);

  // First unit test
  const int sizeC = 0;
  int arrayC[sizeC] = {};
  assert(solve(arrayC, sizeC, debug) == 0);

  // First unit test
  const int sizeD = 4;
  int arrayD[sizeD] = {24, -11, -11, 20};
  assert(solve(arrayD, sizeD, debug) == 24);

  // First unit test
  const int sizeE = 3;
  int arrayE[sizeE] = {100, -50, 100};
  assert(solve(arrayE, sizeE, debug) == 150);

  cout << "Test cases passed" << endl;
}
