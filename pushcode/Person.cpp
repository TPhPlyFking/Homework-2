#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    //tạo các biến
    string name;
    int age;
    string address;
    string phoneNumber;
public:
    //constructor
    Person(string Name, int Age, string Address, string PhoneNumber) {
        name = Name;
        age = Age;
        address = Address;
        phoneNumber = PhoneNumber;
    }
    //Hàm in thông tin
    void displayInfo() {
        cout << "Tên: " << name << endl ;
        cout << "Tuổi: " << age << endl ;
        cout << "Địa chỉ: " << address << endl ;
        cout << "Số điện thoại: " << phoneNumber << endl ;
    }
    // hàm kiểm tra xem đã trưởng thành chưa
    bool isAdult() {
        return age >= 18;
    }
    //hàm sửa địa chỉ
    void move(string newAddress) {
        address = newAddress;
        cout<<"Địa chỉ đã cập nhật thành: "<<address<<endl;
    }
    //hàm xin chào
    void greet() {
        cout<<"Xin chào tên tôi là "<<name<<endl;
    }
};
int main() {
    Person person1("Nhi", 19, "Cà Mau", "0943860605");
    person1.displayInfo();
    if(person1.isAdult()) cout<<"Đây là người trưởng thành \n";
    else cout<<"Đây là người chưa trưởng thành. \n";
    person1.move("Hồ Chí Minh");
    person1.greet();
    
    cout<<'\n';
    
    Person person2("Nhiệp", 13, "Hà Nội", "0943199556");
    person2.displayInfo();
    if(person2.isAdult()) cout<<"Đây là người trưởng thành \n";
    else cout<<"Đây là người chưa trưởng thành. \n";
    person2.move("Thanh Hoá");
    person2.greet();
    return 0;
}
