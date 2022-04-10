#include <iostream>
using namespace std;

int main(){
    int square_side;
    cout<<"vvedite storonu: ";
    cin>>square_side;
    int square_p = square_side*4;
    int square_s = square_side*square_side;
    cout<<"P = "<<square_p<<endl;
    cout<<"S = "<<square_s<<endl;
    return 0;
}
