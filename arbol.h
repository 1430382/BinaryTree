typedef char Tipoelemento;

#include "NodoDoble.h";
#include <iostream>

using namespace std;

class ArbolBinario
{
	protected:

		Nodo* raiz;

	public:

		ArbolBinario()
		{
			raiz = NULL;
		}

		ArbolBinario(Nodo* r)
		{
			raiz = r;
		}

		Nodo raizArbol()
		{
			if(raiz)
				return *raiz;
			else
				throw " arbol vacio";
		}

		bool esVacio()
		{
			return raiz == NULL;
		}

		Nodo* hijoIzdo()
		{
			if(raiz)
				return raiz->subArbolIzdo();
			else
				throw " arbol vacio";
		}

		Nodo* hijoDcho()
		{
			if(raiz)
				return raiz->subArbolDcho();
			else
				throw " arbol vacio";
		}

		void Praiz(Nodo *r)
		{
			raiz = r;
		}

		Nodo* Oraiz()
		{
			return raiz;
		}

		Nodo* nuevoArbol(Nodo* ramaIzqda, Tipoelemento dato, Nodo* ramaDrcha)
		{
			return new Nodo(dato, ramaIzqda, ramaDrcha);
		}



		void preorden()
		{
			preorden(raiz);
		}

		void inorden()
		{
			inorden(raiz);
		}

		void postorden()
		{
			postorden(raiz);
		}

		void vaciar();

		private:

		void preorden(Nodo* r)
		{
			if (r != NULL)
			{
				r->visitar();
				preorden (r->subArbolIzdo());
				preorden (r->subArbolDcho());
			}
		}//;

		void inorden(Nodo* r)
		{
			if (r != NULL)
			{
				inorden (r->subArbolIzdo());
				r->visitar();
				inorden (r->subArbolDcho());
			}
		}

		void postorden(Nodo* r)
		{
			if (r != NULL)
			{
				postorden (r->subArbolIzdo());
				postorden (r->subArbolDcho());
				r->visitar();
			}
		}
		/*
		void preorden(Nodo *r)
		{
			if (r != NULL)
			{
				r->visitar();
				preorden (r->subarbolIzdo());
				preorden (r->subarbolDcho());
			}
		}
		*/

		void vaciar(Nodo* r);
};

void ArbolBinario::vaciar(Nodo* r)//privada
{
	if (r != NULL)
	{
		vaciar(r->subArbolIzdo());
		vaciar(r->subArbolDcho());
		cout << "\tNodo borrado. ";
		r = NULL;
	}
}

void ArbolBinario::vaciar()//publica
{
	vaciar(raiz);
}
