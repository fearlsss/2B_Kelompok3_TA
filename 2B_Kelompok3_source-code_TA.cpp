#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
using namespace std;

char Nama()
{
	cout<<"\t\t Kelompok 3:\t\t\t|\n";
	cout<<"\t- Ichsan Sulistio 065121040\t\t|\n";
	cout<<"\t- Firman Fatria R 065121051\t\t|\n";
	cout<<"\t- Distira Sakha Saputra 065121058\t|\n";
	cout<<"\t- Muhammad Akmal Nurdiansyah 065121040\t|\n";
}
main()
{
	cout<< "\t=========================================\n";
	Nama();
	cout<< "\t=========================================\n";
	cout<<endl;

	int pilih,nomor;	
	char lagi;							


	menu:
	cout<< "=========================================================\n";
	cout<< "Materi Praktikum Algoritma dan Struktur Data adalah seperti berikut\n";
	cout<< "=========================================================\n";
	cout<< "|\t\t	 1. ARRAY	  	\t|\n";
	cout<< "|\t\t 	 2. STRUCT	  	\t|\n";
	cout<< "|\t\t 	 3. FILE	  	\t|\n";

	cout<< "=========================================================\n\n";
	cout<< "Masukkan Materi Yang Diinginkan [1,2, dan 3] ";
	cin>>nomor;
	cout<< "\n";

switch(nomor)
	{
	case 1:
			cout<<"------- Array ------- \n"<<endl;
			cout<<"Apa yang ingin anda ketahui Mengenai Array ?\n";
			cout<<"1. Pengertian Array"<<endl;
			cout<<"2. Jenis-Jenis Array"<<endl;
			cout<<"3. Contoh Program Array \n"<<endl;				
			cout<<"Silahkan masukkan Pilihan Anda disini	: ";
			cin>>pilih;
			cout<<endl;
			
		switch(pilih)
			{
			case 1:
				cout<<"\t::::::::Pengertian Array::::::::\n"<<endl;
				cout<<"|\tArray adalah tipe data yang terstruktur dari beberapa\t|\n|\tvariable yang mempunyai tipe data yang sama.\t\t|\n"<<endl;
				cout<<endl;
				cout<< "Apakah Anda ingin lanjut [y/t]? ";cin>>lagi;
				if (lagi == 'y')
					goto menu;
						else goto keluar;
							break;	
						
			case 2:
					cout<<"|||\t Jenis-Jenis Array \t ||| \n"<<endl;
					cout<<"1. Array 1 dimensi (1D) \n\tDeklarasi	: \n\ttipe_data nama_variable [ukuran] //merupakan pendeklarasian \n\tarray yang memiliki ukuran maksimal sebanyak n, \n\tdan normalnya lebih dari satu \n"<<endl;
					cout<<"2. Array 2 dimensi (2D) \n\tDeklarasi	: \n\ttipe_data nama_variable [index-1][index-2]\n\t//dimana [index-1] adalah baris \n\tdan [index-2] adalah kolom \n"<<endl;
					cout<<"3. Array 3 dimensi (3D) \n\tDeklarasi	: \n\ttipe_data nama_variable [index-1][index-2]\n\t[index-3] //dimana [index-1] adalah baris dan \n\t[index-2] adalah isi baris, dan dimana [index-3] adalah kolom "<<endl;
					cout<<endl;
				masih:
					cout<< "Masih lanjut [y/t]? ";cin>>lagi;
					if (lagi == 'y')
					goto menu;
						else goto keluar;
							break;	
			
			case 3:
				{
					int data [3][2];
					int a,b;
					
					cout<< "=========================================================\n";
					cout<< "|\t\t Contoh Program ARRAY \t\t\t|"<<endl;
					cout<< "=========================================================\n";

							for (a=0;a<3;a++)
							{
								for (b=0;b<2;b++)
								{
									cout<<"Masukkan Data = ";
									cin>>data[a][b];
									}
								}
								cout<<".....Data yang sudah di Input....."<<endl;
								cout<<endl;
	
								for (a=0;a<3;a++)
								{
									for (b=0;b<2;b++)
									{
										cout<<data[a][b]<<" ";
									}
										cout<<" "<<endl;
								}
					cout<<endl;	
					cout<< "Masih lanjut [y/t]? ";cin>>lagi;
					if (lagi == 'y')
					goto menu;
						else goto keluar;
							break;	
				
				}
			}
	case 2:
			cout<<"------- Struct ------- \n"<<endl;
			cout<<"Apa yang ingin anda ketahui Mengenai Struct ?\n";
			cout<<"1. Pengertian Struct"<<endl;
			cout<<"2. Jenis-Jenis Struct"<<endl;
			cout<<"3. Contoh Program Struct \n"<<endl;
			cout<<"Silahkan masukkan Pilihan Anda disini	: ";
			cin>>pilih;
			cout<<endl;
			
		switch(pilih)
			{
			case 1:
				cout<<"\t::::::::Pengertian Struct::::::::\n"<<endl;
				cout<<"|\tStructure (struct) tipe data yang terstruktur dari beberapa\t|\n|\tvariable yang mempunyai tipe data yang berbeda.\t\t\t|\n"<<endl;
				cout<<endl;
				cout<< "Apakah Anda ingin lanjut [y/t]? ";cin>>lagi;
		
					if (lagi == 'y')
					goto menu;
						else goto keluar;
							break;	
							
			case 2:
					cout<<"|||\t Jenis-Jenis Struct \t ||| \n"<<endl;
					cout<<"1. NESTED STRUCT\n";
					cout<<"2. STRUCT OF ARRAY\n";
					cout<<"3. ARRAY OF STRUCT\n";
					
					cout<<endl;
					cout<< "Apakah Anda Ingin lanjut [y/t]? ";cin>>lagi;
					if (lagi == 'y')
					goto menu;
						else goto keluar;
							break;	
			
			
			case 3:
				{
				
								struct data_mahasiswa
				{
        			int nim;
        			char nama[100];
        			char fakultas[100];
				};
				data_mahasiswa mahasiswa1, mahasiswa2;
				{
				
				cout<< "=========================================================\n";
				cout<< "|\tContoh Program Menggunaan Operasi STRUCT\t|\n";
				cout<< "=========================================================\n";
	
				     cout<<"\n\n======================\n";
    				 cout<<"data mahasiswa pertama\n";
    				 cout<<"======================\n";
    				 cout<<"NIM      :";cin>>mahasiswa1.nim;
    				 cout<<"Nama     :";cin>>mahasiswa1.nama;
    				 cout<<"fakultas :";cin>>mahasiswa1.fakultas;
    				 cout<<"\n\n";
    				 cout<<"data mahasiswa kedua\n";
   					 cout<<"______________________\n";
    				 cout<<"NIM      :";cin>>mahasiswa2.nim;
    				 cout<<"Nama     :";cin>>mahasiswa2.nama;
				     cout<<"fakultas :";cin>>mahasiswa2.fakultas;
				     cout<<"\n\n";     
 
				     cout<<"Keluaran data mahasiswa pertama\n";
				     cout<<"______________________\n";
				     cout<<"NIM      :"<<mahasiswa1.nim<<endl;
				     cout<<"Nama     :"<<mahasiswa1.nama<<endl;
				     cout<<"fakultas :"<<mahasiswa1.fakultas<<endl;
				     cout<<"\n\n";
				     cout<<"Keluaran data mahasiswa kedua\n";
				     cout<<"______________________\n";
				     cout<<"NIM      :"<<mahasiswa2.nim<<endl;
				     cout<<"Nama     :"<<mahasiswa2.nama<<endl;
				     cout<<"fakultas :"<<mahasiswa2.fakultas<<endl;
				     cout<<"\n\n";
					
					cout<<endl;
					cout<< "Apakah Anda Ingin lanjut [y/t]? ";cin>>lagi;
					if (lagi == 'y')
					goto menu;
						else goto keluar;
							break;	
				
				}
			}
		}	
	case 3:
			cout<<"------- FILE ------- \n"<<endl;
			cout<<"Apa yang ingin anda ketahui Mengenai File ?\n";
			cout<<"1. Pengertian File"<<endl;
			cout<<"2. Jenis-jenis header File"<<endl;
			cout<<"3. Contoh Program File \n"<<endl;
			cout<<"Silahkan masukkan Pilihan Anda disini	: ";
			cin>>pilih;
			cout<<endl;
			
		switch(pilih)
			{
			case 1:
				cout<<"\t::::::::Pengertian FILE::::::::\n"<<endl;
				cout<<"|\tFile merupakan penyimpanan data eksternal yang bersifat permanen|\n\t\t"<<endl;
				cout<<endl;
					cout<< "Apakah Anda ingin lanjut [y/t]? ";cin>>lagi;
					
					if (lagi == 'y')
					goto menu;
						else goto keluar;
							break;	
						
			case 2:
					cout<<"|||\t Jenis-Jenis header File \t ||| \n"<<endl;
					cout<<"1. ofstream untuk menulis file"<<endl;
					cout<<"2. ifstream untuk membaca file"<<endl;
					cout<<"3. fstream untuk keduanya (menulis dan membaca)"<<endl;
				
					cout<<endl;
					cout<< "Masih lanjut [y/t]? ";cin>>lagi;
					if (lagi == 'y')
					goto menu;
						else goto keluar;
							break;	
			
			case 3:
			{
				char nama[30], alamat[30], namafile[20];
				int umur;
				
				cout<< "=========================================================\n";
				cout<< "|\t Contoh Program Menggunaan Operasi File \t|\n";
				cout<< "=========================================================\n";
				
				cout<<"Masukkan Nama	: ";
				cin>>nama;
				cout<<"Masukkan Alamat	: ";
				cin>>alamat;
				cout<<"Masukkan Umur	: ";
				cin>>umur;
				cout<<"\n Masukkan nama file yang dibuat	: ";
				cin>>namafile;
					ofstream biodata(namafile,ios::out);
						biodata<<nama<<"\n"<<alamat<<"\n"<<umur;
				cout<<"\n\n";

					cout<< "Apakah Anda Ingin lanjut [y/t]? ";cin>>lagi;
					if (lagi == 'y')
					goto menu;
						else goto keluar;
							break;	
			
						}
			}
	case 6:
			keluar:
				cout<< "=========================================================\n";
				cout<< "|\t Terimakasih Semoga Sedikit Materi Tadi \t|\n|\t Bisa Menambah Pengetahuan Anda Tentang \t|\n|\t Praktikum Algoritma dan Struktur Data  \t\t\t|\n";
				cout<< "=========================================================\n";
					break;
			default:
				cout<< "Maaf input yang anda masukkan salah, silahkan coba lagi \n\n";
					goto menu;
			break;
						
					}	
		getch();		
return 0;
				}

