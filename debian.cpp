#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	 
	 int opcao; char menu;
	 
	 do{
	 cout << "::::: Essencial ::::: \n\n";
	 
	 cout <<"1- Atualizar o sistema\n" "2- Instalar o Ufw\n" "3- Instalar o vlc\n" "4- Instalar o Kazam\n" "5- Instalar o Telegram\n\n";
	 cout <<"Escolhar uma opção: ";
	 cin >> opcao;
	
	switch(opcao)
	{
		case 1:
		system("sudo apt-get update && sudo apt-get upgrade");
		cout <<"Deseja escolher outra opção [S/N]";
		cin >> menu;
		break;
		
		case 2:
		system("sudo apt-get install ufw && sudo ufw enable");
		cout <<"Deseja escolher outra opção [S/N]";
		cin >> menu;
		break;
	
		case 3:
		system("sudo apt-get install vlc");
		cout <<"Deseja escolher outra opção [S/N]";
		cin >> menu;
		break;

		case 4:
		system("sudo apt-get install kazam");
		cout <<"Deseja escolher outra opção [S/N]";
		cin >> menu;
		break;
	
	}
	}while(menu == 's');
	
}
