#include<iostream>
using std::cout;
using std::endl;
using std::cin;

class Complejo{
	public:
		//Constructor
		//Tenemos parametros constantes o lo mismo que datos constantes
		Complejo(const double, const double);
		//Funciones miembros
		//Paramatros constantes
		void setReal(const double);
		//Paramatros constantes
		void setImaginario(const double);
		void mostrarComplejo();
		void conjugado();
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
