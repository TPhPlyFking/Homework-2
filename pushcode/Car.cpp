//
//  main.cpp
//  Test
//
//  Created by Lieu Hong Nhiep on 16/7/25.
//

#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    //tạo ra biến brand và year private
    string brand;
    int year;
public:
    Car(string b, int y) {
        brand = b;
        year = y;
    }
    // Hàm in brand và year
    void display_info() {
        cout<<"Brand: "<<brand<<'\n';
        cout<<"Year: "<<year<<'\n';
    }
    //hàm lấy brand
    string get_brand() {
        return brand;
    }
    //hàm lấy year
    int get_year() {
        return year;
    }
    //hàm sửa brand
    void set_brand(string b) {
        brand = b;
    }
    //hàm sửa year
    void set_year(int y) {
        year = y;
    }
};
int main() {
    // car1 tên Toyota và năm 2006
    Car car1("Toyota", 2006);
    car1.display_info();
    //car2 tên Mercedes năm 2022
    Car car2("Mercedes", 2022);
    car2.display_info();
}
