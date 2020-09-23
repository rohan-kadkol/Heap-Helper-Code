#include<stdio.h>

void heapify(int *, int);
void printHeapElements(int *);
int extractMin(int *);
void sinkDown(int *, int);

int values[50] = {8, 3, 5, 10, 38, 4, 27, 2, 9, 34};
int heapIndex = 9;
const int heapSize = 9;

int main() {
  printHeapElements(values);

  for (int i=heapIndex; i>=0; i--) {
    heapify(values, i);
  }

  int sorted[9];
  for (int i= 0; i<=heapSize; i++) {
    int min = extractMin(values);
    sorted[i] = min;
  }

  printHeapElements(sorted);
}

void heapify(int * values, int currentIndex) {
  int min = currentIndex;
  int left = 2*currentIndex + 1;
  int right = 2*currentIndex + 2;

  if (left <= heapIndex && values[left] < values[min]) {
    min = left;
  }
  if (right <= heapIndex && values[right] < values[min]) {
    min = right;
  }

  if (min != currentIndex) {
    int temp = values[currentIndex];
    values[currentIndex] = values[min];
    values[min] = temp;

    heapify(values, min);
  }
}

int extractMin(int * heap) {
  int min = heap[0];
  heap[0] = heap[heapIndex--];
  sinkDown(heap, 0);
  return min;
}

void sinkDown(int * heap, int currentIndex) {
  int left = 2 * currentIndex + 1;
  int right = 2 * currentIndex + 2;

  int min = currentIndex;
  if (left <= heapIndex && heap[left] < heap[min]) {
    min = left;
  }
  if (right <= heapIndex && heap[right] < heap[min]) {
    min = right;
  }

  int temp = heap[min];
  heap[min] = heap[currentIndex];
  heap[currentIndex] = temp;

  if (min != currentIndex) {
    sinkDown(heap, min);
  }
}

void printHeapElements(int * values) {
  for (int i = 0; i<=heapSize; i++) {
    printf("%d ", values[i]);
  }
  printf("\n");
}