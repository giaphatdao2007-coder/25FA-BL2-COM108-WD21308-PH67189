
#include <stdio.h>
#include <math.h>
void kiemTraSoNguyen()
{
		int x;
		printf("Nhap so nguyen x: ");
		scanf("%d", &x);
		printf("%d la so nguyen.\n", x);

		// 2. Kiem tra so nguyen to
		int count = 0;
		for (int i = 1; i <= x; i++) {
			if (x % i == 0) {
				count++;
			}
		}

		if (x >= 2 && count == 2)
			printf("%d la so nguyen to.\n", x);
		else
			printf("%d KHONG la so nguyen to.\n", x);

		// 3. Kiem tra so chinh phuong
		int a = sqrt(x);//square root
		if (a * a == x)
			printf("%d la so chinh phuong.\n", x);
		else
			printf("%d khong phai la so chinh phuong.\n", x);
		
		return 0;
	}

void uocChungBoiChung()
{
	printf("Uoc Chung Boi Chung");
}

void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			uocChungBoiChung();
			break;
		case 3:
			// goi TEN ham CN3
			break;
		case 0:
			return;
		default:
			printf("Hay chon lai [0-3]");
			break;
		}

		printf("\n");
		printf("Tiep tuc CN nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}
}

int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. TEN chuc nang 2");
		printf("\n");
		printf("3. TEN chuc nang 3");
		printf("\n");
		printf("Hay chon CN [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}
