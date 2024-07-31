//#include <stdio.h>
//
//// Hàm tính tổng S(n) không đệ quy
//int tinhTongKhongDeQuy(int n) {
//	int sumKhongDeQuy = 0;
//	for (int i = 1; i <= n; i++) {
//		sumKhongDeQuy += i;
//	}
//	return sumKhongDeQuy;
//}
//
//// Hàm tính tổng S(n) đệ quy
//int tinhTongDeQuy(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	else {
//		return n + tinhTongDeQuy(n - 1);
//	}
//}
//
//int main() {
//	int n;
//	printf("Nhap vao so nguyen duong n: ");
//	scanf_s("%d", &n);
//
//	// Tính tổng S(n) theo phương pháp không đệ quy
//	int tongKhongDeQuy = tinhTongKhongDeQuy(n);
//	printf("Tong S(n) theo phuong phap khong de quy la: %d\n", tongKhongDeQuy);
//
//	// Tính tổng S(n) theo phương pháp đệ quy
//	int tongDeQuy = tinhTongDeQuy(n);
//	printf("Tong S(n) theo phuong phap de quy la: %d\n", tongDeQuy);
//
//	return 0;
//}