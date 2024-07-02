#include <iostream>
#include <string>
using namespace std;
bool esBalanceado(const string& oracion){
    int contador=0;
    for(char c:oracion){
        if (c == '('){
            contador++;
        }else if(c == ')'){
            if(contador==0){
                return false;
            }
            contador--;
        }
    }
    return contador==0;
}
int main(){
    string oracion;
    cout<<"Introduce una oracion con parentesis: ";
    getline(cin, oracion);
    if(esBalanceado(oracion)){
        cout<<"La oracion tiene un balanceo de parentesis correcto."<<endl;
    }else{
        cout<<"La oracion no tiene un balanceo de parentesis correcto."<<endl;
    }
    return 0;
}
