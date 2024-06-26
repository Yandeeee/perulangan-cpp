#include <iostream>
using namespace std;

int main(){
	string nama;
	char ulang;
	do{
		cout<<"Masukkan nama mu : ";
		cin>>nama;
		cout<<"Apakah anda ingin mengulang lagi?? ( y / n ) : ";
		cin>>ulang;
	}while(ulang == 'y'|| ulang == 'Y');
	cout<<"Terimakasih sudah berkunjung dan sampai jumpa !!";
		
	return 0;
}
