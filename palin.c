#include  <stdio.h>
int main() {
  int n,s=0;
  printf("Enter a no %n\n",n );
  int m=n;
  while (m>0) {
    int r=m%10;
    s=s*10+r;
    m=m/10;
  }
  if (n=s) {
    printf("it is a palindrome no\n" );
  } else {
    printf("it is not a palindrome no\n" );
  }
  return 0;
}
