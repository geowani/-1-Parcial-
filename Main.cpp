#include "Estudiante.cpp"
#include <iostream>
using namespace std;

int main(){
	int can, cod, noot[4], pro = 0;
	string nom, ape, cur;
	
	cout<<"                  Lester Estrada\n";       
	cout<<"                Canet: 3590-21-7223\n";
	cout<<"-----------------------------------------------\n";
	cout<<"Bienvenido al sistema para calcular el promedio de estudiantes\n";
	cout<<"Por favor ingrese la cantidad de estudiantes: ";
	cin>>can;
	
	for(int ii=0; ii<can; ii++){
		system("cls");
		cout<<"------------ Datos del estudiante #"<<ii+1<<" ------------"<<endl;
		cout<<"       **El codigo del estudiante es numerico**\n";
		cout<<"---------------------------------------------\n\n";
		cout<<"Codigo: ";
		cin>>cod;
		cout<<"Nombre: ";
		cin>>nom;
		cout<<"Apellido: ";
		cin>>ape;
		cout<<"Curso: ";
		cin>>cur;
		cout<<"\n";
		cout<<"Notas\n";
		
		for (int i=0; i<4; i++){
			cout<<"Nota #"<<i+1<<":";
			cin>>noot[i];
			cout<<"--------\n";
			pro = pro + noot[i];
		}
		
		system("cls");
		cout<<"------ Informacion del estudiante # "<<ii+1<<" ------\n\n";
		Estudiante obj = Estudiante(cur, cod, noot, nom, ape);
		obj.mostrar();
		cout<<""<<endl;
		cout<<"--------------- Resultado ---------------\n\n";
		cout<<"El estudiante ha sido ";
		
		pro = pro/4;
		if(pro>60){
			cout<<"APROBADO";
		}else{
			cout<<"REPROBADO";
		}
		cout<<"!. Promedio final del curso "<<pro<<"\n\n\n";
		system("pause");
		pro = 0;
	}
}
