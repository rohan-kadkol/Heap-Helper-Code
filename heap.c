#include <stdio.h>
#include <string.h>

int heap[50];
int heapIndex = -1;

void printHeapElements(void);
void insert(int);
void extractMin(void);
void floatUp(int);
void sinkDown(int);

int main() {
  char operation[15];  // INSERT, EXTRACT_MIN, EXIT
  int value;
  char input[50];
  scanf("%s %d", &operation, &value);

  while (strcmp(operation, "EXIT") != 0) {
    if (strcmp(operation, "INSERT") == 0) {
      insert(value);
    } else if (strcmp(operation, "EXTRACT_MIN") == 0) {
      extractMin();
    } else {
      printf("INVALID_OPERATION\n");
      fflush(stdout);
    }
    scanf("%s %d", &operation, &value);
  }
}

void insert(int value) {
  // TODO: For you to implement
}

void floatUp(int heapIndex) {
  // TODO: For you to implement
}

void extractMin() {
  // TODO: For you to implement
}

void sinkDown(int currentIndex) {
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
    sinkDown(min);
  }
}

void printHeapElements() {
  for (int i = 0; i <= heapIndex; i++) {
    printf("%d ", heap[i]);
    fflush(stdout);
  }
  printf("\n");
  fflush(stdout);
}