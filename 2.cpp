#include<iostream>
#include<cstring>
using namespace std;
struct sach
{
	int masach;
	char tensach[30];
	char tacgia[30];
	char nhaxuatban[10];
	int namxuatban;
	int giabia;
	int soluong;
	char theloai[10];
	
};
void thongtinsach(sach &s){
	cout<<"\nnhap ma sach: ";
	cin>>s.masach;
	cout<<"\nnhap ten sach: ";
	fflush(stdin);gets(s.tensach);
	cout<<"\nnhap ten tac gia: ";
	fflush(stdin);gets(s.tacgia);
	cout<<"\nnhap nha xuat ban: ";
	fflush(stdin);gets(s.nhaxuatban);
	cout<<"\nnhap nam xuat ban: ";
	cin>>s.namxuatban;
	cout<<"\nnhap gia bia: ";
	cin>>s.giabia;
	cout<<"\nnhap so luong: ";
	cin>>s.soluong;
	cout<<"\nnhap the loai sach: ";
	fflush(stdin);gets(s.theloai);
}
void nhap(sach *s,int n){
	for(int i=0;i<n;i++){
		thongtinsach(*(s+i));
	}
}
void xuatthongtinsach(sach &s){
	cout<<"\n== thong tin sach =="<<endl;
	cout<<"ma sach: "<<s.masach<<endl;
	cout<<"ten sach: "<<s.tensach<<endl;
	cout<<"ten tac gia cua sach: "<<s.tacgia<<endl;
	cout<<"ten nha xuat ban sach: "<<s.nhaxuatban<<endl;
	cout<<"nam xuat ban sach: "<<s.namxuatban<<endl;
	cout<<"gia bia sach: "<<s.giabia<<endl;
	cout<<"so luong sach: "<<s.soluong<<endl;
	cout<<"the loai sach: "<<s.theloai<<endl;
}
void xuat(sach *s, int n){
	for(int i=0;i<n;i++){

		xuatthongtinsach(*(s+i));
	}
}
void tienphaitra(sach &s){
	
	cout<<"tien phai tra la = "<<s.giabia * s.soluong<<" K"<<endl;
}
void thongke(sach *s,int n){
	for(int i=0;i<n;i++){
		tienphaitra(*(s+i));
	}

}
int main(){
	int n;
	sach a;
	sach *s;
	s= new sach[100];
	char the_loai[30];
	cout<<"nhap so quyen sach: ";
	cin>>n;
	nhap(s,n);
	cout<<"\ncac sach co trong thu vien"<<endl;
	xuat(s,n);
	cout<<endl;
	cout<<"=== thong ke tien phai tra theo tung ma ==="<<endl;
	thongke(s,n);
}