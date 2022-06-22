#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
void nhapchuoi(char s[]){
	cout<<"nhap mot chuoi bat ky: ";
	fflush(stdin);gets(s);
}
void xuatchuoi(char s[]){
	cout<<"chuoi vua nhap la: "<<s;
}

int demtu(char s[]){
	int dem=0;
	while(s[dem]!='\0')
		dem++;

	return dem;
}
void xuattu(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(i==0||(i>0&&s[i-1]==32)){
			if(s[i]>=97&&s[i]<=122)
				s[i]=s[i]-32;
		}else{
			if(s[i]>=65&&s[i]<=90)
				s[i]=s[i]+32;
		}
	}
}

int main(){
	char s[100];
	nhapchuoi(s);
	xuatchuoi(s);
	
	cout<<"\nso tu trong chuoi la: "<<demtu(s)<<endl;
	xuattu(s);
	cout<<"sau khi chuyen doi chu cai "<<endl;
	xuatchuoi(s);

	
}