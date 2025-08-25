//
//  main.cpp
//  Test
//
//  Created by Lieu Hong Nhiep on 16/7/25.
//

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    // Tạo biến name và salary trong private
    string name;
    double salary;

public:
    // Constructor
    Employee(string n, double s) {
        name = n;
        salary = s;
    }

    // Hàm in thông tin nhân viên
    void display_info() {
        cout << "Name: " << name << '\n';
        cout << "Salary: " << salary << '\n';
    }

    // hàm lấy name
    string get_name() {
        return name;
    }
    //hàm lấy salary
    double get_salary() {
        return salary;
    }

    //hàm sửa name
    void set_name(string n) {
        name = n;
    }
    // hàm sửa salary
    void set_salary(double s) {
        salary = s;
    }
};

int main() {
    // employee1: Nhi với lương 1500
    Employee employee1("Nhi", 1500.0);
    employee1.display_info();

    // employee2: Bob với lương 2000
    Employee employee2("Anh", 2000.0);
    employee2.display_info();

    return 0;
}
