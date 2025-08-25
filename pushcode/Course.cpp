#include <iostream>
#include <string>
using namespace std;
class Course{
private:
    // tạo các biến
    string courseName;
    string courseCode;
    int credits;
    string instructorName;
public:
    //constructor
    Course(string CourseName, string CourseCode, int Credits, string InstructorName) {
        courseName = CourseName;
        courseCode = CourseCode;
        credits = Credits;
        instructorName = InstructorName;
    }
    // hàm in thông tin
    void displayInfo() {
        cout << "Tên khoá học: " << courseName << endl ;
        cout << "Mã khoá học: " << courseCode << endl ;
        cout << "Số tín chỉ: " << credits << endl ;
        cout << "Tên giảng viên: "<<instructorName<< endl ;
    }
    // hàm kiểm tra khoá học có trên 3 tín chỉ hay không
    bool isHighCredit() {
        return credits > 3;
    }
    //Hàm kiểm tra khoá học có yêu cầu phòng thí nghiệm hay không
    bool isLabRequired() {
        return credits > 4;
    }
};
int main() {
    Course course1("Object Oriented Programming", " CS202 ", 4, "Huynh Xuan Phung");
    
    course1 . displayInfo ();
    if ( course1 . isHighCredit()) cout << "Khoá học có hơn 3 tín chỉ \n";
    else cout << "Khoá học dưới 3 tín chỉ \n";
    if ( course1 . isLabRequired()) cout << "Khoá học yêu cầu phòng thí nghiệm \n";
    else cout << "Khoá học không yêu cầu phòng thí nghiệm \n";
    
    cout<<'\n';
    
    Course course2(" Basic Electronics", " CS303 ", 3, "Dinh Cong Doan");
    
    course2 . displayInfo ();
    if ( course2 . isHighCredit()) cout << "Khoá học có hơn 3 tín chỉ \n";
    else cout << "Khoá học dưới 3 tín chỉ \n";
    if ( course2 . isLabRequired()) cout << "Khoá học yêu cầu phòng thí nghiệm \n";
    else cout << "Khoá học không yêu cầu phòng thí nghiệm \n";
    
    
    return 0;
}
