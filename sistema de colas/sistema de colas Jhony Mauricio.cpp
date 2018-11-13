//echo por jhonnh mauricio iglesias  carnet if18001

#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int n=0;
	int p=0;
	char op;
	int cliente[]={};
	cliente[0]=0;
	int numCliente=0;
	int posicionGuardar=0;
	int posicionLlamar=0;
	int a=0;
	
	
	system("cls");
	cout<<"BIENVENIDO"<<endl;
	cout<<"1. Entrar al sistema"<<endl;
	cout<<"2. Salir del sistema"<<endl;
	cin>>op;
	
	switch(op){
		
		case '1':
			
			do{
			
				system("cls");
				cout<<"1. Generar numero"<<endl;
				cout<<"2. Llamar numero"<<endl;
				cout<<"3. Eliminar numero"<<endl;
				cout<<"4. Salir"<<endl;
				cin>>op;
				
				switch(op){
					case '1':
						n++;
						
						cout<<"Su numero de cliente es: "<<n<<endl;
						cliente[posicionGuardar]=n;
						
						posicionGuardar=n;
						
						system("pause");
						break;
					case '2':
						
						if(p <= (n-1))
						{	
							p++;
							cout<<"Llamando a cliente "<<cliente[p]<<endl;
							
							system("pause");
							
						}else{
							cout<<"No hay clientes en la cola"<<endl;
							system("pause");
							
						}
						break;
						
						
					case '3':
						if(a <= (n-1))
						{	
							a++;
							cout<<"Cliente "<<cliente[a]<<" eliminado"<<endl;
							
							system("pause");
							
						}else{
							cout<<"No hay clientes en la cola"<<endl;
							system("pause");
							
						}
						break;
					case '4':
						exit(0);
						break;
					default:
						cout<<"Opcion no valida"<<endl;
						system("pause");
						break;
				}
				}while(op!='4');
			
			
		case '2':
			exit(0);
			break;
			
		default:
			cout<<"Opcion no valida"<<endl;
			system("pause");
	
		
	}
	
	
	return 0;
}

