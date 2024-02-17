#include <stdio.h>
void SI(float p, float r, float t);

int main() {
  float principle, rate, time;

  printf("Enter principle amount: ");
  scanf("%f", & principle);

  printf("Enter rate of interest: ");
  scanf("%f", & rate);

  printf("Enter time in years: ");
  scanf("%f", & time);

  SI(principle, rate, time);

  return 0;
}

void SI(float p, float r, float t) {
  float si;

  si = (p * r * t) / 100;

  printf("Simple Interest = %f", si);
}
