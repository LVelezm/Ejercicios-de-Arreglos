#include <iostream>
#include <string>
using namespace std;
void mistrcpy(char* str1,const char* str2){
    int i=0;
    while(str2[i]!='\0'){
        str1[i]=str2[i];
        i++;
    }
    str1[i]='\0';
}
int main(){
	string str2;
    char str1[20];
    cout<<"Introduce la cadena a copiar: ";
    getline(cin, str2);
    mistrcpy(str1, str2.c_str());
    cout<<"Cadena original: "<<str2<<endl;
    cout<<"Cadena copiada: "<<str1<<endl;
    return 0;
}