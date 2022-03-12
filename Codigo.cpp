#include <iostream>
using namespace std;
class Codigo{
	protected : string cur;
				int cod, noot[4];

	protected : 
		Codigo(){
		}
		Codigo(string curso, int codigo, int nota[4]){
			cur = curso;
			cod = codigo;
			for (int i=0; i<4; i++){
				noot[i] = nota[i];
			}
		}
		void mostrar();
};
