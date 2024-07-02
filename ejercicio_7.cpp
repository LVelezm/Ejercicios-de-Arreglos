#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> vector={1, 2, 3, 4, 5};
    reverse(vector.begin(), vector.end());
    cout<<"Vector invertido: ";
    for(int elemento:vector){
        cout<<elemento<<" ";
    }
    cout << endl;
    return 0;
}
