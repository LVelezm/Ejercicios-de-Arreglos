#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Introduce la cantidad de elementos del arreglo: ";
    cin>>n;
    int* arr = new int[n];
    cout<<"Introduce los elementos del arreglo:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Elemento "<<i + 1<<": ";
        cin>>arr[i];
    }
    int sumpositivos = 0;
    int sumnegativos = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            sumpositivos+=arr[i];
        }else if(arr[i]<0){
            sumnegativos+=arr[i];
        }
    }
    cout<<"Suma de elementos positivos: "<<sumpositivos<<endl;
    cout<<"Suma de elementos negativos: "<<sumnegativos<<endl;
    return 0;
}
