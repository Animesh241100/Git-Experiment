#include<stdio.h>

int Array_in(int * arr, int n);
int Array_out(int * arr, int n);

// A new comment in here
int main() {
  int arr[10];
  printf("My heading: \n");
  Array_in(arr, 10);
  Array_out(arr, 10);
  return 0;
}

int Array_in(int * arr, int n) {
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
} 

int Array_out(int * arr, int n) {
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");
} 
void Multiply(int * arr, int n);

int main() {
  int arr[11] = {0, 1, 2, 3, 4, 5, 6, 7, 6, 9, 10};
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
