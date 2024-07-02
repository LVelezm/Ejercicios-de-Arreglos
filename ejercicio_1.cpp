#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	char oracion[50]= "cáceres patrimonio de la humanidad";
	oracion[0]=toupper(oracion[0]);
	oracion[9]=toupper(oracion[9]);
	oracion[20]=toupper(oracion[20]);
	oracion[23]=toupper(oracion[23]);
	oracion[26]=toupper(oracion[26]);
	cout<<oracion;
	return 0;
}
