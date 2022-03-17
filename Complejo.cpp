#include "Complejo.hpp"
#include<math.h>

Complejo::Complejo(double pReal, double pImaginario){
	real= pReal;
	imaginario= pImaginario;
}

void Complejo::setReal(const double pReal){
	real = pReal;
}

void Complejo::setImaginario(const double pImaginario){
	imaginario = pImaginario;
}

const double Complejo::getReal()const{
	return real;
}

const double Complejo::getImaginario()const{
	return imaginario;
}

void Complejo::mostrarComplejo(){
	if(getImaginario()<0){
		cout<<"El numero complejo es: "<<getReal()<<getImaginario()<<"i"<<endl;
	}
	else{
		cout<<"El numero complejo es: "<<getReal()<<"+"<<getImaginario()<<"i"<<endl;
	}
}

void Complejo::conjugado(){
	double c;
	c = -1*getImaginario();
	if(c<0){
		cout<<"El numero complejo es: "<<getReal()<<c<<"i"<<endl;
	}
	else{
		cout<<"El numero complejo es: "<<getReal()<<"+"<<c<<"i"<<endl;
	}
	
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
	real = real + ptr3->real;
	imaginario = imaginario + ptr3->imaginario;
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


