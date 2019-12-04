#include<stdio.h>

int main()
{
	int fiveNinths = 5 / 9;
	int nineFifths = 9 / 5;

	/* Output: 0 1 */
	printf("%d %d\n", fiveNinths, nineFifths);

	double double_FiveNinths = 5.0 / 9;
	double double_NineFifths = 9 / 5.0;

	/* Output: 0.56 1.80 */
	printf("%.2f %.2f\n", double_FiveNinths, double_NineFifths);
}