#include <iostream>
using namespace std;

class Certificate
{
private:
    int certificateId;
    string certificateName;
    string CertificateRank;
    string certificateDate;

public:
    Certificate() {}
    Certificate(int certificateId, string certificateName, string certificateRank, string certificateDate)
    {
        this->certificateId = certificateId;
        this->certificateName = certificateName;
        this->CertificateRank = certificateRank;
        this->certificateDate = certificateDate;
    }
    void intputCertificate();
    void display_Certificate();
};

void Certificate::intputCertificate()
{
    cout << "-----Nhap thong tin bang------" << endl;
    cout << "Nhap id:";
    cin >> certificateId;
    cin.ignore();
    cout << "Nhap ten: ";
    getline(cin, certificateName);
    cout << "Nhap thu hang: ";
    getline(cin, CertificateRank);
    cout << "Nhap thoi gian chung nhan: ";
    getline(cin, certificateDate);
}
void Certificate::display_Certificate()
{
    cout << "\t------Thong tin giay chung nhan-----" << endl;
    cout << "\t|ID|: " << certificateId << "\t"
         << "\t|Name|: " << certificateName << endl;
    cout << "\t|Rank|: " << CertificateRank << "\t"
         << "\t|Ngay chung nhan|: " << certificateDate << endl;
}