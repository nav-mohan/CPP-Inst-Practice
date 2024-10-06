// CPA Best Training Material and Practice Test Q&A from CertLibrary.com

// What happens when you attempt to compile and run the following code?
#include <iostream>
#include <string>
using namespace std;
class complex {
    double re, im;
public:
    complex() : re(1), im(0.4) {}
    complex operator+(complex &t);
    void Print() { cout << re << " " << im; }
};
complex complex::operator+ (complex &t) {
    complex temp;
    temp.re = this->re + t.re;
    temp.im = this->im + t.im;
    return temp;
}
int main() {
    complex c1, c2, c3;
    c3 = c1 + c2;
    c3.Print();
}
// A. It prints: 1 0.4
// B. It prints: 2 0.8
// C. It prints: 0 0
// D. Garbage value

// What happens when you attempt to compile and run the following code?
#include <cstdlib>
#include <iostream>
using namespace std;
float* sum(float a, float b);
float* sum(float a, float b) {
    float *f = new float;
    *f = a + b;
    return f;
}
int main() {
    float a, b, *f;
    a = 1.5; b = 3.4;
    f = sum(a, b);
    cout << *f;
    return 0;
}
// A. It prints: 0
// B. It prints: 4.9
// C. It prints: 5
// D. It prints: 4

// Which statement should be added in the following program to make it work correctly?
using namespace std;
int main (int argc, const char * argv[]) {
    cout << "Hello";
}
// A. #include<stdio.h>
// B. #include<stdlib.h>
// C. #include <iostream>
// D. #include<conio.h>

// What is the output of the program?
#include <iostream>
using namespace std;
int main() {
    int tab[4] = {10, 20, 30, 40};
    tab[1] = 10;
    int *p;
    p = &tab[0];
    cout << *p;
    return 0;
}
// A. It prints: 10
// B. It prints: 20
// C. It prints: 11
// D. It prints: 30

// What happens when you attempt to compile and run the following code?
#include <iostream>
using namespace std;
int fun(int x) {
    return 2 * x;
}
int main() {
    int i;
    i = fun(1) & fun(0);
    cout << i;
    return 0;
}
// A. It prints: 0
// B. It prints: 1
// C. It prints: -1
// D. Compilation error

// What happens when you attempt to compile and run the following code?
#include <iostream>
using namespace std;
class A {
public:
    virtual void Print() = 0;
};
class B : public A {
public:
    virtual void Print() { cout << "B"; }
};
class C : public A {
public:
    virtual void Print() { cout << "C"; }
};
int main() {
    B ob2;
    C ob3;
    A *obj;
    obj = &ob2;
    obj->Print();
    obj = &ob3;
    obj->Print();
}
// A. It prints: BC
// B. It prints: CB
// C. It prints: CC
// D. It prints: BB

// What will the variable "age" be in class B?
class A {
    int x;
protected:
    int y;
public:
    int age;
};
class B : private A {
    string name;
public:
    void Print() {
        cout << name << age;
    }
};
// A. public
// B. private
// C. protected
// D. None of these

// What happens when you attempt to compile and run the following code?
#include <iostream>
using namespace std;
int x = 5;
static int y;
int i = 0;
void static myFunction() {
    y = x++ + ++i;
}
int main (int argc, const char * argv[]) {
    x++;
    myFunction();
    cout << y << " " << x << " " << i;
}
// A. Compilation fails
// B. It prints: 5 5 0
// C. It prints: 7 7 1
// D. It prints: 6 5 1

// Which of the structures is incorrect?
struct s1 {
    int x;
    long int li;
};
struct s2 {
    float f;
    struct s2 *s;
};
struct s3 {
    float f;
    struct s3 s;
};
// A. 1
// B. 2
// C. 3
// D. 2, 3

// What is the output of the program?
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1 = "Wo";
    string s2;
    s2 = s1;
    string s3;
    s3 = s2.append("rldHello");
    cout << s3;
    return 0;
}
// A. It prints: WorldHello
// B. It prints: HelloWo
// C. It prints: World
// D. It prints: Hello

// Exam contains 220 questions
