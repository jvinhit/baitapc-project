// Nhap vao mot so nguyen duong n
// Cac chu so cua n co tang dan hay khong?

#include <stdio.h>

void main()
{
	int n, sotruoc, sosau;
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
	}
	while (n<=0);

	sotruoc = n % 10;
	do
	{
		sosau = sotruoc;
		n = n / 10;
		sotruoc = n % 10;
	}
	while (n != 0 && sotruoc < sosau);

	if (sotruoc < sosau)
		printf("=> Cac chu so tang dan\n");
	else
		printf("=> Cac chu so ko tang dan\n");
}