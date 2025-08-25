#include <string>
#include <iostream>
using namespace std;

class Account {
  private:
    //tạo các biến
    string accountNumber;
    double balance;
    string ownerName;

  public:
    // contructor
    Account(string a, double b, string o) {
        accountNumber = a;
        balance = b;
        ownerName = o;
    }
    // hàm in thông tin
    void displaybalance() {
        cout << "Tên: " << ownerName << '\n';
        cout << "Số dư tài khoản: " << balance <<" VND"<< '\n';
    }
    // hàm nạp tiền
    void deposit(int amount) {
        balance += amount;
        cout << "Đã nạp : " << amount <<" VND"<< '\n';
    }
    //hàm rút tiền có kiểm tra 
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Số tiền rút không hợp lệ!\n";
        } else if (balance - amount < 100000) {
            cout << "Không đủ số dư! (phải giữ ít nhất " << 100000
                 << " VND)\n";
        } else {
            balance -= amount;
            cout << "Đã rút: " << amount << " VND\n";
        }
    }
};

int main() {
    Account acc1("0943901554", 110000, "Nhi");
    acc1.displaybalance();
    acc1.deposit(300000);
    acc1.withdraw(400000);
    acc1.displaybalance();
    cout<<'\n';
    Account acc2("0943860605", 310000, "Nhiep");
    acc2.displaybalance();
    acc2.deposit(300000);
    acc2.withdraw(100000);
    acc2.displaybalance();
    
    return 0;
}
