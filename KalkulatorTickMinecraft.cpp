#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int jam,menit,detik,waktu,tick,total,pilih;
	int second,minute,hour;
	char exit;
	
	hitung_lagi:
	cout<<"+============================================+" << endl;
	cout<<"MINECRAFT TICK CALCULATOR" << endl;
	cout<<"Creator : AhZanMC" << endl;
    cout<<"Version : 1.0" << endl;
    cout<<"+============================================+" << endl;
    cout<<"[1] Hitung Tick Minecraft ke Waktu Dunia Nyata" << endl;
    cout<<"[2] Hitung Dunia Nyata ke Tick Minecraft" << endl;
    cout << "Pilih Mana : ";
    cin >> pilih;
    
    cout << endl;
	
	switch(pilih){
		case 1:
			cout << endl;
			cout << "Masukkan waktu dalam jam   : ";
			cin >> jam;
			cout << "Masukkan waktu dalam menit : ";
			cin >> menit;
			cout << "Masukkan waktu dalam detik : ";
			cin >> detik;
			
			// Konversi jam, menit dan detik ke tick
			total = jam * 3600 + menit * 60 + detik;
			// 20 tick = 1 detik
			tick = total * 20;
			cout << endl;
			// Hasil
			cout << "Tick : " << tick << endl;
			break;
		case 2:
			cout << "Masukkan Tick Minecraft    : ";
			cin >> tick;
			
			// Konversi tick ke detik
			second = tick / 20;
			// Konversi detik ke menit dan jam
    		minute = detik / 60;
    		hour = menit / 60;
    		cout << endl;
    		// Hasil
			cout << "Hasil : " << hour << " Jam " << minute << " Menit " << second << " Detik " << endl;
			break;
		default:
			cout << "\a[ERROR] Kode yang anda masukkan tidak valid";
			break;	
	}
	
	cout << endl;
	cout << "Apakah Anda Ingin Menghitung Lagi?? (y/t)" << endl;
	cout << "Pilih : ";cin >> exit;
	
	switch(exit){
		case 'y':
			system("CLS");
			goto hitung_lagi;
			break;
		case 't':
			cout << endl;
			system("CLS");
			cout << "Penghitungan Selesai,terimakasih yang sudah menggunakan program ini :)" << endl;
			cout << "Ingin keluar,pencet apa aja untuk keluar!!!" << endl;
			break;
		default :
			cout << "\a[ERROR] Kode yang anda masukkan tidak valid";
			break;
	}
	getch();
	return 0;
}
