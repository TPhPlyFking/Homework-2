//
//  main.cpp
//  Test
//
//  Created by Lieu Hong Nhiep on 16/7/25.
//

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    // Tạo biến title và author trong private
    string title;
    string author;

public:
    // Constructor
    Book(string t, string a) {
        title = t;
        author = a;
    }

    // Hàm in thông tin sách
    void display_info() {
        cout << "Title: " << title << '\n';
        cout << "Author: " << author << '\n';
    }

    // Hàm lấy title
    string get_title() {
        return title;
    }
    //hàm lấy author
    string get_author() {
        return author;
    }

    // hàm sửa title
    void set_title(string t) {
        title = t;
    }
    // hàm sửa author
    void set_author(string a) {
        author = a;
    }
};

int main() {
    // book1: "Nhật ký trong tù", "Hồ Chí Minh"
    Book book1("Nhật ký trong tù", "Hồ Chí Minh");
    book1.display_info();

    // book2: "Chí Phèo", "Nam Cao"
    Book book2("Chí Phèo", "Nam Cao");
    book2.display_info();

    return 0;
}
