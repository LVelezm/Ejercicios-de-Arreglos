#include <iostream>
#include <vector>
using namespace std;
bool esCapicua(vector<int>& digits){
    int inicio=0;
    int fin=digits.size()-1;
    while (inicio<fin) {
        if(digits[inicio]!=digits[fin]){
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}
int main(){
    vector<int> digits;
    int num;
    cout<<"Ingrese un numero de 10 cifras: ";
    cin>>num;
    while (num > 0) {
        digits.push_back(num%10);
        num/=10;
    }
    if(esCapicua(digits)){
        cout<<"El numero es capicua."<<endl;
    }else{
        cout<<"El numero no es capicua."<<endl;
    }
    return 0;
}
