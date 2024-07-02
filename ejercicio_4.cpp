#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string nombres[100];
    int contador=0;
    string nombre;
    cout<<"Ingrese una secuencia de nombres (ingrese 'fin' para terminar):"<<endl;
    while(true){
        cout<<"Nombre: ";
        getline(cin, nombre);
        if(nombre=="fin"){
            break;
        }
        nombres[contador]=nombre;
        contador++;
    }
    for(int i=0;i<contador;i++){
        for(int j=i + 1;j<contador; j++){
            if(nombres[i]>nombres[j]){
                string temp=nombres[i];
                nombres[i]=nombres[j];
                nombres[j]=temp;
            }
        }
    }
    cout<<"Nombres ordenados alfabeticamente:"<<endl;
    for(int i=0;i<contador; i++){
        cout<<nombres[i]<<endl;
    }
    return 0;
}
