// Nhap so nguyen duong n
// Xuat so dao cua so nay

#include <stdio.h>

void main()
{
	int n, donvi;

	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
	}
	while (n<=0);
	
	printf("=> So dao cua %d la ", n);
	while (n > 0)
	{
		donvi = n % 10;
		n = n / 10;
		printf("%d", donvi);
	}

	printf("\n");
}
