#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Point{
public:
    string name;
	double x;
	double y;
	double distance;
	Point(string title, double a = 1, double b = 1){
	    name = title;
        x = a;
        y = b;
    }
    void get_all(){
        cout << name << "(" << x << "; " << y << ")" << endl;
    }
    void calc_distance(){
        distance = sqrt(x * x + y * y);
    }
    void get_distance(){
        cout << distance << endl;
    }
    ~Point(){
        cout << name << "(" << x << "; " << y << ")" << endl;
        cout << "Point deleted";
    }
};

int main(){
    Point Alpha("A", 8 , 3);
    Alpha.get_all();
    Alpha.calc_distance();
    Alpha.get_distance();

    return 0;
}

