


#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv) {

  double area, base, height;

	printf("Please enter the base of a triangle: ");

  scanf("%lf", &base);

  printf("Please enter the height of a triangle: ");

  scanf("%lf", &height);

  area = 1.0/2.0 * base * height;

	printf("The area is %f square units.\n", area);

	return 0;
}