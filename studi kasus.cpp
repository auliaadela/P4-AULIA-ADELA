#include<iostream>
#include<stdlib.h>
using namespace std;
int hero(int a,int x);
int armor(int a,int x);
int sword(int a,int x);
int skin(int a,int x);
int main(){
	string username, password; 
	cout << "------------------MOBILE LEGEND------------------" << endl;
	cout << "--------------------------LOGIN--------------------------" << endl;
	cout << "Username \t: ";
	cin >> username;
	cout << "Password \t: ";
	cin >> password;

	//buat char
	int tindakan, P = 1;
	int player1[3] = {100,10,10};
	int player2[3] = {100,10,10};
	menu:
	system ("CLS");
	cout << "------------------MOBILE LEGEND------------------" << endl;
	cout << "--------------------CHARACTER CREATION-------------------" << endl;
	cout << "welcome " << username<<endl;
	cout << "Player 1 : \t\t\t|" << "Player 2 : " <<endl; 
	cout << "\t health\t : " << player1[0] << "\t\t|\t healt\t :"<< player2[0]<< endl;
	cout << "\t str\t : " << player1[1] << "\t\t|\t str\t :"<< player2[1]<< endl;
	cout << "\t vit\t : " << player1[2] << "\t\t|\t vit\t :"<< player2[2]<< endl;
	
	cout << "*setiap gear, hero dan skin memiliki efek pada status" <<endl;
	if  (P == 1){
		cout << "Untuk player 1 : "<< endl;
	}else{
		cout << "SEKARANG Untuk player 2 : "<< endl;
	}
	cout << "1. hero"<< endl;
	cout << "2. senjata"<< endl;
	cout << "3. defense"<<endl;
	cout << "4. skin"<< endl;
	cout << "5. selesai"<< endl;
	cout << "pilih tindakan : ";
	cin >> tindakan;
	if (tindakan == 1){
		int x;
		cout << "--------------------------" << endl;
		cout << "1. Freya"<<endl;
		cout << "2. Irithel"<<endl;
		cout << "3. Clint"<<endl;
		cout << "Pilih hero : ";
		cin >> x;
		if (P == 1){
			for (int i=0; i<=2; i++){
				player1[i]=player1[i]+hero(i,x);
			}
			goto menu;			
		}else {
			for (int i=0; i<=2; i++){
				player2[i]=player2[i]+hero(i,x);
			}
			goto menu;
		}
	}else if (tindakan == 2){
		int x;
		cout << "--------------------------" << endl;
		cout << "1. Tang"<<endl;
		cout << "2. Piatol Air"<<endl;
		cout << "3. Jam Weaker"<<endl;
		cout << "Pilih Senjata : ";
		cin >> x;
		if (P == 1){
			for (int i=0; i<=2; i++){
				player1[i]=player1[i]+sword(i,x);
			}
			goto menu;			
		}else {
			for (int i=0; i<=2; i++){
				player2[i]=player2[i]+sword(i,x);
			}
			goto menu;
		}
	}else if (tindakan == 3){
		int x;
		cout << "--------------------------" << endl;
		cout << "1. Orancle"<<endl;
		cout << "2. Demons"<<endl;
		cout << "3. Brute Force Breastplate"<<endl;
		cout << "Pilih Defence : ";
		cin >> x;
		if (P == 1){
			for (int i=0; i<=2; i++){
				player1[i]=player1[i]+armor(i,x);
			}
			goto menu;			
		}else {
			for (int i=0; i<=2; i++){
				player2[i]=player2[i]+armor(i,x);
			}
			goto menu;
		}
	}else if (tindakan == 4){
		int x;
		cout << "--------------------------" << endl;
		cout << "1. SKIN EPIC"<<endl;
		cout << "2. SKIN STARLIGHT"<<endl;
		cout << "3. BELERICK"<<endl;
		cout << "Pilih SKIN : ";
		cin >> x;
		if (P == 1){
			for (int i=0; i<=2; i++){
				player1[i]=player1[i]+skin(i,x);
			}
			goto menu;			
		}else {
			for (int i=0; i<=2; i++){
				player2[i]=player2[i]+skin(i,x);
			}
			goto menu;
		}
	}else if (tindakan == 5){
		if (P == 1){
			P = 2;
			goto menu;
		}else{
			goto bertarung;
		}
	}else{
		cout << "tidak termasuk pilihan"<<endl;
		cin;
		goto menu;
	}
	bertarung:
	int turn = 1, act;
	int PP1=3, PP2=3;
	turn:
	while (player1[0]>0 && player2[0]>0){
		system ("CLS");
		cout << "------------------MOBILE LEGEND------------------" << endl;
		cout << "-----------------------BERTARUNGLAH----------------------" << endl;
		cout << "welcome " << username<<endl;
		cout << "Player 1 : \t\t\t|" << "Player 2 : " <<endl; 
		cout << "\t health\t : " << player1[0] << "\t\t|\t healt\t :"<< player2[0]<< endl;
		cout << "\t str\t : " << player1[1] << "\t\t|\t str\t :"<< player2[1]<< endl;
		cout << "\t vit\t : " << player1[2] << "\t\t|\t vit\t :"<< player2[2]<< endl;

		if (turn == 1){
			cout << "1. Serang \t 2. HEAL(" << PP1 << ")"<< endl;
			cout << "player 1 ambil tindakan : ";
			cin >> act;
			if (act == 1){
				player2[0]=(player2[0])-((player1[1])-(player2[2]/3));
			}else if(act == 2 && PP1>0 ){
				player1[0]=player1[0]+10;
				PP1=PP1-1;
			}else if(act == 2 && PP1==0){
				goto turn;
			}
			turn = 2;
		}else if (turn == 2){
			cout << "1. Serang \t 2. HEAL(" << PP1 << ")"<< endl;
			cout << "player 2 ambil tindakan : ";
			cin >> act;
			if (act == 1){
				player1[0]=(player1[0])-((player2[1])-(player1[2]/3));
			}else if(act == 2 && PP2>0 ){
				player2[0]=player2[0]+10;
				PP2=PP2-1;
			}else if(act == 2 && PP1==0){
				goto turn;
			}
			turn = 1;
		}
	}
	if(player1[0]<=0){
		cout << "player 2 MENANG YUHUYY";
	}else{
		cout << "player 1 menang";
	}

}
int hero(int a,int x){
	int hero[3][3] = {{20,5,5},{5,10,10},{7,7,7}};
	a = hero[x-1][a];
}
int armor(int a,int x){
	int armor[3][3] = {{20,5,5},{5,10,10},{7,7,7}};
	a = armor[x-1][a];
}
int sword(int a,int x){
	int sword[3][3] = {{20,5,5},{5,10,10},{7,7,7}};
	a = sword[x-1][a];
}
int skin(int a,int x){
	int skin[3][3] = {{20,5,5},{5,10,10},{7,7,7}};
	a = skin[x-1][a];
}
