typedef char Tipoelemento;

using namespace std;

class Nodo
{
	protected:
		Tipoelemento dato;
		Nodo *izdo;
		Nodo *dcho;

	public:
		Nodo(Tipoelemento valor)
		{
			dato = valor;
			izdo = dcho = NULL;
		}

		Nodo(Tipoelemento valor, Nodo* ramaIzdo, Nodo* ramaDcho)
		{
			dato = valor;
			izdo = ramaIzdo;
			dcho = ramaDcho;
		}

		Tipoelemento valorNodo()
		{
			return dato;
		}

		Nodo* subArbolIzdo()
		{
			return izdo;
		}

		Nodo* subArbolDcho()
		{
			return dcho;
		}

		void nuevoValor(Tipoelemento d)
		{
			dato = d;
		}

		void ramaIzdo(Nodo* n)
		{
			izdo = n;
		}

		void ramaDcho(Nodo* n)
		{
			dcho = n;
		}

		void visitar()
		{
			cout << dato << "\t";
		}
};
