#include<iostream>
using namespace std;
class Student {
private:
    string name;
    int grade;
public:
    Student(string Name, int Grade) {
        name = Name;
        grade = Grade;
    }
    void displayInfo() {
        cout<<"Tên: "<<name<<'\n';
        cout<<"Lớp: "<<grade<<'\n';
    }
};
int main() {
    cout<<"Nhập số học sinh: ";
    int n; cin>>n;
    
    vector<Student> ds;
    for(int i=0;i<n;i++)
    {
        string name;
        int grade;
        cout<<"Nhập tên học sinh thứ "<< i <<": ";
        cin>>name;
        cout<<"Nhập lớp của học sinh thứ "<< i <<": ";
        cin>>grade;
        ds.push_back(Student(name, grade));
    }
    
    for(int i=0; i<ds.size();i++)
    {
        ds[i].displayInfo();
    }
}

