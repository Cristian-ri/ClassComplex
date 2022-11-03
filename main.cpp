#include "Complejo.hpp"

int main() 
{
	int op;
	int cantidadC;
	Complejo c1(-2,3), c2(8,-5), resultado(0,0);
	Complejo c3(5,8),c4(-4,5),c5(8,-2);
	Complejo resultado2, resultado3,resultado4;
	double m;
	
	cout<<"---------------Prueba--------------"<<endl;
	c1.mostrarComplejo();
	c2.mostrarComplejo();
	c3.mostrarComplejo();
	cout<<"Parte real del objecto 1: "<<c1.getReal()<<endl;
	cout<<"Parte imaginaria del objeto 2: "<<c2.getImaginario()<<endl;
	cout<<"----------Fin prueba----------------"<<endl;
	cout<<"\n";
	
	cout<<"Conjugado de los complejos: "<<endl;
	c1.conjugado(&c1);
	c1.mostrarComplejo();
	c2.conjugado(&c2);
	c2.mostrarComplejo();
	cout<<"\n";
	cout<<"Modulo de un complejo"<<endl;
	c3.modulo();
	cout<<"\n";
	cout<<"Suma de complejos forma 1"<<endl;
	c1.sumaform1(&c1,&c2);
	c1.mostrarComplejo();
	cout<<"\n";
	cout<<"Suma de complejos forma 2"<<endl;
	c3.suma(&c2);
	c3.mostrarComplejo();
	cout<<"\n";
	cout<<"Suma de complejos forma 3"<<endl;
	resultado = resultado.suma(&c1, &c2);
	resultado.mostrarComplejo();
	cout<<"\n";
	cout<<"Suma de complejos forma 3 optimizada"<<endl;
	resultado = resultado.sumaform3(&c1,&c2);
	resultado.mostrarComplejo();
	cout<<"\n";
	cout<<"Sobre carga de operadores"<<endl;
	cout<<"Suma"<<endl;
	resultado2 = c1 + c3;
	resultado2.mostrarComplejo();
	cout<<"Mejor forma de imprimir el resultado"<<endl;
	cout<<resultado2;
	cout<<"Resta"<<endl;
	//Se restan c2 de la linea 9 y 
	// como c3 usa la forma 2  y este usa ptr no const  a datos const
	resultado3 = c2 - c3;
	cout<<resultado3;
	cout<<"\n";
	cout<<"Producto de vectores: "<<endl;
	resultado= c4*c5;
	cout<<resultado;
	cout<<"\n";
	cout<<"Division de vectores: "<<endl;
	resultado4= c4/c5;
	cout<<resultado4;
	cout<<"\n";
	cout<<"Modulo con sobrecargar: "<<endl;
	m = !c1;
	cout<<m;
	
	return 0;
}