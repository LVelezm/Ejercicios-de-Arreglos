#include <vector>
#include <iostream>
using namespace std;
bool estaordenado(vector<int>& vec){
    for(int i=0;i<vec.size()-1;i++){
        if(vec[i]>vec[i + 1]){
        	return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Introduce la cantidad de elementos del vector: "<<endl;
    cin>>n;
    vector<int> vec(n);
    cout<<"Introduce los elementos del vector:\n";
    for(int i=0;i<n;i++){
        cout<<"Elemento "<<i+1<<": ";
        cin>>vec[i];
    }
    if(estaordenado(vec)){
        cout<<"El vector esta ordenado\n";
    }else{
        cout<<"El vector no esta ordenado\n";
    }
    return 0;
}