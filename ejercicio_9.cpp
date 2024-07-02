#include <iostream>
#include <vector>
using namespace std;
void rotarVector(vector<int>& vec){
    int ultimo=vec.back();
    for(int i=vec.size()-1;i>0;i--){
        vec[i]=vec[i-1];
    }
    vec[0]=ultimo;
}
int main(){
    vector<int> vec={1, 2, 3, 4, 5};
    cout<<"Vector original: ";
    for(int elem:vec){
        cout<<elem<<" ";
    }
    cout<<endl;
    rotarVector(vec);
    cout <<"Vector rotado: ";
    for(int elem:vec){
        cout<<elem<<" ";
    }
    cout<<endl;
    return 0;
}
