/*
CPA Best Training Material and Practice Test Q&A from CertLibrary.com
Exam contains 220 questions

What happens when you attempt to compile and run the following code?
*/

#include <iostream>
using namespace std;
class complex {
    double re;
    double im;
public:
    complex() : re(0), im(0) {}
    complex(double x) { re = x, im = x; }
    complex(double x, double y) { re = x, im = y; }
    void print() { cout << re << " " << im; }
};
int main() {
    complex c1(1, 2);
    c1.print();
    return 0;
}

/*
A. It prints: 1 0
B. It prints: 1 1
C. It prints: 1 2
D. Compilation error

What happens when you attempt to compile and run the following code?
*/

#include <iostream>
using namespace std;
int fun(int x) {
    return x << 2;
}
int main() {
    int i;
    i = fun(1) / 2;
    cout << i;
    return 0;
}

/*
A. It prints: 0
B. It prints: 1
C. It prints: 2
D. It prints: 4

What happens when you attempt to compile and run the following code?
*/

#include <iostream>
#include <string>
using namespace std;
class A {
    int x;
protected:
    int y;
public:
    int z;
    A() { x = 1; y = 2; z = 3; }
};
class B : public A {
    string z;
public:
    void set() {
        y = 4;
        z = "John";
    }
    void Print() {
        cout << y << z;
    }
};
int main() {
    B b;
    b.set();
    b.Print();
    return 0;
}

/*
A. It prints: 4John
B. It prints: 2John
C. It prints: 23
D. It prints: 43

What happens when you attempt to compile and run the following code?
*/

#include <iostream>
#include <string>
using namespace std;
const int size = 3;
class A {
public:
    string name;
    A() { name = "Bob"; }
    A(string s) { name = s; }
    A(A &a) { name = a.name; }
};
class B : public A {
public:
    B() {}
    B(string s) : A(s) {}
    void Print() {
        cout << name;
    }
};
int main() {
    B b1("Alan");
    b1.Print();
    return 0;
}

/*
A. It prints: 111Alan
B. It prints: Bob
C. It prints: Alan
D. It prints: 0

What is the output of the program given below?
*/

#include <iostream>
using namespace std;
int main(int argc, const char *argv[]) {
    int i = 10;
    {
        int i = 0;
        cout << i;
    }
    {
        i = 5;
        cout << i;
    }
    cout << i;
    return 0;
}

/*
A. 1010
B. 101010
C. 055
D. None of these

What happens when you attempt to compile and run the following code?
*/

#include <iostream>
using namespace std;
int main(int argc, const char *argv[]) {
    int x, y;
    union t {
        char tab[2];
        int i;
    };
    union t u;
    u.tab[0] = 1;
    u.tab[1] = 2;
    u.i = 0;
    x = u.tab[0];
    y = u.tab[1];
    cout << x << "," << y << "," << u.i;
    return 0;
}

/*
A. compilation fails
B. It prints: 0,0,0
C. It prints: 1,2,0
D. None of these

What happens when you attempt to compile and run the following code?
*/

#include <iostream>
#include <string>
using namespace std;
class A {
protected:
    int y;
public:
    int x, z;
    A() : x(1), y(2), z(0) { z = x + y; }
    A(int a, int b) : x(a), y(b) { z = x + y; }
    void Print() { cout << z; }
};
class B : public A {
public:
    int y;
    B() : A() {}
    B(int a, int b) : A(a, b) {}
    void Print() { cout << z; }
};
int main() {
    A b;
    b.Print();
    return 0;
}

/*
A. It prints: 3
B. It prints: 0
C. It prints: 1
D. It prints: 2

Which code, inserted at line 10, generates the output "Hello World"?
*/

#include <iostream>
#include <string>
using namespace std;
string fun(string, string);
int main() {
    string s = "Hello";
    string *ps;
    ps = &s;
    //insert code here
    return 0;
}
string fun(string s1, string s2) {
    return s1 + s2;
}

/*
A. cout << fun(" World");
B. cout << fun(*ps);
C. cout << fun("Hello");
D. cout << fun("Hello", " World");

What happens when you attempt to compile and run the following code?
*/

#include <iostream>
using namespace std;
int x = 5;
static int y = 0;
void myFunction(int a) {
    y = ++a;
}
int main(int argc, const char *argv[]) {
    int i = 0;
    myFunction(i);
    cout << y << " " << x;
    return 0;
}

/*
A. It prints: 0 5
B. It prints: 5 1
C. It prints: 1 5
D. It prints: 5 0

What happens when you attempt to compile and run the following code?
*/

#include <iostream>
using namespace std;
class A {
public:
    void Print() { cout << "A"; }
};
class B : public A {
public:
    virtual void Print() { cout << "B"; }
};
class C : public B {
public:
    void Print() { cout << "C"; }
};
int main() {
    A ob1;
    B ob2;
    C ob3;
    A *obj;
    obj = &ob1;
    obj->Print();
    obj = &ob2;
    obj->Print();
    obj = &ob3;
    obj->Print();
    return 0;
}

/*
A. It prints: BBB
B. It prints: AAA
C. It prints: ABC
D. It prints: ABB

Exam contains 220 questions
Talk to us! Have any questions or issues? Please don't hesitate to contact us.
Certlibrary.com is owned by MBS Tech Limited: Room 1905 Nam Wo Hong Building, 148 Wing Lok Street, Sheung Wan, Hong Kong. Company registration number: 2310926
Certlibrary doesn't offer Real Microsoft Exam Questions.
Certlibrary Materials do not contain actual questions and answers from Cisco's Certification Exams.
CFA Institute does not endorse, promote or warrant the accuracy or quality of Certlibrary. CFA® and Chartered Financial Analyst® are registered trademarks owned by CFA Institute.
Terms & Conditions | Privacy Policy
*/
