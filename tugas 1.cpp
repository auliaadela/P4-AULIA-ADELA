#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang :
	cout<<"                                            SELAMAT DATANG\n";
	cout<<"                                                  DI\n";
	cout<<"                                        Program KUIS Seputar virus Corana\n";
	cout<<"                             =============================================\n";
	cout<<"                                            SilahkanLogin!\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t\t Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<"\t\t\t\t Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (user == "auliaadela" && pass == "F1B019030")
			{
				cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Ussername dan password anda salah silahkan cobakembali \t\t\n";
				cout<<"\t\t\t Cobalagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"------------------------------------------------------------------\n";
	system("cls");
	{
ulangjwb :
	cout<<"PILIH SALAH SATU JAWABAN  BENAR, ANTARA A, B, C, ATAU D!\n";
	cout<<"==================================================================\n";
	cout<<"1. Dari Negara mana asal virus corana (covid-19) yang menyerang manusia??\n";
	string pilgan1[50]={"a. china","b. Amerika","c. Indonesi ","d. Italia"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
    cout<<"=================================================================\n";        
cout<<"2. Apakah nama lain dari virus corana??\n";
    string pilgan2[50]={"a. Covid-20","b. Covid-18","c. Covid 17","d. Covid-19"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
    cout<<"===================================================================\n";        
	cout<<"3. Dibawah ini adalah media penyebaran virus corona , kecuali??\n";
	string pilgan3[50]={"a. bersalaman/sentuhan tangan","b. udara","c. percikan batuk dan bersin","d. benda benda padat"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
	cout<<"====================================================================\n";				
	cout<<"4. Negara manakah yang memiliki jumlah kasus Covid-19 terbanyak ??\n";
	string pilgan4[50]={"a. China","b. Indonesia","c. Spanyol","d. Amerika"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
    cout<<"========================================================================\n";       
cout<<"5.Bagaimana cara mencegah Covid-19 kecuali??\n";
    string pilgan5[50]={"a. tidak menggunakan masker ketika berada dikeramaian","b. Rajin mencuci tangan","c. Menjaga imunitas","d. stay at homme"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"6. Apakah COVID-19 dapat melekat pada benda mati??\n";
	string pilgan6[50]={"a. Bisa jadi","b. Iya","c. Tidak","d. jawaban a ,b benar"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}     
	cout<<"==========================================================================\n";
	cout<<"7. Virus Corona (COVID-19) dibawa oleh hewan??\n";
	string pilgan7[50]={"a. Kucing","b. Tikus","c. kelelawar","d. kala jengking"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"8. Apakah ada vaksin untuk Covid-19 ??\n";
	string pilgan8[50]={"a. Iya","b. belum ada","c. Tidak ","d. bisa jadi"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"9. Berapa lama masa inkubasi covid-19??\n";
	string pilgan9[50]={"a. 14 hari","b. 7 hari","c. 3 hari","d. 5 hari"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"10. Apakah COVID sama dengan SARS??\n";
	string pilgan10[50]={"a. iya","b. hampir sama","c. bisa jadi","d. tidak"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												

	}		nilai :
					cout<<"=====================================================\n";
					cout<<"PerolehanNilai :"<<endl;
		nilai = benar*10;
		cout<<"    JumlahBenar : "<<benar<<" soal "<<endl;
		cout<<"    JumlahSalah : "<<salah<<" soal "<<endl;
		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai :
			cout<<"==========================="<<endl;
			cout<<"Program Selesai, Terimakasi\n";
			cout<<"==========================="<<endl;
	
}
