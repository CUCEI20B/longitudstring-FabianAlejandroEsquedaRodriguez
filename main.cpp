#include <iostream>

using namespace std;

int main() {
    string cadena;

    //cin >> cadena; Lee hasta un espacio o salto de linea
    getline(cin, cadena); //Lee hasta \n
    cout<<cadena.size()<<endl;
    
    return 0;
}