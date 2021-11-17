#include <iostream>
#include "arbol.h";

using namespace std;

int main(int argc, int *argv[])
{
	ArbolBinario a1,a2,a3, a4,a;
	Nodo * n1,*n2,*n3, *n4;
	n1 = a1.nuevoArbol(NULL,'a',NULL);
	n2 = a2.nuevoArbol(NULL,'b',NULL);
	n3 = a3.nuevoArbol(n1,'*',n2);
	n1 = a1.nuevoArbol(NULL,'c',NULL);
	n2 = a2.nuevoArbol(NULL,'d',NULL);
	n4 = a4.nuevoArbol(n1,'/',n2);
	n1 = a1.nuevoArbol(n3,'+',n4);
	a.Praiz(n1);
	cout<<"preorder\n";
	a.preorden();
	cout<<endl<<endl;
	cout<<"inorder"<<endl;
	a.inorden();
	cout<<endl<<endl;
	cout<<"postorder"<<endl;
	a.postorden();
	cout<<endl;
}
