#include "Codigo.cpp"
#include <iostream>
using namespace std;

class Estudiante : Codigo{
	
	private: string nom, ape;
				
	
	public : 
		Estudiante(){
		}
		Estudiante(string curso, int codigo, int nota[3], string nombre, string apellido): Codigo(curso, codigo, nota){
			nom = nombre;
			ape = apellido;
		}
		
	void setCurso(string curso){cur = curso;}
	void setCodigo(int codigo){cod = codigo;}	
	void setNota0(int nota[0]){noot[0] = nota[0];}	
	void setNota1(int nota[1]){noot[1] = nota[1];}	
	void setNota2(int nota[2]){noot[2] = nota[2];}
	void setNota3(int nota[3]){noot[3] = nota[3];}
	void setNombre(string nombre){nom = nombre;}
	void setApellido(string apellido){ape = apellido;}
	
	string getCurso(){return cur;}
	int getCodigo(){return cod;}
	int getNota0(){return noot[0];}
	int getNota1(){return noot[1];}
	int getNota2(){return noot[2];}
	int getNota3(){return noot[3];}
	string getNombre(){return nom;}
	string getApellido(){return ape;}
	
	void mostrar(){
		cout<<"Codigo: "<<cod<<"\nNombre: "<<nom<<"\nApellido: "<<ape<<"\nCurso: "<<cur<<"\n\nTodas las notas ingresadas:";
		for (int i=0; i<4; i++){
			cout<<"\n Nota #"<<i+1<<":"<<noot[i]<<endl;
			cout<<"-------";
		}
		cout<<endl;
	}
};
