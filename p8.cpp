// What happens when you attempt to compile and run the
// following code?
#include <iostream>
#include <string>
using namespace std;

class A {
public:
    A() { cout << "A0 "; }
    A(string s) { cout << "A1"; }
};

class B : public A {
public:
    B() { cout << "B0 "; }
    B(string s) { cout << "B1 "; }
};

class C : private B {
public:
    C() { cout << "C0 "; }
    C(string s) { cout << "C1 "; }
};

int main() {
    B b1;
    C c1;
    return 0;
}
// • A. It prints: A0 B0 A0 B1 A0 C0 A0 C1
// • B. It prints: B0 B1 C0 C1
// • C. It prints: A0 B0 A0 B0 C0
// • D. It prints: B0 B1

// What is the output of the program?
#include <iostream>
#include <string>
using namespace std;

struct Person {
    int age;
};

class First {
    Person *person;
public:
    First() {
        person = new Person;
        person->age = 20;
    }
    void Print() {
        cout << person->age;
    }
};

int main() {
    First t[2];
    for (int i = 0; i < 2; i++)
        t[i].Print();
}
// • A. It prints: 10
// • B. It prints: 2020
// • C. It prints: 22
// • D. It prints: 00

// What happens when you attempt to compile and run the
// following code?
#include <cstdlib>
#include <iostream>
using namespace std;

inline float sum(float a, float b) {
    return a + b;
}

int main() {
    float a, b;
    a = 1.5; b = 3.4;
    cout << sum(a, b);
    return 0;
}
// • A. It prints: 0
// • B. It prints: 4.9
// • C. It prints: 5
// • D. It prints: 4

// What is the output of the program?
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";
    s1 += s2;
    cout << s1;
    return 0;
}
// • A. It prints: HelloWorld
// • B. It prints: Hello
// • C. It prints: World
// • D. It prints: HelWorld

// What happens when you attempt to compile and run the
// following code?
#include <iostream>
using namespace std;

#define DEF_A 0
#define DEF_B DEF_A + 1
#define DEF_C DEF_B + 1

int main(int argc, char *argv[]) {
    cout << DEF_C;
    return 0;
}
// • A. It prints: 2
// • B. It prints: 10
// • C. It prints: 0
// • D. It prints: 1

// What happens when you attempt to compile and run the
// following code?
#include <iostream>
using namespace std;

void set(struct person*);

struct person {
    int age;
};

int main() {
    struct person e = {18};
    set(&e);
    cout << e.age;
    return 0;
}

void set(struct person *p) {
    p->age = p->age + 1;
}
// • A. It prints: 18
// • B. It prints: 19
// • C. It prints: 20
// • D. It prints: 0

// Point out an error in the program.
#include <iostream>
using namespace std;

int main() {
    const int x = 1;
    int const *y = &x;
    cout << *y;
    return 0;
}
// • A. No error
// • B. Error: unknown pointer conversion
// • C. cannot convert from 'const int *' to 'int *const'
// • D. Compilation error

// What happens when you attempt to compile and run the
// following code?
#include <iostream>
using namespace std;

int main() {
    int i = 2;
    switch (i) {
        case 1:
            cout << "Hello";
        case 2:
            cout << "world";
        case 3:
            cout << "End";
    }
    return 0;
}
// • A. It prints: Hello
// • B. It prints: world
// • C. It prints: worldEnd
// • D. It prints: End

// What happens when you attempt to compile and run the
// following code?
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
    complex c1;
    double i = 2;
    c1 = i;
    c1.print();
    return 0;
}
// • A. It prints: 0 0
// • B. It prints: 1 1
// • C. It prints: 2 0
// • D. It prints: 2 2

// What happens when you attempt to compile and run the
// following code?
#include <iostream>
#include <string>
using namespace std;

int f(int i, int b);

int main() {
    int i = 0;
    i++;
    for (i = 0; i <= 2; i++) {
        cout << f(0, i);
    }
    return 0;
}

int f(int a, int b) {
    return a + b;
}
// • A. It prints: 202020
// • B. It prints: 012
// • C. It prints: 0
// • D. It prints: 2

// Exam contains 220 questions
// Talk to us!
// Have any questions or issues ? Please dont hesitate to contact
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
// 2024-07-19, 15:17
