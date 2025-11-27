#include<stdio.h>

int main() {
	int n, i;
	float tong = 0;
	int dem = 0;
	float trungBinh;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int arr[100];
	printf("Nhap cac phan tu cua mang:\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++) {
		if (arr[i] % 3 == 0) {
			tong += arr[i];
			dem++;
		}
	}
	if (dem > 0) {
		trungBinh = tong / dem;
		printf("Trung binh tong cac so chia het cho 3 trong mang la: %.2f\n", trungBinh);
	}
	else {
		printf("Khong co so nao chia het cho 3 trong mang.\n");
	}