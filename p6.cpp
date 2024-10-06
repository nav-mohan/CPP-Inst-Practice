// CPA Best Training Material and Practice Test Q&A fr...
// 1 of 9
// about:reader?url=https%3A%2F%2Fwww.certlibrary...
// certlibrary.com
// CPA Best Training Material and
// Practice Test Q&A from
// CertLibrary.com
// 14–18 minutes
// • Exam List
// • navaneeth account
// • Log Out
// • Contact
// • Blog
// C++ Certiﬁed Associate Programmer v6.0
// Exam contains 220 questions
// Which code, inserted at line 14, generates the output "3.14 10"?
#include <iostream>
using namespace std;
namespace myNamespace1
{
    int x = 5;
    int y = 10;
}
namespace myNamespace2
{
    float x = 3.14;
    float y = 1.5;
}
int main() {
    //insert code here
    cout << x << " " << y;
    return 0;
}
// • A. using myNamespace2::y; using myNamespace1::x;
// • B. using namespace myNamespace1;
// • C. using namespace myNamespace1; using namespace
// myNamespace2;
// • D. using myNamespace1::y; using myNamespace2::x;
// What is the output of the program?
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1[] = {"Hello", "World"};
    for (int i = 0; i < 2; i++) {
        cout << s1[i];
    }
    return 0;
}
// • A. It prints: HelloWorld
// • B. It prints: Hello
// • C. It prints: WorldHello
// • D. It prints: World
// Which code, inserted at line 8, generates the output "0102020"?
#include <iostream>
using namespace std;
class Base {
    static int age;
public:
    Base() {};
    ~Base() {};
    //insert code here
    void Print() { cout << age; }
};
int Base::age = 0;
int main() {
    Base a, *b;
    b = new Base();
    a.Print();
    a.setAge(10);
    a.Print();
    b->setAge();
    a.Print();
    b->Print();
    return 0;
}
// • A. void setAge(int a) {age = a;}
// • B. void setAge() {age = 20;}
// • C. void setAge() {age = 10;}
// • D. void setAge(int a = 20) {age = a;}
// What happens when you attempt to compile and run the
// following code?
#include <iostream>
using namespace std;
class First
{
public:
    void Print() { cout << "from First"; }
};
class Second
{
public:
    void Print() { cout << "from Second"; }
};
int main()
{
    First FirstObject;
    FirstObject.Print();
    Second SecondObject;
    SecondObject.Print();
}
// • A. It prints: from First
// • B. It prints: from Firstfrom First
// • C. It prints: from Firstfrom Second
// • D. It prints: from Secondfrom Second
// What happens when you attempt to compile and run the
// following code?
#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
    char* s = "ABCDEF";
    cout << s + 2;
    return 0;
}
// • A. It prints: CDEF
// • B. It prints: ABCDEF
// • C. It prints: BCDEF
// • D. None of these
// Which of the following can be checked in a switch?case
// statement?
// • A. char
// • B. int
// • C. enum
// • D. double
// What happens when you attempt to compile and run the
// following code?
#include <iostream>
#include <string>
using namespace std;
class A {
    int x;
protected:
    int y;
public:
    int z;
};
class B : public A {
    string name;
public:
    void set() {
        y = 2;
        z = 3;
    }
    void Print() { cout << y << z; }
};
int main() {
    B b;
    b.set();
    b.Print();
    return 0;
}
// • A. It prints: 123
// • B. It prints: 000
// • C. It prints: 23
// • D. It prints: 12
// What happens when you attempt to compile and run the
// following code?
#include <iostream>
using namespace std;
class A
{
public:
    void Print() { cout << "A"; }
};
class B : public A
{
public:
    void Print() { cout << "B"; }
};
int main()
{
    A* obj;
    A ob1;
    obj = &ob1;
    obj->Print();
    B ob2;
    obj = &ob2;
    obj->Print();
}
// • A. It prints: AB
// • B. It prints: AA
// • C. It prints: BA
// • D. It prints: BB
// What happens when you attempt to compile and run the
// following code?
#include <iostream>
#include <string>
using namespace std;
class A {
protected:
    int y;
public:
    int x;
    int z;
    A() { x = 2; y = 2; z = 3; }
    A(int a, int b) : x(a), y(b) { z = x + y; }
    void Print() {
        cout << z;
    }
};
int main() {
    A a(2, 5);
    a.Print();
    return 0;
}
// • A. It prints: ?3
// • B. It prints: 2
// • C. It prints: 6
// • D. It prints: 5
// What happens when you attempt to compile and run the
// following code?
#include <iostream>
using namespace std;
void fun(int*);
int main()
{
    int i = 2;
    fun(&i);
    cout << i;
    return 0;
}
void fun(int* i)
{
    *i = *i * *i;
}
// • A. It prints: 1
// • B. It prints: 4
// • C. It prints: 10
// • D. It prints: 0
// Exam contains 220 questions
// Talk to us!
// Have any questions or issues? Please don't hesitate to contact
// us
// Certlibrary.com is owned by MBS Tech Limited: Room 1905
// Nam Wo Hong Building, 148 Wing Lok Street, Sheung Wan,
// Hong Kong. Company registration number: 2310926
// Certlibrary doesn't oﬀer Real Microsoft Exam Questions.
// Certlibrary Materials do not contain actual questions and
// answers from Cisco's Certiﬁcation Exams.
// CFA Institute does not endorse, promote or warrant the
// accuracy or quality of Certlibrary. CFA® and Chartered Financial
// Analyst® are registered trademarks owned by CFA Institute.
// Terms & Conditions | Privacy Policy
// 2024-07-19, 15:16
