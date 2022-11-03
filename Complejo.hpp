#include<iostream>
using std::cout;
using std::endl;
using std::cin;
using std::ostream;
#include<cmath>
using std::sqrt;

class Complejo{
	
	friend Complejo &operator +(const Complejo &, const Complejo &);
	friend ostream &operator <<(ostream &, const Complejo &);
	friend Complejo &operator -(const Complejo &, const Complejo &);
	friend Complejo &operator *(const Complejo &, const Complejo &);
	friend Complejo &operator /(const Complejo &, Complejo &);
	friend double operator !(const Complejo &);
	
	public:
		//Constructor
		//Tenemos parametros constantes o lo mismo que datos constantes
		Complejo(const double, const double);
		//Constructor por defecto
		Complejo();
		//Funciones miembros
		//Paramatros constantes
		void setReal(const double);
		//Paramatros constantes
		void setImaginario(const double);
		void mostrarComplejo();
		Complejo conjugado(Complejo *const);
		void modulo();
		//Ptr no const a datos no const
		void sumaform1(Complejo *, Complejo *);
		//Ptr no const a datos const
		void suma(const Complejo *);
		//2-ptr const a datos no const
		Complejo suma(Complejo *const, Complejo *const);
		//3- ptr const a datos const
		Complejo sumaform3(const Complejo *const, const Complejo *const);
		//Las dos siguientes fuciones son constantes.
		const double getReal()const;
		const double getImaginario()const;
			
	private:
		//Atributos
		double real, imaginario;
};