#include<stdio.h>

int Array_in(int * arr, int n);
int Array_out(int * arr, int n);

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