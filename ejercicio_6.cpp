#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout<<"Ingrese la cantidad de elementos del vector: ";
    cin>>n;
    vector<int> vector(n);
    cout<<"Ingrese los elementos del vector:"<<endl;
    for(int i=0;i<n;i++){
        cin>>vector[i];
    }
    int sumapar=0;
    int sumaimpar=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sumapar+=vector[i];
        }else{
            sumaimpar+=vector[i];
        }
    }
    cout<<"Suma de componentes de indice par: "<<sumapar<<endl;
    cout<<"Suma de componentes de indice impar: "<<sumaimpar<<endl;
    return 0;
}
