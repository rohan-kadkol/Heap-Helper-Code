#include<stdio.h>

int values[50] = {8, 3, 5, 10, 38, 4, 27, 2, 9, 34};
int heapIndex = 9;

// 

// 1, 5, 6, 9, 10, 13, 12
//      1
//  5       6
// 9  10  13  12

void heapify(int *, int);

int main() {

  for (int i=heapIndex; i>=0; i--) {
    heapify(values, i);
  }
}

void heapify(int * values, int currentIndex) {
  int left = 2 * currentIndex + 1;
  int right = 2 * currentIndex + 2;

  int min = currentIndex;
  if (left <= currentIndex && values[left] < values[min]) {
    min = left;
  }
  if (right <= currentIndex && values[right] < values[min]) {
    min = right;
  }

  if (min != currentIndex) {
    int temp = values[currentIndex];
    values[currentIndex] = values[min];
    values[min] = temp;

    heapify(values, min);
  }
}