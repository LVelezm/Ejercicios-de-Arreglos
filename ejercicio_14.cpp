#include <iostream>
using namespace std;
void mistrcat(char* str1, const char* str2){
    int i=0;
    int j=0;
    while(str1[i]!='\0'){
        i++;
    }
    while (str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
}
int main(){
    char str1[20];
    char str2[20];
    cout<<"Introduce la primera cadena (sin espacio): ";
    cin>>str1;
    cout<<"Introduce la segunda cadena(sin espacio): ";
    cin>>str2;
    mistrcat(str1, str2);
    cout<<"La cadena resultante es: "<<str1<<endl;
    return 0;
}
