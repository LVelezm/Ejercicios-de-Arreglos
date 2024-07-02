#include <iostream>
#include <string>
using namespace std;
string preprocess(const string& frase){
    string result;
    for(char c:frase){
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
            if(c>='A'&&c<='Z'){
			}
                c+='a'-'A';
            }
            result+=c;
        }
            return result;
    }
bool esPalindromo(const string& frase){
    string preprocessed=preprocess(frase);
    string reversed;
    for(int i=preprocessed.size()-1;i>= 0;--i){
        reversed+=preprocessed[i];
    }
    return preprocessed==reversed;
}
int main(){
	string frase;
    cout<<"Introduce una frase: ";
    getline(std::cin, frase);
    if(esPalindromo(frase)){
        cout<<"La frase es un palindromo."<<endl;
    }else{
        cout<<"La frase no es un palindromo."<<endl;
    }
    return 0;
}
