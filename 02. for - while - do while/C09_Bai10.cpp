// Nhap so nguyen duong n
// Xuat n phan tu dau tien cua day Fibonacy

#include <stdio.h>

void main()
{
	int n, an, an1, an2, i;

	printf("Nhap n: ");
	scanf("%d", &n);

	an2 = 1;
	an1 = 0;
	printf("=> %d phan tu dau tien cua day: ", n); 
	for (i = 1; i <= n; i++)
	{
		an = an2 + an1;
		printf("%d ", an);
		an2 = an1;
		an1 = an;
	}

	printf("\n");
}