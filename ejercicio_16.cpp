#include <iostream>
#include <cctype>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
    string linea;
    string digitos;
    int n;
    cout<<"En aproximadamente 120 dias llegaremos al año 2022 y festejaremos"<<endl; 
    linea="En aproximadamente 120 días llegaremos al año 2022 y festejaremos";
    for(char c:linea){
        if(isdigit(c)){
            digitos+=c;
        }
    }
    n=std::atoi(digitos.c_str());
    n+=2;
    cout<<n<<endl;
    return 0;
}