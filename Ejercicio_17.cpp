#include <iostream>
#include <string>
using namespace std;
bool contieneApellido(const string& nombreCompleto, const string& apellido) {
    int lenApellido=apellido.length();
    int lenNombreCompleto=nombreCompleto.length();
    for(int i=0;i<=lenNombreCompleto-lenApellido;i++){
        bool encontrado=true;
        for(int j=0;j<lenApellido;j++){
            if(toupper(nombreCompleto[i+j])!=toupper(apellido[j])){
                encontrado=false;
                break;
            }
        }
        if(encontrado){
            return true;
        }
    }
    return false;
}
int main(){
    string nombreCompleto;
    string apellido;
    cout<<"Introduce el nombre completo: ";
    getline(std::cin, nombreCompleto);
    cout<<"Introduce el apellido: ";
    getline(std::cin, apellido);
    if(contieneApellido(nombreCompleto, apellido)){
        cout<<"El apellido '"<<apellido<<"' pertenece a la persona."<<endl;
    }else{
        cout<<"El apellido '"<<apellido<<"' no pertenece a la persona."<<endl;
    }
    return 0;
}