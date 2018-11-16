#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
	double radius,area;
	printf("Enter radius (e.g. 10):");
	scanf("%lf", & radius);
	area = PI*radius*radius;
	printf("\n Area = %lf\n", area );
	return 0;
}
