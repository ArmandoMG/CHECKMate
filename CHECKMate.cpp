#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>

using namespace std;

int convertString(char letter){
	int num;
	//strupr(letter);
	switch(letter){
		case 'A': num = 8; break;
		case 'B': num = 7; break;
		case 'C': num = 6; break;
		case 'D': num = 5; break;
		case 'E': num = 4; break;
		case 'F': num = 3; break;
		case 'G': num = 2; break;
		case 'H': num = 1; break;
	}
	return num;
}
void checkmate(char Kx , int Ky , char Qx , int Qy , char Tx , int Ty , char Bx , int By){
	int cont = 0, kx = convertString(Kx), qx = convertString(Qx), tx = convertString(Tx), bx = convertString(Bx);

	if(Ky == Qy || kx == qx|| abs(kx-qx) == abs(Ky-Qy)){
		cout<<"\nCheckmate by the Queen!"<<endl;
		cont++;
	}
	if(Ky == Ty || kx == tx ){
		cout<<"\nCheckmate by the Tower!"<<endl;
		cont++;
	}
	if(abs(kx-bx) == abs(Ky-By)){
		cout<<"\nCheckmate by the bishop!"<<endl;
		cont++;
	}
	if(cont == 0){
		cout<<"\nYour King is safe... for now"<<endl;
	}
	cout<<"\nThere are "<<cont<<" checkmates in "<<Kx<<" "<<Ky<<endl;
}

int main(){
	int Ky, Qy , Ty , By;
	char Kx, Qx, Tx , Bx , exit = 'y';
	while(exit == 'y'){
		cout<<"Where is the King? (Ex. G 4): "; cin>>Kx>>Ky;
		cout<<"Where is the Queen? (Ex. B 8): "; cin>>Qx>>Qy;
		cout<<"Where is the Tower? (Ex. A 5): "; cin>>Tx>>Ty;
		cout<<"Where is the ? (Ex. F 9): "; cin>>Bx>>By;

		checkmate(Kx , Ky , Qx , Qy , Tx , Ty , Bx , By);

		cout<<"\nTry again? (y) or (n): "; cin>>exit;
		cout<<"\n";
	}

	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
