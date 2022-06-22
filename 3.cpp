#include<iostream>
using namespace std;
void nhap(int *a,int n){
	for(int i=0;i<n;i++)
		cin>>*(a+i);

}
int  gtln(int *a,int n){
	int max=*a;
	for(int i=0;i<n;i++)
		if(*(a+i)>max){
			max=*(a+i);
		}
return max;
}
int main(){
	int n;
	int *a=new int[100];
	cin>>n;
	nhap(a,n);

	cout<<"so lon nhat la: "<<gtln(a,n);

	delete a;
}