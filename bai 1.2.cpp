#include <stdio.h>

// Hàm tính tổng S(n) không đệ quy
float tinhTongKhongDeQuy(int n) {
	float sumKhongDeQuy = 0.0;
	for (int i = 1; i <= n; i++) {
		sumKhongDeQuy += (float)i / (i + 1);
	}
	return sumKhongDeQuy;
}

// Hàm tính tổng S(n) đệ quy
float tinhTongDeQuy(int n) {
	if (n == 1) {
		return 0.5;
	}
	else {
		return (float)n / (n + 1) + tinhTongDeQuy(n - 1);
	}
}

int main() {
	int n;
	printf("Nhap vao so nguyen duong n: ");
	scanf_s("%d", &n);

	// Tính tổng S(n) theo phương pháp không đệ quy
	float tongKhongDeQuy = tinhTongKhongDeQuy(n);
	printf("Tong S(n) theo phuong phap khong de quy la: %.2f\n", tongKhongDeQuy);

	// Tính tổng S(n) theo phương pháp đệ quy
	float tongDeQuy = tinhTongDeQuy(n);
	printf("Tong S(n) theo phuong phap de quy la: %.2f\n", tongDeQuy);

	// Để chương trình không thoát ngay sau khi tính xong, bạn có thể yêu cầu người dùng nhập một ký tự
	char dummy;
	printf("Nhap mot ky tu bat ky va Enter de thoat chuong trinh: ");
	scanf_s(" %c", &dummy);

	return 0;
}