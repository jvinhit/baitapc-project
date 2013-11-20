// Nhap mot so nguyen bat ky.
// Hay doc so do neu no co gia tri tu 1 den 9.
// Nguoc lai, thong bao khong biet doc 

#include <stdio.h>

void main()
{
	int n;
	printf("Nhap mot so nguyen: ");
	scanf("%d", &n);
	
	switch (n)
	{
		case 1: printf("Mot"); break;
		case 2: printf("Hai"); break;
		case 3: printf("Ba"); break;
		case 4: printf("Bon"); break;
		case 5: printf("Nam"); break;
		case 6: printf("Sau"); break;
		case 7: printf("Bay"); break;
		case 8: printf("Tam"); break;
		case 9: printf("Chin"); break;
		default: printf("Khong biet doc!");
	}

	printf("\n");
}
