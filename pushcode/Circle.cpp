#include <cmath>
#include <iostream>
using namespace std;

class Circle {
  public:
    double radius;
    //Tính chu vi hình tròn
    double circumference() { return 2 * M_PI * radius; }

    // Tính diện tích hình tròn
    double area() { return M_PI * radius * radius; }
};

int main() {
    Circle circle1;
    cout<<"Nhập bán kính hình tròn: ";
    cin>>circle1.radius;
    cout<<"Chu vi hình tròn: "<<circle1.circumference()<<'\n';
    cout<<"Diện tích hình tròn: "<<circle1.area()<<"\n\n";
    
    Circle circle2;
    cout<<"Nhập bán kính hình tròn: ";
    cin>>circle2.radius;
    cout<<"Chu vi hình tròn: "<<circle2.circumference()<<'\n';
    cout<<"Diện tích hình tròn: "<<circle2.area()<<"\n\n";

    return 0;
}
