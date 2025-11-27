

#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int mang[3];
    int i;
    // Nhập mảng
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }
    float tong = 0;
    float trungbinh;
    int dem = 0;

    // Duyệt mảng và tính tổng các số chia hết cho 3
    for (i = 0; i < n; i++) {
        if (mang[i] % 3 == 0) {
            tong += mang[i];   
            dem++;           
        }
    }

    // Kiểm tra tránh chia cho 0
    if (dem > 0) {
        trungbinh = tong / dem;
        printf("Trung binh cac so chia het cho 3 la: %.2f\n", trungbinh);
    }
    else {
        printf("Khong co so nao chia het cho 3 trong mang.\n");
    }

    return 0;
}