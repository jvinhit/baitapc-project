// Nhap vao mot so nguyen duong n
// n co phai la so doi xung?

#include <stdio.h>

void main()
{
	int n, sogoc, sodao, donvi;
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
	}
	while (n<=0);

	sogoc = n;
	sodao = 0;
	while (sogoc > 0)
	{
		donvi = sogoc % 10;
		sogoc = sogoc / 10;
		sodao = sodao*10 + donvi;
	}
	
	if (sodao == n)
		printf("=> %d la so doi xung\n", n);
	else
		printf("=> %d khong la so doi xung\n", n);
}
