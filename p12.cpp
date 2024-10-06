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
    Second t[2];
    for (int i = 0; i < 2; i++)
        t[i].Print();
}
// • A. It prints: from First
// • B. It prints: from Firstfrom First
// • C. It prints: from Secondfrom Second
// • D. It prints: from Second

// What happens when you attempt to compile and run the
// following code?
#include <iostream>
using namespace std;
void fun(int *);
int main()
{
    int *x;
    int i = 2;
    x = &i;
    fun(x);
    cout << i;
    return 0;
}
void fun(int *i)
{
    *i = *i * *i;
}
// • A. It prints: 2
// • B. It prints: 4
// • C. It prints: 0
// • D. It prints: 1

// What happens when you attempt to compile and run the
// following code?
#include <iostream>
#include <string>
using namespace std;
class complex
{
    double re, im;

public:
    complex() : re(1), im(0.3) {}
    complex(double n)
    {
        re = n, im = n;
    };
    complex(int m, int n)
    {
        re = m, im = n;
    }
    complex operator+(complex &t);
    void Print() { cout << re << " " << im; }
};
complex complex::operator+(complex &t)
{
    complex temp;
    temp.re = this->re + t.re;
    temp.im = this->im + t.im;
    return temp;
}
int main()
{
    complex c1(1), c2(2), c3;
    c3 = c1 + c2;
    c3.Print();
}
// • A. It prints: 1 1.5
// • B. It prints: 2 1.5
// • C. It prints: 3 3
// • D. It prints: 0 0

// What happens when you attempt to compile and run the
// following code?
#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    do
    {
        i++;
        if (i == 3)
            break;
        cout << i;
    } while (i < 5);
    return 0;
}
// • A. It prints: 12
// • B. It prints: 1
// • C. It prints: 0
// • D. No output

// What happens when you attempt to compile and run the
// following code?
#include <iostream>
using namespace std;
int compare(int, int);
int main()
{
    int x = compare(10, 20);
    cout << x;
    return 0;
}
int compare(int i, int j)
{
    return i < j;
}
// • A. It prints: 0
// • B. It prints: 2
// • C. It prints: 1
// • D. It prints: 10

// What happens when you attempt to compile and run the
// following code?
#include <iostream>
using namespace std;
int main()
{
    int x, y = 10;
    float f;
    f = 5.90;
    cout << f << ", ";
    x = f;
    cout << x << ", ";
    f = y;
    cout << f;
    return 0;
}
// • A. It prints: 5, 5, 10.00
// • B. It prints: 5.9, 5, 10
// • C. It prints: 6, 5, 10
// • D. It prints: 6, 5, 10.00

// What happens when you attempt to compile and run the
// following code?
#include <iostream>
#include <string>
using namespace std;
const int size = 3;
class A
{
public:
    string name;
    A() { name = "Bob"; }
    A(string s) { name = s; }
    A(A &a) { name = a.name; }
};
class B : public A
{
public:
    int *tab;
    B()
    {
        tab = new int[size];
        for (int i = 0; i < size; i++)
            tab[i] = 1;
    }
    B(string s) : A(s)
    {
        tab = new int[size];
        for (int i = 0; i < size; i++)
            tab[i] = 1;
    }
    ~B() { delete tab; }
    void Print()
    {
        for (int i = 0; i < size; i++)
            cout << tab[i];
        cout << name;
    }
};
int main()
{
    B b1("Alan");
    B b2;
    b1.tab[0] = 0;
    b1.Print();
    b2.Print();
    return 0;
}
// • A. It prints: Alan
// • B. It prints: 111
// • C. It prints: 011Alan111Bob
// • D. It prints: 0

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
    virtual void Print() { cout << "B"; }
};
class C : public B
{
public:
    void Print() { cout << "C"; }
};
int main()
{
    A ob1;
    B ob2;
    C ob3;
    B *obj;
    obj = &ob2;
    obj->Print();
    obj = &ob3;
    obj->Print();
}
// • A. It prints: BB
// • B. It prints: AA
// • C. It prints: BC
// • D. It prints: AB

// What is the output of the program?
#include <iostream>
using namespace std;
class Base
{
    static int age;

public:
    Base(){};
    ~Base(){};
    void setAge(int a = 10) { age = a; }
    void Print() { cout << age; }
};
int Base::age = 0;
int main()
{
    Base a, *b;
    b = new Base();
    a.setAge();
    b->setAge(20);
    a.Print();
    b->Print();
    return 0;
}
// • A. It prints: 2020
// • B. It prints: 1020
// • C. It prints: 20
// • D. It prints: 10

// What happens when you attempt to compile and run the
// following code?
#include <iostream>
#include <string>
using namespace std;
class A
{
    int x;

protected:
    int y;

public:
    int z;
};
class B : private A
{
    string name;

public:
    void set()
    {
        x = 1;
    }
    void Print()
    {
        cout << x;
    }
};
int main()
{
    B b;
    b.set();
    b.Print();
    return 0;
}
// • A. It prints: 123
// • B. It prints: 1
// • C. It prints: ?123
// • D. Compilation error

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

