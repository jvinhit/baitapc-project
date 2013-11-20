// Nhap vao mot so nguyen duong n
// n co phai la so chinh phuong?

#include <stdio.h>
#include <math.h>

void main()
{
	int n, n_can_nguyen;
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
	}
	while (n<=0);

	n_can_nguyen = (int)sqrt(n);
	if (n_can_nguyen*n_can_nguyen == n)
		printf("=> %d la so chinh phuong\n", n);
	else
		printf("=> %d khong la so chinh phuong\n", n);
}
