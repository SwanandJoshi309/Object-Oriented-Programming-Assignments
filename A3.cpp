#include <iostream>
using namespace std;
class publication
{
    string title;
    float price;

public:
    void add()
    {
        cout << "Enter title : ";
        cin >> title;
        cout << "Enter price : ";
        cin >> price;
        if (price < 0)
        {
            cout << "invalid " << endl;
            price = 0;
        }
    }
    void display()
    {
        cout<<endl;
        cout << "title : " << title << endl;
        cout << "price : " << price << endl;
    }
};
class book : public publication
{
    int p_count;

public:
    void add_book()
    {
        add();
        cout << "Enter page count for book : ";
        cin >> p_count;
        if (p_count < 0)
        {
            cout << "Invalid count..." << endl;
            p_count = 0;
        }
    }
    void dis_book()
    {
        display();
        cout << "Page count : " << p_count << endl;
    }
};
class tape : public publication
{
    float time;

public:
    void add_tape()
    {
        add();
        cout << "Enter time count for tape : ";
        cin >> time;
        if (time < 0)
        {
            cout << "Invalid time..." << endl;
            time = 0;
        }
    }
    void dis_tape()
    {
        display();
        cout << "Time count : " << time << endl;
    }
};
int main()
{
    cout << "....BOOK...." << endl;
    book b;
    b.add_book();
    b.dis_book();
    cout << "\n....TAPE...." << endl;
    tape t;
    t.add_tape();
    t.dis_tape();
}