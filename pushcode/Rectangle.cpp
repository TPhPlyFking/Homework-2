#include <iostream>
using namespace std;

class Rectangle {
private:
    // Tạo biến width heighttrong private
    double width;
    double height;

public:
    // Constructor
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }


    // Hàm lấy width
    int get_width() {
        return width;
    }
    // hàm lấy height
    double get_height() {
        return height;
    }

    // Hàm sửa width
    void set_width(double w) {
        width = w;
    }
    //hàm sử height
    void set_height(double h) {
        height = h;
    }

    // Tính diện tích
    double calculateArea() {
        return width * height;
    }

};

int main() {
    // Tạo hình chữ nhật 5 x 3
    Rectangle rect1(5, 3);
    cout<<rect1.calculateArea();

    cout << "\n";

    // Tạo hình chữ nhật 10 x 7
    Rectangle rect2(10, 7);
    cout<<rect2.calculateArea();
    
    return 0;
}
