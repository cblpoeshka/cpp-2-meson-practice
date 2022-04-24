#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main (){
    srand(time(NULL));
    fstream n_file;
    n_file.open("n.txt", ios::out);
    cout << "n?\n";
    int n;
    cin >> n;
    double temp;
    for(int i = 0; i < n; i++){
        cout << "Vvedite deistvitelnoe chislo: ";
        cin >> temp;
        n_file << temp << " ";
    }
    n_file.close();
    n_file.open("n.txt", ios::in);
    double product_of_nums = 1;
    double current;
    for(int i = 0; i< n; i++){
        n_file >> current;
        product_of_nums = product_of_nums * current;
    }
    n_file.close();
    cout << product_of_nums<< endl;


    return 0;
}

