#include <string>
#include <iostream>
using namespace std;

class Laptop {
private:
    //tạo biến brand model ram storage gpu
    string brand;
    string model;
    int ram;
    int storage;
    string gpu;
public:
    // contructor
    Laptop(string b, string m, int r, int s, string g) {
        brand = b;
        model = m;
        ram = r;
        storage = s;
        gpu = g;
    }
    // hàm in các thông tin
    void display_info() {
        cout<<"Hãng: "<<brand<<'\n';
        cout<<"Model: "<<model<<'\n';
        cout<<"Ram: "<<ram<<"GB"<<'\n';
        cout<<"Dung lượng: "<<storage<<"GB"<<'\n';
        cout<<"GPU: "<<gpu<<'\n';
    }
    // hàm kiểm tra xem laptop có đủ RAM để chạy phần mềm hay không
    void checkRam(int requiredRAM) {
        if(ram >= requiredRAM) cout<<"Laptop đủ RAM để chạy phần mềm \n";
        else cout<<"Laptop không đủ RAM để chạy phần mềm \n";
    }
    //hàm kiểm tra xem GPU có đủ mạnh để chơi game hay không
    void checkGPU() {
        if(gpu == "RTX" || gpu == "GTX") cout<<"Laptop đủ mạnh để chơi game \n";
        else cout<<"Laptop không đủ mạnh để chơi game \n";
    }
    // hàm nâng cấp RAM
    void upgradeRAM(int additionalRAM) {
        ram = additionalRAM;
    }
};
int main() {
    Laptop lap1("Macbook", "Air M1", 8, 256, "RTX");
    lap1.display_info();
    lap1.checkGPU();
    lap1.checkRam(16);
    
    Laptop lap2("Dell", "XPS 13", 16, 256, "GTX");
    lap2.display_info();
    lap2.checkGPU();
    lap2.checkRam(16);
}
