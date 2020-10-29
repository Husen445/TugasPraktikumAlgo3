#include <iostream>
using namespace std;
main(){
	
	string Username;
	string Password;
	int Pilih, Nilai, Nilai1, Nilai2, Nilai3;
	
	cout<< "==========LOGIN AKUN==========\n";
	cout<< "Username	= "; cin>> Username;
	cout<< "Password	= "; cin>> Password;
	cout<< "==============================\n";
	if(Username == "HUSEN" && Password == "GANTENG"){
			cout<< "Login Berhasil!" <<endl;
	cout<< "=======INPUT MATA KULIAH======\n";
	cout<< "1. Algoritma dan Pemrograman" <<endl;
	cout<< "2. Kalkulus" <<endl;
	cout<< "Pilih = "; cin>> Pilih;
	switch(Pilih){
		case 1:
			cout<< "Nilai Harian = "; cin>> Nilai1;
			cout<< "Nilai UTS    = "; cin>> Nilai2;
			cout<< "Nilai UAS    = "; cin>> Nilai3;
			Nilai = (Nilai1 + Nilai2 + Nilai3)/3;
			if(Nilai < 80){
				cout<< "Anda Tidak Lulus Algoritma dan Pemrograman dengan Nilai = " << Nilai << endl;
			}else if(Nilai >= 80){
				cout<< "Anda Lulus Algoritma dan Pemrograman dengan Nilai = " << Nilai << endl;
			}
			break;
		case 2:
			cout<< "Nilai Harian = "; cin>> Nilai1;
			cout<< "Nilai UTS    = "; cin>> Nilai2;
			cout<< "Nilai UAS    = "; cin>> Nilai3;
			Nilai = (Nilai1 + Nilai2 + Nilai3)/3;
			if(Nilai < 80){
				cout<< "Anda Kalkulus dengan Nilai = " << Nilai << endl;
			}else if(Nilai >= 80){
				cout<< "Anda Lulus Kalkulus dengan Nilai = " << Nilai << endl;
			}
			break;
		default:
			cout<< "Input Anda Salah!" <<endl;
			}
			}else if(Username != "HUSEN" && Password == "GANTENG"){
			cout<< "Username Anda Salah!" <<endl;
		    }else if(Username == "HUSEN" && Password != "GANTENG"){
			cout<< "Password Anda Salah!" <<endl;
		    }else{
			cout<< "Username dan Password Anda Salah!" <<endl;
		    }
	
			
}
		



		
	
	
		

	
