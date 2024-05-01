// Chương trình quản lý mặt hàng
#include<iostream>
using namespace std;
int dem = 0;
struct mathang
{
	int mahang;
	string ten;
	int soluong;
	int dongia;
	int soluong_ton;
	int thoigian;
};
typedef mathang MH;
void nhapThongtin(MH mh[], int n)
{
	cout << "Nhap thong tin mat hang: " << n + 1;
	cout << "\nNhap ten mat hang: ";
	cin >> mh[n].ten;
	cout << "Nhap ma mat hang: ";
	cin >> mh[n].mahang;
	cout << "Nhap don gia mat hang :";
	cin >> mh[n].dongia;
	cout << "Nhap so luong mat hang: ";
	cin >> mh[n].soluong;
	cout << "Nhap so luong hang ton:";
	cin >> mh[n].soluong_ton;
	cout << "Nhap thoi gian bao hanh:";
	cin >> mh[n].thoigian;
}
void xuatMH(MH mh[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "ten: " << mh[i].ten << endl;
		cout << "ma hang: " << mh[i].mahang << endl;
		cout << "don gia: " << mh[i].dongia << endl;
		cout << "so luong: " << mh[i].soluong << endl;
		cout << "so luong ton hang: " << mh[i].soluong_ton << endl;
		cout << "thoi gian bao hanh: " << mh[i].thoigian << endl;
	}
}
int Max(MH mh[], int n)
{
	int max = mh[0].soluong_ton;
	for (int i = 1; i < n; i++)
	{
		if (mh[i].soluong_ton > max)
		{
			max = mh[i].soluong_ton;
		}
		return max;
	}
}
// ham tim mat hang co luong ton nhieu nhat
void inMAX(MH mh[], int n)
{
	int dem = 0;
	cout << "Mat hang co so luong ton lon nhat: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (mh[i].soluong_ton == Max(mh, n))
		{
			cout << mh[i].ten;
		}
	}
}
int Min(MH mh[], int n)
{
	int min = mh[0].soluong_ton;
	for (int i = 1; i < n; i++)
	{
		if (mh[i].soluong_ton < min)
		{
			min = mh[i].soluong_ton;
		}
		return min;
	}
}
void inMin(MH mh[], int n)
{
	int dem = 0;
	cout << "Mat hang co so luong ton nho nhat: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (mh[i].soluong_ton == Min(mh, n))
		{
			cout << mh[i].ten;
		}
	}
}
int giatienMax(MH mh[], int n)
{
	int gmax = mh[0].dongia;
	for (int i = 1; i < n; i++)
	{
		if (mh[i].dongia > gmax)
		{
			gmax = mh[i].dongia;
		}
		return gmax;
	}
}
void gMax(MH mh[], int n)
{
	int dem = 0;
	cout << "Mat hang co gia tien lon nhat:" << endl;
	for (int i = 0; i < n; i++)
	{
		if (mh[i].dongia == giatienMax(mh, n))
		{
			cout << mh[i].ten;
		}
	}
}
void BH(MH mh[], int n)
{
	int dem = 0;
	cout << "\nNhung mat hang co thoi gian bao hanh lon hon 12: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (mh[i].thoigian > 12)
		{
			cout << mh[i].ten;
		}
	}
}
void sapxep(MH mh[], int n)
{
	// MH tmp;
	cout << "\nSap xep mat hang tang dan theo so luong ton" << endl;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (mh[i].soluong_ton > mh[j].soluong_ton)
			{
				// tmp = mh[i];
				// mh[i]= mh[j];
				// mh[j] = tmp;
				swap(mh[i], mh[j]);
			}
		}
	}
	xuatMH(mh, n);
}