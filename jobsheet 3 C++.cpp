#include<iostream>
#include<conio.h>
using namespace std; int i,x;
int matriks_A[2][2], matriks_B[2][2], matriks_C[2][2]; char ulang;
main()
{
cout<< "\nPenjumlahan 2 Matriks
\n\n"; do{
//Input data matriks A
cout<< "\nData matriks A \n"; for(i=1; i<3; i++)
{ for(x=1; x<3; x++)
{ cout<< "["<<i<<"]["<<x<<"] : ";
cin>> matriks_A[i][x];
}
}
cout<<
"\n. 	
  .\n";
//Input data matriks B
cout<< "\nData matriks B \n"; for(i=1; i<3; i++)
{
for(x=1; x<3; x++)
{
cout<< "["<<i<<"]["<<x<<"] : ";
cin>> matriks_B[i][x];
}}
cout<<
"\n. 	
  .\n";
//Output hasil penjumlahan Matriks A
+ Matriks B
cout<< "\nMatriks A + Matriks B : "<<endl;
for(i=1; i<3; i++)
{
for(x=1; x<3; x++)
{
matriks_C[i][x]=matriks_A[i][x]+matr iks_B[i][x]; cout<<"\t"<<matriks_C[i][x];
}
cout<<endl;
}
cout<<
"\n. 	
  .\n";
cout<< "\nHitung lagi ? [y/t] : ";cin>>ulang;
}while(ulang!='t'); cout<< "\n\nTerima Kasih
\n\n"<<endl; getch();
}
