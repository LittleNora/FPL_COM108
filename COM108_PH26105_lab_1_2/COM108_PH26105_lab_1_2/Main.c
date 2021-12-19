#include <stdio.h>

int main()
{
	int choice1, choice2;
	do
	{
	menu: //Menu
		printf_s("\n\nLab 1,2 made by Quang Vinh PH26105\n\n");
		printf_s("++----------------Menu----------------++\n");
		printf_s("|1. Tinh xep hang hoc luc              |\n");
		printf_s("|2. Tinh tuoi                          |\n");
		printf_s("|3. In ra bang cuu chuong theo yeu cau |\n");
		printf_s("|4. in ra tat ca bang cuu chuong       |\n");
		printf_s("|5. In ra bang cuu chuong theo khoang  |\n");
		printf_s("|6. Nhap vao mot so le                 |\n");
		printf_s("|7. Tinh tong day so nguyen nhap vao   |\n");
		printf_s("|8. Tinh trung binh diem mon C         |\n");
		printf_s("|9. Thoat chuong trinh                 |\n");
		printf_s("++------------------------------------++\n");
		printf_s("Hay nhap lua chon cua ban: ");
		scanf_s("%d", &choice1);
		switch (choice1)
		{
		case 1:
		bai1:
			// Bài 1: Xếp hạng bằng điểm GPA
			printf_s("\nChuong trinh xep hang hoc luc\n");
			double diemGPA;
			do { // Chạy vòng lặp mời nhập điểm, nếu nhập không hợp lệ sẽ lặp lại
				printf_s("\nMoi ban nhap vao diem GPA de xep hang: ");
				scanf_s("%lf", &diemGPA);
				printf_s("\n");
				if (diemGPA >= 9 && diemGPA <= 10) {
					printf_s("Ban dat xep loai Xuat sac!\n\n");
				}
				else if (diemGPA >= 8 && diemGPA < 9) {
					printf_s("Ban dat xep loai Gioi!\n\n");
				}
				else if (diemGPA >= 6 && diemGPA < 8) {
					printf_s("Ban dat xep loai Kha!\n\n");
				}
				else if (diemGPA >= 5 && diemGPA < 6) {
					printf_s("Ban dat xep loai trung binh!\n\n");
				}
				else if (diemGPA >= 0 && diemGPA < 5) {
					printf_s("Ban phai hoc lai!\n\n");
				}
				else {
					printf_s("Diem GPA ban nhap khong hop le! Hay nhap lai!\n");
				}
			} while (diemGPA < 0 || diemGPA > 10);//Nếu điểm GPA không hợp lệ sẽ thông báo và yêu cầu nhập lại
			do {
				printf_s("\nBan muon lam gi tiep theo?\n");
				printf_s("1. Quay lai Menu\n");
				printf_s("2. Quay lai chuong trinh xep hang\n");
				printf_s("3. Thoat chuong trinh\n");
				printf_s("Lua chon cua ban: ");
				scanf_s("%d", &choice2);
				printf_s("\n");
				switch (choice2)
				{
				case 1://Chọn trở lại menu ban đầu
					printf_s("Ban se duoc quay lai menu!\n\n");
					break;
				case 2://Chọn quay lại chương trình
					printf_s("\nBan se duoc tro lai chuong trinh xep hang\n");
					goto bai1;//Quay lại bài 1
				case 3://Chọn thoát chương trình
					printf_s("\nBan da chon thoat chuong trinh! An vao nut bat ky tren ban phim de thoat chuong trinh!\n");
					printf_s("Hen gap lai!\n");
					return;
				default:
					printf_s("Ban da nhap gia tri khong hop le. Xin moi nhap lai!");//Thông báo nhập sai
					break;
				}
			} while (choice2 < 0 || choice2 > 3);//Nếu nhập sai sẽ yêu cầu nhập lại
			break;
		case 2:
		bai2:
			// Bài 2: Nhập năm sinh và tính tuổi
			printf_s("\nChuong trinh tinh tuoi\n");
			int namSinh, tuoi;
		tinhTuoi:
			printf_s("Hay nhap vao nam sinh cua ban: ");
			scanf_s("%d", &namSinh);
			printf_s("\n");
			if (namSinh >= 2021) {//Nếu năm sinh >= 2021 thì là không hợp lệ
				printf_s("Nam sinh cua ban khong hop le! Hay nhap lai!\n\n");
				goto tinhTuoi; //Năm sinh không hợp lệ thì quay lại label tinhTuoi để nhập lại năm sinh
			}
			else {
				tuoi = 2021 - namSinh;//Tuổi = Năm hiện tại(2021) - Năm sinh
				printf_s("Tuoi cua ban la: %d tuoi\n", tuoi);
			}
			do {//Các lựa chọn sau khi thực hiện xong chương trình
				printf_s("\nBan muon lam gi tiep theo?\n");
				printf_s("1. Quay lai Menu\n");
				printf_s("2. Quay lai chuong trinh tinh tuoi\n");
				printf_s("3. Thoat chuong trinh\n");
				printf_s("Lua chon cua ban: ");
				scanf_s("%d", &choice2);
				printf_s("\n");
				switch (choice2)
				{
				case 1://Chọn trở lại menu ban đầu
					printf_s("Ban se duoc quay lai menu!\n\n");
					break;
				case 2://Chọn quay lại chương trình
					printf_s("\nBan se duoc tro lai chuong trinh tinh tuoi\n");
					goto bai2;//Quay lại bài 2
				case 3://Chọn thoát chương trình
					printf_s("\nBan da chon thoat chuong trinh! An vao nut bat ky tren ban phim de thoat chuong trinh!\n");
					printf_s("Hen gap lai!\n");
					return;
				default:
					printf_s("Ban da nhap gia tri khong hop le. Xin moi nhap lai!");//Thông báo nhập sai
					break;
				}
			} while (choice2 < 0 || choice2 > 3);//Nếu nhập sai sẽ yêu cầu nhập lại
			break;
		case 3:
		bai3:
			//Bài 3: In ra bảng cửu chương theo người dùng mong muốn
			printf_s("\nChuong trinh in bang cuu chuong\n");
			int luaChon;
			printf_s("Hay nhap vao bang cuu chuong ban mong muon: ");
			scanf_s("%d", &luaChon);
			printf_s("\nDay la bang cuu chuong %d cua ban:\n", luaChon);
			for (int i = 1; i <= 10; i++) {
				printf_s("%d x %d = %d\n", luaChon, i, luaChon * i);
			}
			do {//Các lựa chọn sau khi thực hiện xong chương trình
				printf_s("\nBan muon lam gi tiep theo?\n");
				printf_s("1. Quay lai Menu\n");
				printf_s("2. Quay lai chuong trinh in bang cuu chuong\n");
				printf_s("3. Thoat chuong trinh\n");
				printf_s("Lua chon cua ban: ");
				scanf_s("%d", &choice2);
				printf_s("\n");
				switch (choice2)
				{
				case 1://Chọn trở lại menu ban đầu
					printf_s("Ban se duoc quay lai menu!\n\n");
					break;
				case 2://Chọn quay lại chương trình
					printf_s("\nBan se duoc tro lai chuong trinh in bang cuu chuong\n");
					goto bai3;//Quay lại bài 3
				case 3://Chọn thoát chương trình
					printf_s("\nBan da chon thoat chuong trinh! An vao nut bat ky tren ban phim de thoat chuong trinh!\n");
					printf_s("Hen gap lai!\n");
					return;
				default:
					printf_s("Ban da nhap gia tri khong hop le. Xin moi nhap lai!");//Thông báo nhập sai
					break;
				}
			} while (choice2 < 0 || choice2 > 3);//Nếu nhập sai sẽ yêu cầu nhập lại
			break;
		case 4:
		bai4:
			//Bài 4: In ra tất cả bảng cửu chương từ 1 đến 10
			printf_s("\nChuong trinh in ra bang cuu chuong\n");
			printf_s("Day la bang cuu chuong tu 1 den 10: \n");
			for (int i = 1; i <= 10; i++) {
				printf_s("Bang cuu chuong %d\n", i);
				for (int j = 1; j <= 10; j++)//j chạy hết 10 giá trị từ 1 đến 10 thì i tăng lên 1
				{
					printf_s("%d x %d = %d\n", i, j, i * j);
				} printf_s("\n\n");
			}
			do {//Các lựa chọn sau khi thực hiện xong chương trình
				printf_s("\nBan muon lam gi tiep theo?\n");
				printf_s("1. Quay lai Menu\n");
				printf_s("2. Quay lai chuong trinh in ra bang cuu chuong tu 1 den 10\n");
				printf_s("3. Thoat chuong trinh\n");
				printf_s("Lua chon cua ban: ");
				scanf_s("%d", &choice2);
				printf_s("\n");
				switch (choice2)
				{
				case 1://Chọn trở lại menu ban đầu
					printf_s("Ban se duoc quay lai menu!\n\n");
					break;
				case 2://Chọn quay lại chương trình
					printf_s("\nBan se duoc tro lai chuong trinh in ra bang cuu chuong tu 1 den 10\n");
					goto bai4;//Quay lại bài 4
				case 3://Chọn thoát chương trình
					printf_s("\nBan da chon thoat chuong trinh! An vao nut bat ky tren ban phim de thoat chuong trinh!\n");
					printf_s("Hen gap lai!\n");
					return;
				default://Thông báo nhập sai
					printf_s("Ban da nhap gia tri khong hop le. Xin moi nhap lai!");
					break;
				}
			} while (choice2 < 0 || choice2 > 3);//Nếu nhập sai sẽ yêu cầu nhập lại
			break;
		case 5:
		bai5:
			//Bài 5: In ra bảng cửu chương theo khoảng nhập vào
			printf_s("\nChuong trinh in ra bang cuu chuong theo khoang\n");
			int khoangDau, khoangCuoi;
		nhapKhoang:
			printf("\nHay nhap vao khoang dau: ");
			scanf_s("%d", &khoangDau);
			printf("Hay nhap vao khoang cuoi: ");
			scanf_s("%d", &khoangCuoi);
			if (khoangDau > khoangCuoi) {
				printf_s("\nDay la bang cuu chuong tu %d den %d ma ban yeu cau:\n", khoangDau, khoangCuoi);
				for (int i = khoangDau; i >= khoangCuoi; i--) {
					printf_s("Bang cuu chuong %d\n", i);
					for (int j = 1; j <= 10; j++) {
						printf_s("%d x %d = %d\n", i, j, i * j);
					}
					printf_s("\n\n");
				}
			}
			else if (khoangDau < khoangCuoi) {
				printf_s("\nDay la bang cuu chuong tu %d den %d ma ban yeu cau:\n", khoangDau, khoangCuoi);
				for (int i = khoangDau; i <= khoangCuoi; i++) {
					printf_s("Bang cuu chuong %d\n", i);
					for (int j = 1; j <= 10; j++) {
						printf_s("%d x %d = %d\n", i, j, i * j);
					}
					printf_s("\n\n");
				}
			}
			else {
				printf_s("Gia tri khong hop le. Vui long nhap lai!");
				goto nhapKhoang;
			}
			do {//Các lựa chọn sau khi thực hiện xong chương trình
				printf_s("\nBan muon lam gi tiep theo?\n");
				printf_s("1. Quay lai Menu\n");
				printf_s("2. Quay lai chuong trinh in ra bang cuu chuong theo khoang\n");
				printf_s("3. Thoat chuong trinh\n");
				printf_s("Lua chon cua ban: ");
				scanf_s("%d", &choice2);
				printf_s("\n");
				switch (choice2)
				{
				case 1://Chọn trở lại menu ban đầu
					printf_s("Ban se duoc quay lai menu!\n\n");
					break;
				case 2://Chọn quay lại chương trình
					printf_s("\nBan se duoc tro lai chuong trinh in ra bang cuu chuong theo khoang\n");
					goto bai5;//Quay lại bài 5
				case 3://Chọn thoát chương trình
					printf_s("\nBan da chon thoat chuong trinh! An vao nut bat ky tren ban phim de thoat chuong trinh!\n");
					printf_s("Hen gap lai!\n");
					return;
				default:
					printf_s("Ban da nhap gia tri khong hop le. Xin moi nhap lai!");//Thông báo nhập sai
					break;
				}
			} while (choice2 < 0 || choice2 > 3);//Nếu nhập sai sẽ yêu cầu nhập lại
			break;
		case 6:
		bai6:
			//Bài 6: Nhập số lẻ
			printf_s("\nChuong trinh nhap vao so le\n");
			int soNhapVao;
			do {
				printf_s("\nHay nhap vao 1 so le: ");
				scanf_s("%d", &soNhapVao);
				printf_s("\n");
				if (soNhapVao % 2 != 0) {//Nếu số nhập vào chia cho 2 có dư thì là số lẻ và in ra màn hình thông báo
					printf_s("Ban da nhap dung. %d la so le!\n", soNhapVao);
				}
				else {//Nếu số nhập vào không chia hết cho 2 thì là số chẵn và in ra thông báo
					printf_s("So %d khong phai la so le, vui long nhap lai!\n", soNhapVao);
				}
			} while (soNhapVao % 2 == 0);//Nếu là số chẵn thì thực hiện vòng lặp
			do {//Các lựa chọn sau khi thực hiện xong chương trình
				printf_s("\nBan muon lam gi tiep theo?\n");
				printf_s("1. Quay lai Menu\n");
				printf_s("2. Quay lai chuong trinh nhap vao so le\n");
				printf_s("3. Thoat chuong trinh\n");
				printf_s("Lua chon cua ban: ");
				scanf_s("%d", &choice2);
				printf_s("\n");
				switch (choice2)
				{
				case 1://Chọn trở lại menu ban đầu
					printf_s("Ban se duoc quay lai menu!\n\n");
					break;
				case 2://Chọn quay lại chương trình
					printf_s("\nBan se duoc tro lai chuong trinh nhap vao so le\n");
					goto bai6;//Quay lại bài 6
				case 3://Chọn thoát chương trình
					printf_s("\nBan da chon thoat chuong trinh! An vao nut bat ky tren ban phim de thoat chuong trinh!\n");
					printf_s("Hen gap lai!\n");
					return;
				default:
					printf_s("Ban da nhap gia tri khong hop le. Xin moi nhap lai!");//Thông báo nhập sai
					break;
				}
			} while (choice2 < 0 || choice2 > 3);//Nếu nhập sai sẽ yêu cầu nhập lại
			break;
		case 7:
		bai7:
			//Bài 7: Chương trình tính tổng dãy số nguyên nhập vào
			printf_s("\nChuong trinh tinh tong day so nguyen nhap vao\n");
			int soLuong, sum = 0, soNguyenNhapVao;//Khai báo biến số lượng số nguyên nhập vào, tổng, số nguyên nhập vào từ bàn phím
			printf_s("Ban muon cong bao nhieu so nguyen? ");
			scanf_s("%d", &soLuong);
			printf_s("\n");
			for (int i = 1; i <= soLuong; i++) { //Yêu cầu nhập vào số nguyên thứ i
				printf_s("Hay nhap vao so nguyen thu %d: ", i);
				scanf_s("%d", &soNguyenNhapVao);
				sum += soNguyenNhapVao;//Cộng số vừa nhập vào tổng
			} printf_s("\nTong cua %d so nguyen ban nhap vao la %d\n", soLuong, sum);
			do {//Các lựa chọn sau khi thực hiện xong chương trình
				printf_s("\nBan muon lam gi tiep theo?\n");
				printf_s("1. Quay lai Menu\n");
				printf_s("2. Quay lai chuong trinh tinh tong day so nguyen nhap vao\n");
				printf_s("3. Thoat chuong trinh\n");
				printf_s("Lua chon cua ban: ");
				scanf_s("%d", &choice2);
				printf_s("\n");
				switch (choice2)
				{
				case 1://Chọn trở lại menu ban đầu
					printf_s("Ban se duoc quay lai menu!\n\n");
					break;
				case 2://Chọn quay lại chương trình
					printf_s("\nBan se duoc tro lai chuong trinh tinh tong day so nguyen nhap vao\n");
					goto bai7;//Quay lại bài 7
				case 3://Chọn thoát chương trình
					printf_s("\nBan da chon thoat chuong trinh! An vao nut bat ky tren ban phim de thoat chuong trinh!\n");
					printf_s("Hen gap lai!\n");
					return;
				default:
					printf_s("Ban da nhap gia tri khong hop le. Xin moi nhap lai!");//Thông báo nhập sai
					break;
				}
			} while (choice2 < 0 || choice2 > 3);//Nếu nhập sai sẽ yêu cầu nhập lại
			break;
		case 8:
		bai8:
			//Bài 8: Tính điểm trung bình môn C
			printf_s("\nChuong trinh tinh diem trung binh mon C\n");
			double diemC, diemTb, tong = 0;
			int n;
			printf_s("Ban muon tinh trung binh bao nhieu dau diem cua mon C? ");
			scanf_s("%d", &n);
			printf_s("\n");
			for (int i = 1; i <= n; i++) {//Vòng lặp để nhập từ điểm thứ 1 đến điểm thứ n sau đó cộng điểm vừa nhập vào biến tong
			nhapDiem:
				printf_s("Hay nhap vao diem thu %d: ", i);
				scanf_s("%lf", &diemC);
				if (diemC >= 0 && diemC <= 10) {//Nếu điểm hợp lệ sẽ cộng vào biến tong
					tong += diemC;
				}
				else {
					printf_s("Diem ban vua nhap khong hop le. Xin moi nhap lai.\n\n");//Nếu sai in ra thông báo và yêu cầu nhập lại
					goto nhapDiem;//Quay lại bước nhapDiem khi sai
				}
			}
			diemTb = tong / (double)n;
			printf_s("\nDiem trung binh cua %d dau diem mon C ban nhap vao la %0.1lf\n", n, diemTb);
			do {//Các lựa chọn sau khi thực hiện xong chương trình
				printf_s("\nBan muon lam gi tiep theo?\n");
				printf_s("1. Quay lai Menu\n");
				printf_s("2. Quay lai chuong trinh tinh diem trung binh mon C\n");
				printf_s("3. Thoat chuong trinh\n");
				printf_s("Lua chon cua ban: ");
				scanf_s("%d", &choice2);
				printf_s("\n");
				switch (choice2)
				{
				case 1: //Chọn trở lại menu ban đầu
					printf_s("Ban se duoc quay lai menu!\n\n");
					break;
				case 2: //Chọn trở lại chương trình
					printf_s("\nBan se duoc tro lai chuong trinh tinh diem trung binh mon C\n");
					goto bai8;//Quay lại bài 8
				case 3: //Chọn thoát chương trình
					printf_s("\nBan da chon thoat chuong trinh! An vao nut bat ky tren ban phim de thoat chuong trinh!\n");
					printf_s("Hen gap lai!\n");
					return;
				default:
					printf_s("Ban da nhap gia tri khong hop le. Xin moi nhap lai!");//Thông báo nhập sai
					break;
				}
			} while (choice2 < 0 || choice2 > 3);//Nếu nhập sai sẽ yêu cầu nhập lại
			break;
		case 9:
		bai9:
			//Bài 9: Thoát chương trình
			printf_s("\nBan da chon thoat chuong trinh!\nAn vao nut bat ky tren ban phim de thoat chuong trinh!\n");
			printf_s("Hen gap lai!\n");
			return;
			break;
		default://Thông báo nhập sai và được trở lại Menu
			printf_s("\nLua chon cua ban khong hop le!");
			printf_s("\nBan se duoc quay lai menu!\n\n");
			break;
		}
	} while (1);//Vòng lặp vô hạn để lặp lại
	return 0;
}