#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;
int main(){
    string entrada;
    cout<<"Ingrese una oracion: ";
    getline(cin, entrada);
    stringstream ss(entrada);
    string palabra;
    while (ss>>palabra){
        cout<<palabra<<endl;
    }
    return 0;
}
