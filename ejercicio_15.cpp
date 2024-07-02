#include <iostream>
using namespace std;
int mistrcmp(const char str1[], const char str2[]) {
    int i = 0;
    while(str1[i]!='\0'&&str2[i]!='\0'){
        if(str1[i]>str2[i]){
            return 1;
        }else if(str1[i]<str2[i]){
            return -1;
        }
        i++;
    }
    if(str1[i]=='\0'&&str2[i]!='\0'){
        return -1;
    }else if(str1[i]!='\0'&&str2[i]=='\0'){
    	return 1;
    }
    return 0;
}
int main(){
    char str1[100];
    char str2[100];
    cout<<"Introduce la primera cadena: ";
    cin.getline(str1, 100);
    cout<<"Introduce la segunda cadena: ";
    cin.getline(str2, 100);
    int result=mistrcmp(str1, str2);
    if(result==0){
        cout<<"Las cadenas son iguales\n";
    }else if(result>0){
        cout<<"La cadena '"<<str1<<"' es mayor que '"<<str2<<"'\n";
    }else{
        cout<<"La cadena '"<<str1<<"' es menor que '"<<str2<<"'\n";
    }
    return 0;
}