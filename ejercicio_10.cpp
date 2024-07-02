#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int numeros[30];
    for(int i=0;i<30;i++){
        numeros[i]=rand()%901+100;
    }
    int suma=0;
    for(int i=0;i<30;i++){
        suma+=numeros[i];
    }
    double media=(double)suma/30;
    int temp;
    for(int i=0;i<30;i++){
        for(int j=i+1;j<30;j++){
            if(numeros[i]>numeros[j]){
                temp=numeros[i];
                numeros[i]=numeros[j];
                numeros[j]=temp;
            }
        }
    }
    double mediana;
    if(30%2==0){
        mediana=(numeros[14]+numeros[15])/2.0;
    }else{
        mediana=numeros[15];
    }
    int moda=numeros[0];
    int maxFrecuencia=1;
    int frecuenciaActual=1;
    for(int i=1;i<30;i++){
        if(numeros[i]==numeros[i-1]){
            frecuenciaActual++;
        }else{
            if(frecuenciaActual>maxFrecuencia){
                maxFrecuencia=frecuenciaActual;
                moda=numeros[i-1];
            }
            frecuenciaActual=1;
        }
    }
    if(frecuenciaActual>maxFrecuencia){
        maxFrecuencia=frecuenciaActual;
        moda=numeros[29];
    }
    cout<<"Numeros aleatorios: ";
    for(int i=0;i<30;i++){
        cout<<numeros[i]<< " ";
    }
    cout<<endl;
    cout<<"Media: "<<media<<endl;
    cout<<"Mediana: "<<mediana<<endl;
    cout<<"Moda: "<<moda<<endl;
    return 0;
}
