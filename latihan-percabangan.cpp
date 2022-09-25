#include <iostream>
#include <conio.h>
using namespace std;

int main() {
int tombol, makanan, minuman, snack, dessert; 
char pilihan;

cout<<"\n ===================================="<<endl;
cout<< " = Selamat Datang di Restaurant CPP ="<<endl;
cout<<" ===================================="<<endl;

do {

cout<<"\n Pilihan Menu :"<<endl;
cout<<" 1. Makanan"<<endl;
cout<<" 2. Minuman"<<endl;
cout<<" 3. Snack"<<endl;
cout<<" 4. Desserts"<<endl;

cout<<"\n Tekan menu 1,2,3, atau 4 pada keyboard : ";
cin>>tombol;


switch(tombol)
{ 
case 1: cout<<"\n----- Anda didalam menu Makanan -----"<<endl;
		cout<<" Silahkan pilih menu Makanan"<<endl;
		cout<<" 1. Nasi Goreng"<<endl;
		cout<<" 2. Mie Ayam"<<endl;
		cout<<" 3. Bakso"<<endl;
		cout<<" 4. Ayam Geprek"<<endl;
		cout<<" 5. Lalapan"<<endl;
		cout<<"\n Tekan menu 1,2,3,4 atau 5 pada keyboard : ";
		cin>>makanan;
		
		if(makanan==1){
			cout<<"\n Anda akan membeli Nasi Goreng Seharga Rp.10.000,-";
		} else if (makanan==2) {
			cout<<"\n Anda akan membeli Mie ayam Seharga Rp.15.000,-";
		} else if (makanan==3) {
			cout<<"\n Anda akan membeli Bakso Seharga Rp.15.000,-";
		} else if (makanan==4) {
			cout<<"\n Anda akan membeli Ayam Geprek Seharga Rp.10.000,-";
		} else if (makanan==5) {
			cout<<"\n Anda akan membeli Lalapan Seharga Rp.15.000,-";
		} else {
			cout<<"\n Maaf, Makanan Tidak Tersedia";
		}
break; 

case 2: cout<<"\n----- Anda didalam menu Minuman -----"<<endl;
		cout<<" Silahkan pilih menu Minuman"<<endl;
		cout<<" 1. Es Teh"<<endl;
		cout<<" 2. Es Jeruk"<<endl;
		cout<<" 3. Es Campur"<<endl;
		cout<<" 4. Jus Buah"<<endl;
		cout<<" 5. Air Mineral"<<endl;
		cout<<"\n Tekan menu 1,2,3,4 atau 5 pada keyboard : ";
		cin>>minuman;
		
		if(minuman==1){
			cout<<"\n Anda akan membeli Es Teh Seharga Rp.2.000,-";
		} else if (minuman==2) {
			cout<<"\n Anda akan membeli Es Jeruk Seharga Rp.3.000,-";
		} else if (minuman==3) {
			cout<<"\n Anda akan membeli Es Campur Seharga Rp.5.000,-";
		} else if (minuman==4) {
			cout<<"\n Anda akan membeli Jus Buah Seharga Rp.3.000,-";
		} else if (minuman==5) {
			cout<<"\n Anda akan membeli Air Mineral Seharga Rp.1.000,-";
		} else {
			cout<<"\n Maaf, Minuman Tidak Tersedia";
		}
break; 

case 3: cout<<"\n----- Anda didalam menu Snack -----"<<endl;
		cout<<" Silahkan pilih menu Snack"<<endl;
		cout<<" 1. Kentang Goreng"<<endl;
		cout<<" 2. Kerupuk"<<endl;
		cout<<" 3. Gorengan"<<endl;
		cout<<" 4. Telur Asin"<<endl;
		cout<<"\n Tekan menu 1,2,3, atau 4 pada keyboard ";
		cin>>snack;
		
		if(snack==1){
			cout<<"\n Anda akan membeli Kentang Goreng Seharga Rp.10.000,-";
		} else if (snack==2) {
			cout<<"\n Anda akan membeli Kerupuk Seharga Rp.5.000,-";
		} else if (snack==3) {
			cout<<"\n Anda akan membeli Gorengan Seharga Rp.1.000,-";
		} else if (snack==4) {
			cout<<"\n Anda akan membeli Telur Asin Seharga Rp.5.000,-";
		} else {
			cout<<"\n Maaf, Snack Tidak Tersedia";
		}
break; 

case 4: cout<<"\n----- Anda didalam menu Dessert -----"<<endl;
		cout<<" Silahkan pilih menu Dessert"<<endl;
		cout<<" 1. Pudding"<<endl;
		cout<<" 2. Cup Cake"<<endl;
		cout<<" 3. Salad Buah"<<endl;
		cout<<" 4. Tart"<<endl;
		cout<<"\n Tekan menu 1,2,3, atau 4 pada keyboard ";
		cin>>dessert;
		
		if(dessert==1){
			cout<<"\n Anda akan membeli Pudding Seharga Rp.5.000,-";
		} else if (dessert==2) {
			cout<<"\n Anda akan membeli Cup Cake Seharga Rp.5.000,-";
		} else if (dessert==3) {
			cout<<"\n Anda akan membeli Salad Buah Seharga Rp.8.000,-";
		} else if (dessert==4) {
			cout<<"\n Anda akan membeli Tart Seharga Rp.5.000,-";
		} else {
			cout<<"\n Maaf, Dessert Tidak Tersedia";
		}
break; 

default : 
cout<<"\n Pilihan menu yang anda pilih tidak tersedia"; }

cout<<"\n ===================================="<<endl;
cout<<"\n Apakah Anda ingin Order lagi? (y/n) : ";
cin>>pilihan;
} while (pilihan/='y');
  cout<<"Terimah Kasih Atas Kunjungan Anda";


getch();

}


