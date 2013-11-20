#include <stdio.h>
#define MAXD 50
#define MAXC 100

void HoanVi(int &x, int &y);
int LaSNT(int n);
void NhapMaTran(int a[][MAXC], int &m, int &n);
void XuatMaTran(int a[][MAXC], int m, int n);
int TimKiem(int a[][MAXC], int m, int n, int x, int &d, int &c);

void main()
{
	int a[MAXD][MAXC];
	int m, n;

	NhapMaTran(a, m, n);
	XuatMaTran(a, m, n);
	int x, d, c;
	printf("Nhap x: ");
	scanf("%d", &x);
	if (TimKiem(a, m, n, x, d, c) == 1)
		printf("Tim thay %d trong ma tran a tai [%d][%d]\n", x, d, c);
	else
		printf("Ko tim thay %d trong ma tran a\n", x);
}

void HoanVi(int &x, int &y)
{
	int tam = x; x = y; y = tam;
}

int LaSNT(int n)
{
	int i, dem = 0;
	for (i = 1; i <= n; i++)
		if (n%i == 0)
			dem++;

	if (dem == 2)
		return 1;
	return 0;
}

void NhapMaTran(int a[][MAXC], int &m, int &n)
{
	printf("Nhap so dong, so cot cua ma tran: ");
	scanf("%d%d", &m, &n);

	int i, j;
	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
		{
			printf("Nhap a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
}

void XuatMaTran(int a[][MAXC], int m, int n)
{
	int i, j;
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
			printf("%d ", a[i][j]);

		printf("\n");
	}
}

int TimKiem(int a[][MAXC], int m, int n, int x, int &d, int &c)
{
	int i, j;
	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
			if (a[i][j] == x)
			{
				d = i;
				c = j;
				return 1;
			}
	return 0;
}

int KiemTra_C3(int a[][MAXC], int m, int n)
{
	int i, j, dem = 0;

	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
			if (LaSNT(a[i][j]==0)
				return 0;

	return 1;
}

