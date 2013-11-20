#include <stdio.h>
#define MAX 100

// Declaration (Prototypes)
void HoanVi(int &x, int &y);
int LaSNT(int n);
void NhapMang(int a[], int &n);
void XuatMang(int a[], int n);
int TimKiemDauTien_C1(int a[], int n, int x);
int TimKiemDauTien_C2(int a[], int n, int x);
int KiemTraToanSNT_C1(int a[], int n);
int KiemTraToanSNT_C2(int a[], int n);
int KiemTraToanSNT_C3(int a[], int n);
void TachSNT(int a[], int na, int b[], int &nb);
void TachSNT_SKNT(int a[], int na, int b[], int &nb, int c[], int &nc);
void GopMang(int a[], int na, int b[], int nb, int c[], int &nc);
int TimMin(int a[], int n);
int TimMax(int a[], int n);
void SapXepTang(int a[], int n);
void SapXepGiam(int a[], int n);
void Them(int a[], int &n, int vt, int x);
void Xoa(int a[], int &n, int vt);

void DaoMang_C1(int a[], int n)
{
	int tam;
	for (int i=0; i<n/2; i)
	{
		tam = a[i];
		a[i] = a[n-i-i];
		a[n-1-i] = tam;
	}
}
void main()
{
	int a[MAX], b[MAX], c[MAX], d[MAX];
	int na, nb, nc, nd;

	NhapMang(a, na);
	XuatMang(a, na);

	DaoMang(a, na);
	XuatMang(a, na);

	int x;
	printf("Nhap x: ");
	scanf("%d", &x);
	int kq = TimKiemDauTien_C2(a, na, x);

	if (kq >= 0)
		printf("PT %d xuat hien dau tien tai vi tri thu %d\n", x, kq + 1);
	else
		printf("PT %d khong xuat hien trong mang\n", x);

	if (KiemTraToanSNT_C3(a, na) == 1)
		printf("Mang toan SNT\n");
	else
		printf("Mang ko toan SNT\n");

	TachSNT_SKNT(a, na, b, nb, c, nc);
	XuatMang(b, nb);
	XuatMang(c, nc);

	GopMang(b, nb, c, nc, d, nd);
	XuatMang(d, nd);

	printf("Gia tri nho nhat cua mang la %d\n", TimMin(a, na));

	SapXepTang(a, na);
	XuatMang(a, na);
}

// Definition
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

void NhapMang(int a[], int &n)
{
	printf("Nhap so luong phan tu n: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int a[], int n)
{
	printf("Noi dung cua mang la: ");

	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);

	printf("\n");
}

int TimKiemDauTien_C1(int a[], int n, int x)
{
	int vt = 0;

	while (vt < n && a[vt] != x)
		vt++;
	
	if (vt < n)
		return vt;

	return -1;
}

int TimKiemDauTien_C2(int a[], int n, int x)
{
	for (int vt = 0; vt < n; vt++)
		if (a[vt] == x)
			return vt;

	return -1;
}

int KiemTraToanSNT_C1(int a[], int n)
{
	int dem = 0;

	for (int i = 0; i < n; i++)
		if (LaSNT(a[i]))
			dem++;

	if (dem == n)
		return 1;
	
	return 0;		
}

int KiemTraToanSNT_C2(int a[], int n)
{
	int dem = 0;

	for (int i = 0; i < n; i++)
		if (!LaSNT(a[i]))
			dem++;

	if (dem == 0)
		return 1;
	
	return 0;		
}

int KiemTraToanSNT_C3(int a[], int n)
{
	for (int i = 0; i < n ; i++)
		if (LaSNT(a[i]) == 0)
			return 0;

	return 1;
}

void TachSNT(int a[], int na, int b[], int &nb)
{
	nb = 0;
	
	for (int i = 0; i < na; i++)
		if (LaSNT(a[i]) == 1)
		{
			b[nb] = a[i];
			nb++;
		}
}

void TachSNT_SKNT(int a[], int na, int b[], int &nb, int c[], int &nc)
{
	nb = 0;
	nc = 0;

	for (int i = 0; i < na; i++)
		if (LaSNT(a[i]) == 1)
		{
			b[nb] = a[i]; nb++; // b[nb++] = a[i];
		}
		else
		{
			c[nc] = a[i]; nc++; // c[nc++] = a[i];
		}	
}

void GopMang(int a[], int na, int b[], int nb, int c[], int &nc)
{
	nc = 0;

	for (int i = 0; i < na; i++)
	{
		c[nc] = a[i]; nc++; // c[nc++] = a[i];
	}

	for (int i = 0; i < nb; i++)
	{
		c[nc] = b[i]; nc++; // c[nc++] = b[i];
	}
}

int TimMin(int a[], int n)
{
	int min = a[0];

	for (int i = 1; i < n; i++)
		if (a[i] < min)
			min = a[i];

	return min;
}

int TimMax(int a[], int n)
{
	int max = a[0];

	for (int i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];

	return max;
}

void SapXepTang(int a[], int n)
{
	int i, j;
	
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
		}
	}
}

void SapXepGiam(int a[], int n)
{
	int i, j;
	
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
				HoanVi(a[i], a[j]);
		}
	}
}

void Them(int a[], int &n, int vt, int x)
{
	if (vt >= 0 && vt <= n)
	{
		for (int i = n; i > vt; i--)
			a[i] = a[i - 1];
	
		a[vt] = x;
		n++;
	}
}

void Xoa(int a[], int &n, int vt)
{
	if (vt >= 0 && vt < n)
	{
		for (int i = vt; i < n - 1; i++)
			a[i] = a[i + 1];
	
		n--;
	}
}