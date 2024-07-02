#include <iostream>
#include <string>
using namespace std;
int main(){
    string entrada;
    char letra;
    int contador = 0;
    cout<<"Ingrese una oracion: ";
    getline(cin, entrada);
    cout<<"Ingrese la letra a buscar: ";
    cin>>letra;
    for(int i=0; i<entrada.length(); i++) {
        if (entrada[i]==letra){
            contador++;
        }
    }
    cout<<"La letra " <<letra<< " se encuentra "<<contador<<" veces en la oracion."<<endl;
    return 0;
}
