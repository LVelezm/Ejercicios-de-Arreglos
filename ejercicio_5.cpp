#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ingrese la cantidad de numeros: ";
    cin>>n;
    int numeros[n];
    int mayor=INT_MIN;
    int menor=INT_MAX;
    int repeticionesMayor=0;
    int repeticionesMenor=0;
    cout<<"Ingrese los numeros:"<<endl;
    for (int i=0;i<n;i++){
        cin>>numeros[i];
        if(numeros[i]>mayor){
            mayor=numeros[i];
            repeticionesMayor=1;
        }else if(numeros[i]==mayor){
            repeticionesMayor++;
        }
        if(numeros[i]<menor){
            menor=numeros[i];
            repeticionesMenor=1;
        }else if(numeros[i]==menor){
            repeticionesMenor++;
        }
    }
    cout<<"Mayor: "<<mayor<<" (repeticiones: "<<repeticionesMayor<<")"<<endl;
    cout<<"Menor: "<<menor<<" (repeticiones: "<<repeticionesMenor<<")"<<endl;
    return 0;
}
