#include "Complejo.hpp"
#include<cmath>
using std::pow;

Complejo::Complejo(double pReal, double pImaginario){
	this->real= pReal;
	this->imaginario= pImaginario;
}

Complejo::Complejo(){
	this->real = 0;
	this->imaginario = 0;
}

void Complejo::setReal(const double pReal){
	this->real = pReal;
}

void Complejo::setImaginario(const double pImaginario){
	this->imaginario = pImaginario;
}

const double Complejo::getReal()const{
	return this->real;
}

const double Complejo::getImaginario()const{
	return this->imaginario;
}

void Complejo::mostrarComplejo(){
	if(getImaginario()<0){
		cout<<"El numero complejo es: "<<this->real<<this->imaginario<<"i"<<endl;
	}
	else{
		cout<<"El numero complejo es: "<<this->real<<"+"<<this->imaginario<<"i"<<endl;
	}
}

Complejo Complejo::conjugado(Complejo *const ptrc1){
	this->imaginario= ptrc1->imaginario * -1;
}

void Complejo::modulo(){
	int x, y, z;
	x = getReal()*getReal();
	y = getImaginario()*getImaginario();
	z = x + y;
	cout<<"Objeto 3: "<<sqrt(z)<<endl;
}
//0-ptr no const  a datos no const
//Forma uno. 
void Complejo::sumaform1(Complejo *ptr1, Complejo *ptr2){
	ptr1->real = ptr1->real + ptr2->real;
	ptr1->imaginario = ptr1->imaginario + ptr2->imaginario;
}

//1-ptr no const  a datos const
//forma dos.
void Complejo::suma(const Complejo *ptr3){
	this->real = real + ptr3->real;
	this->imaginario = imaginario + ptr3->imaginario;
}

//2-ptr const a datos no const
//forma 3
Complejo Complejo::suma(Complejo *const ptr4, Complejo *const ptr5){
	Complejo suma(ptr4->real + ptr5->real, ptr4->imaginario + ptr5->imaginario);
	return suma;
}

//3-ptr const a datos const
//forma3
Complejo Complejo::sumaform3(const Complejo *const ptr6, const Complejo *const ptr7){
	Complejo sumaform3(ptr6->real + ptr7->real, ptr6->imaginario + ptr7->imaginario);
	return sumaform3;
}

//Sobre carga de operadores
//Funci�n amiga(fiend)
Complejo &operator +(const Complejo &c1, const Complejo &c2){
	double real = c1.real + c2.real;
	double imaginario = c1.imaginario + c2.imaginario;
	//Asignaci�n de memoria dinamica
	return *(new Complejo(real,imaginario));
}

ostream &operator <<(ostream &mensaje, const Complejo &complejo){
	char ope;
	if(complejo.imaginario >0){
		ope = '+';
		mensaje<<complejo.real<<ope<<complejo.imaginario<<"i"<<endl;	
	}
	else{
		mensaje<<complejo.real<<complejo.imaginario<<"i"<<endl;	
	}	
	return mensaje;
}
//Una mejor forma de implementar la funci�n amiga u optimizarla
Complejo &operator -(const Complejo &c1, const Complejo &c2){
	return *(new Complejo(c1.real - c2.real, c1.imaginario - c2.imaginario));
}

Complejo &operator *(const Complejo &c1, const Complejo &c2){
	double real = (c1.real)*(c2.real)-(c1.imaginario)*(c2.imaginario);
	double imaginario = (c1.imaginario)*(c2.real)+(c1.real)*(c2.imaginario);
	return *(new Complejo(real,imaginario));
}

Complejo &operator /(const Complejo &c1, Complejo &c2){
	
	c2.setImaginario(c2.getImaginario()*-1);
	double real1 = (c1.real)*(c2.real)-(c1.imaginario)*((c2.imaginario));
	double imaginario1 = (c1.imaginario)*(c2.real)+(c1.real)*(c2.imaginario);
	double deno = (c2.getReal())*(c2.getReal())-(c2.getImaginario())*(c2.getImaginario())*-1;
	double real = real1/ deno;
	double imaginario = imaginario1 / deno;
		
	return *(new Complejo(real,imaginario));

}
//Definimos con el tipo de dato double porque el resultado es un escalar 
double operator!(const Complejo &ptrc2){
	double suma = pow(ptrc2.real,2) + pow(ptrc2.imaginario,2);
	double sqrt1 = sqrt(suma);
	
	return sqrt1;
}