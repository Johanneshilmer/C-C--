# include <stdio.h>

int main(void) {
  double a = 0.0;
  double b = 0.0;

  printf("Enter the first number: ");
  scanf("%lf", &a);
  printf("Enter second number: ");
  scanf("%lf", &b);

  printf("+ = %.2f\n", a+b);
  printf("- = %.2f\n", a-b);
  printf("* = %.2f\n", a*b);
  printf("/ = %.2f\n", a/b);

  return 0;
}