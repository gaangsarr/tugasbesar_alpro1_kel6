#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

#define ppn 0.12

int main(){
	char nama[50];
	int pilih[100], jumlah[100], sub_total[100], harga[100], nomor_meja, pajak[100];
	string menu[100];
	int total_bayar, i=0;
	int bayar, saldo, kurang, kembalian;
	bool selesai=false;
	char pesan_ulang;
	
	do {
	system("CLS");
	cout << "============================Nusantara============================" << endl;
	cout << "==================Masakan Khas Daerah Indonesia==================" << endl;
	cout << "======Jl. Gatot Subroto, No. 24, Jakarta Barat, DKI Jakarta======" << endl;
	
	//DATA PELANGGAN
	cout << endl;
	
	cout << "Masukkan Nama Pelanggan\t\t: ";
	cin >> nama;
	
	cout << "Masukkan Nomor Meja Pelanggan\t: ";
	cin >> nomor_meja;
	
	//RISET PESANAN KETIKA MEMESAN ULANG
	total_bayar = 0;
    i = 0;
	selesai = false;
	
	//MENU
	cout << endl;
	
	cout << "-----------------------------------------------------------------" << endl;
	cout << "                   DAFTAR MENU - NUSANTARA                       " << endl;
	cout << "-----------------------------------------------------------------" << endl;
	cout << "|	[1] Mie Ayam			= Rp 13.000		|" << endl;
	cout << "|	[2] Bakso			= Rp 15.000		|" << endl;
	cout << "|	[3] Soto Lamongan		= Rp 12.000		|" << endl;
	cout << "|	[4] Pempek			= Rp 20.000		|" << endl;
	cout << "|	[5] Seblak			= Rp 15.000		|" << endl;
	cout << "|	[6] Ayam Geprek			= Rp 10.000		|" << endl;
	cout << "|	[7] Ayam Bakar			= Rp 13.000		|" << endl;
	cout << "|	[8] Ikan Bakar			= Rp 18.000		|" << endl;
	cout << "|	[9] Pindang			= Rp 25.000		|" << endl;
	cout << "|	[10] Rawon			= Rp 23.000		|" << endl;
	cout << "|	[11] Nasi Gudeng		= Rp 20.000		|" << endl;
	cout << "|	[12] Nasi Putih			= Rp 6.000		|" << endl;
	cout << "|	[13] Es Teh			= Rp 5.000		|" << endl;
	cout << "|	[14] Es Jeruk			= Rp 6.000		|" << endl;
	cout << "|	[15] Es Campur			= Rp 8.000		|" << endl;

	cout << "-----------------------------------------------------------------" << endl;
	cout << "          (Masukkan menu makanan berdasarkan nomor)              " << endl;
	cout << "         Note: Input 0 Apabila Pesanan Sudah LENGKAP             " << endl;
	cout << "-----------------------------------------------------------------" << endl;

	
	//MEMILIH MENU
	cout << endl;
	
	while (selesai==false){
		cout << "Pilih Menu: ";
		cin >> pilih[i];
		
		if (pilih[i]<=15 && !(pilih[i]<0)){		//15 karna ada 15 menu
			
			if (pilih[i]==0){
				selesai=true;
			} else {
				
				switch (pilih[i]){
					case 1:
						menu[i]="Mie Ayam";
						harga[i]=13000;
						break;
					
					case 2:
						menu[i]="Bakso	";
						harga[i]=15000;
						break;
						
					case 3:
						menu[i]="Soto Lamongan";
						harga[i]=12000;
						break;
						
					case 4:
						menu[i]="Pempek	";
						harga[i]=20000;
						break;
						
					case 5:
						menu[i]="Seblak	";
						harga[i]=15000;
						break;
						
					case 6:
						menu[i]="Ayam Geprek";
						harga[i]=10000;
						break;
						
					case 7:
						menu[i]="Ayam Bakar";
						harga[i]=13000;
						break;
						
					case 8:
						menu[i]="Ikan Bakar";
						harga[i]=18000;
						break;
						
					case 9:
						menu[i]="Pindang	";
						harga[i]=25000;
						break;
						
					case 10:
						menu[i]="Rawon	";
						harga[i]=23000;
						break;
						
					case 11:
						menu[i]="Nasi Gudeg";
						harga[i]=20000;
						break;
						
					case 12:
						menu[i]="Nasi Putih";
						harga[i]=6000;
						break;
						
					case 13:
						menu[i]="Es Teh	";
						harga[i]=5000;
						break;
						
					case 14:
						menu[i]="Es Jeruk";
						harga[i]=6000;
						break;
						
					case 15:
						menu[i]="Es Campur";
						harga[i]=8000;
						break;
						
					default:
						menu[i]=" ";
						harga[i]=0;
						break;
				}
				
				cout << "Jumlah Porsi " << menu[i] << ": ";
				cin >> jumlah[i];
				cout << endl;
				
				sub_total[i]=jumlah[i] * harga[i];
				pajak[i]=sub_total[i] * ppn;
				sub_total[i]=sub_total[i] + pajak[i];
				total_bayar += sub_total[i];
				i++;
				
			}
			
		} else {
			cout << "Menu Tidak Sesuai" << endl;
			cout << endl;
		}
	}
	
	cout << endl;
	
	cout << "---------------------------------------------------------------------------------------------" << endl;
	cout << "                                            INVOICE                                          " << endl;
	cout << "---------------------------------------------------------------------------------------------" << endl;
	cout << "Nama Pemesan	: " << nama << endl;
	cout << "Nomor Meja	: " << nomor_meja << endl; 
	cout << "---------------------------------------------------------------------------------------------" << endl;
	cout << "No\tNama\t\t\tHarga\t\tJumlah\t\tPPN(12%)\tSub Total" << endl;
	cout << "---------------------------------------------------------------------------------------------" << endl;
	
	for (int a=0;a<i;a++){
		cout << a+1 << "\t" << menu[a] << "\t\t" << harga[a] << "\t\t" << jumlah[a] << "\t\t" << pajak[a] << "\t\t" << sub_total[a] << endl;
	}
	
	cout << "---------------------------------------------------------------------------------------------" << endl;

	cout << endl;
	
	if (total_bayar>=100000){
		cout << "Harga Sebelum Diskon	: Rp " << total_bayar << endl;
		
		int diskon;
		diskon = total_bayar * 10/100;
		total_bayar = total_bayar * 90/100;
		cout << "Diskon			: Rp " << diskon << endl;
		cout << "Total Bayar		: Rp " << total_bayar << endl;
	} else {
		cout << "Total Bayar = Rp " << total_bayar << endl;
	}
	
	
	cout << endl;
	
	cout << "-----------------------------------------" << endl;
		cout << endl;
		cout << "Silahkan Bayar Disini	: Rp ";
		cin >> bayar;
		cout << endl;
		
		while (saldo = bayar < total_bayar){
			cout << "Saldo Anda Kurang, Silahkan Bayar Lagi	: Rp ";
			cin >> kurang;
			bayar += kurang;
			cout << endl;
		};
		
		kembalian = bayar - total_bayar;
		cout << "Uang yang Anda Bayar	: Rp " << bayar << endl;
		cout << "Uang Kembalian		: Rp " << kembalian << endl;
		cout << endl;
		cout << "-----------------------------------------" << endl;
		
		cout << "\nApakah ingin memesan lagi (Y/N)? ";
		cin >> pesan_ulang;
		cout << endl;
		
	} while ( pesan_ulang == 'Y' || pesan_ulang == 'y');
	
	cout << "Terima Kasih Atas Pesanannya! Selamat Menikmati!" << endl;
	
}
