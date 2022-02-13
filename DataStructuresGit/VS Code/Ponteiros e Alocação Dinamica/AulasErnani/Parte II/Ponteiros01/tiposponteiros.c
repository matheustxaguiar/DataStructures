#include <stdio.h>

int main() {
  int *ptra;
  float *ptrb;
  char *ptrc;
  long *ptrd;

  int a = 147;
  float b = 3678.56;
  char c = 'a';
  long l = 12345678;

  ptra = &a;
  ptrb = &b;
  ptrc = &c;
  ptrd = &l;

  ptra = ptrb;


  printf("%p %p %p %p", *ptra,*ptrb,*ptrc,*ptrd);

  return 0;
}
