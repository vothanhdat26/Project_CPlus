#include"dat270.h"
void Press()
{
	system("pause");
	system("cls");
}
int main()
{
	mathang* mh = new mathang[100];
	int chon;
	int n = 0;
	cout << "\n\n\n\tChon mot trong cac yeu cau sau:" << endl;
	while (true)
	{
		cout << "\n===========Quan ly mat hang=============";
		cout << "\n*****************MENU*******************";
		cout << "\n1.Nhap danh sach cac mat hang ";
		cout << "\n2.Mat hang co so luong ton nhieu nhat";
		cout << "\n3.Mat hang co so luong ton it nhat";
		cout << "\n4.Mat hang co gia tien nhieu nhat";
		cout << "\n5.Mat hang co thoi gian bao hanh hon 12 thang";
		cout << "\n6.Sap xep mat hang theo thu tu tang dan so luong ton";
		cout << "\n7. Xuat mat hang ";
		cout << "\n0. Thoat ";
		cout << "\nNhap tuy chon: ";
		cin >> chon;
		switch (chon)
		{
		case 1:
			// nhap so luong
			nhapThongtin(mh, n);
			n++;
			Press();
			break;
		case 2:
			inMAX(mh, n);
			Press();
			break;
		case 3:
			// mat hang co so luong ton nho nhat
			inMin(mh, n);
			Press();
			break;
		case 4:
			// mat hang co gia tien nhieu nhat
			gMax(mh, n);
			Press();
			break;
		case 5:
			// mat hang co tgian bao hanh lon hon 12
			BH(mh, n);
			Press();
			break;
		case 6:
			// sap xep theo so luong ton hang
			sapxep(mh, n);
			Press();
			break;
		case 7:
			// xuat mat hang
			xuatMH(mh, n);
			Press();
			break;
		default:
			cout << "Ban da nhap sai lua chon!" << endl;
			Press();
			break;
		}
	}
	return 0;
}