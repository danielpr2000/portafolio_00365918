#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct libro{
    string libro;
    int cantPaginas;
};

void BuscarLibro(stack<libro> libros, string titulo){
    if (libros.empty()){
        cout << "El libro no ha sido encontrado :(" << endl;
    }else{

        if(libros.top().libro == titulo){
        cout << "Cantidad de paginas del libro que buscas: " << libros.top().cantPaginas << endl;
        }else{
            libros.pop();
            BuscarLibro(libros, titulo);
        }
    }
}

int main()
{
	stack<libro> libros;

    libro lib1, lib2, lib3, lib4, lib5, lib6, lib7, lib8;

    lib1.libro = "lib1";
    lib1.cantPaginas = 5;

    lib2.libro = "lib2";
    lib2.cantPaginas = 10;

    lib3.libro = "lib3";
    lib3.cantPaginas = 15;

    lib4.libro = "lib4";
    lib4.cantPaginas = 20;

    lib5.libro = "lib5";
    lib5.cantPaginas = 25;

    lib6.libro = "lib6";
    lib6.cantPaginas = 15;

    lib7.libro = "lib7";
    lib7.cantPaginas = 20;

    lib8.libro = "lib8";
    lib8.cantPaginas = 25;

	libros.push(lib1);
	libros.push(lib2);
	libros.push(lib3);
	libros.push(lib4);
	libros.push(lib5);
        libros.push(lib6);
	libros.push(lib7);
	libros.push(lib8);
    string libro;
    cout << "Escribe el libro que buscas: " << endl;
    cin >> libro;

    BuscarLibro(libros, libro);

    return 0;
}
