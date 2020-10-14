#include<stdio.h>

void Multiply(int * arr, int n);

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 6, 9, 10};
  Multiply(arr, 10);
  printf("hello w");
  for (int i = 0; i < 10; i++)
    printf("%d ", arr[i]);
  return 0;
}

void Multiply(int * arr, int n) {
  for (int i = 0; i < n; i++)
    arr[i] = 2 * arr[i];
}