#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
    vector<double> ventasMensuales(12);
    string meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    cout<<"Ingrese las ventas mensuales para cada mes del año 2020:"<<endl;
    for(int i=0;i<12;i++){
        cout<<"Ventas de "<<meses[i]<<": ";
        cin>>ventasMensuales[i];
    }
    double sumaVentas=0.0;
    for(double venta:ventasMensuales){
        sumaVentas+=venta;
    }
    double ventaPromedio=sumaVentas/12.0;
    int minimo=0, regular=0, excelente=0;
    for (double venta:ventasMensuales){
        if(venta<0.4*ventaPromedio){
            minimo++;
        }else if(venta>=0.4*ventaPromedio && venta<=0.75*ventaPromedio){
            regular++;
        }else{
            excelente++;
        }
    }
    cout<<"Venta mensual promedio: "<<ventaPromedio<<endl;
    cout<<"Porcentaje de meses con ventas mínimas: "<<(minimo/12.0)*100<<"%"<<endl;
    cout<<"Porcentaje de meses con ventas regulares: "<<(regular/12.0)*100<<"%"<<endl;
    cout<<"Porcentaje de meses con ventas excelentes: "<<(excelente/12.0)*100<<"%"<<endl;
    cout<<"Meses con ventas excelentes: ";
    for(int i=0;i<12;i++){
        if(ventasMensuales[i]>0.75*ventaPromedio){
            cout<<meses[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}
