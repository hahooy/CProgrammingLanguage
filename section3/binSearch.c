#include <stdio.h>
#define LEN 100

int binsearch(int a[], int k, int n);

main() {
  int a[LEN], i;
  int k = 50;

  for (i = 0; i < LEN; i++) {
    a[i] = i;
  }

  printf("%d is found at %d\n", k, binsearch(a, k, LEN));
}

int binsearch(int a[], int k, int n) {
  int lo = 0, hi = n - 1;
  int mid = lo + (hi - lo) / 2;
  
  while(lo <= hi && a[mid] != k) {
    if (k > a[mid]) {
      lo = mid + 1;
    } else {
      hi = mid - 1;
    }
    mid = lo + (hi - lo) / 2;
  }
  if (a[mid] == k) {
    return mid;
  } else {
    return -1;
  }
}
