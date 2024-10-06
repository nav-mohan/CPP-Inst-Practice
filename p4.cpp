// CPA Best Training Material and Practice Test Q&A from CertLibrary.com

#include <iostream>
#include <string>
using namespace std;

class A {
public:
    int x;
};

class B : public A {
public:
    B() { x = 1; }
    B(int x) { this->x = x; }
};

int main() {
    B c1;
    B c2(10);
    cout << c1.x;
    cout << c2.x;
    return 0;
}

// A. It prints: 010
// B. It prints: 110
// C. It prints: 00
// D. It prints: 1

#include <iostream>
using namespace std;

void fun(char*);

int main() {
    char t[4] = { '0', '1', '2', '3' };
    fun(&t[2]);
    return 0;
}

void fun(char *a) {
    cout << *a;
}

// A. It prints: 2
// B. It prints: 21
// C. It prints: 00
// D. It prints: 02

#include <iostream>
#include <string>
using namespace std;

class A {
public:
    A() { cout << "A no parameters"; }
    A(string s) { cout << "A string parameter"; }
    A(A &a) { cout << "A object A parameter"; }
};

class B : public A {
public:
    B() { cout << "B no parameters"; }
    B(string s) { cout << "B string parameter"; }
};

int main() {
    A a2("Test");
    B b1("Alan");
    B b2(b1);
    return 0;
}

// A. It prints: A no parametersA no parametersB string parameter
// B. It prints: A string parameterA no parametersB string parameterA object A parameter
// C. It prints: A no parametersB string parameter
// D. It prints: A no parametersA no parameters

#include <iostream>
#include <string>
using namespace std;

class A {
public:
    string s;
    A(string s) { this->s = s; }
};

class B {
public:
    string s;
    B (A a) { this->s = a.s; }
    void print() { cout << s; }
};

int main() {
    A a("Hello world");
    B b = a;
    b.print();
    return 0;
}

// A. It prints: Hello world
// B. It prints: Hello
// C. Compilation error
// D. None of these

#include <iostream>
using namespace std;

int op(int x, int y);

int main() {
    float *pf;
    float f = 0.9;
    pf = &f;
    cout << op(1, *pf);
    return 0;
}

int op(int x, int y) {
    return x * y;
}

// A. It prints: 0
// B. It prints: 0.5
// C. It prints: 1
// D. It prints: -1

#include <iostream>
#include <string>
using namespace std;

class First {
    string *s;
public:
    First() { s = new string("Text"); }
    ~First() { delete s; }
    void Print() { cout << *s; }
};

int main() {
    First FirstObject;
    FirstObject.Print();
    FirstObject.~First();
    return 0;
}

// A. It prints: Text
// B. Compilation error
// C. Runtime error
// D. None of these

#include <iostream>
using namespace std;

class A {
public:
    virtual void Print() { cout << "A"; }
};

class B : public A {
public:
    void Print() { cout << "B"; }
};

int main() {
    A *obj;
    A ob1;
    obj = &ob1;
    obj->Print();
    B ob2;
    obj = &ob2;
    obj->Print();
    return 0;
}

// A. It prints: AB
// B. It prints: AA
// C. It prints: BA
// D. It prints: BB

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s;
    s = "Test";
    s.resize(s.size() ? 1 : 0);
    cout << s << " " << s.size();
    return 0;
}

// A. It prints: Test 4
// B. It prints: Test 3
// C. Compilation error
// D. It prints: Tes 3

#include <iostream>
using namespace std;

class A {
public:
    int x;
    A() { x = 0; }
};

class B : public A {
public:
    B() { x = 1; }
};

class C : private B {
public:
    C() { x = 2; }
};

int main() {
    C c1;
    cout << c1.x;
    return 0;
}

// A. It prints: 210
// B. It prints: 110
// C. It prints: 010
// D. Compilation error

#include <iostream>
#include <string>
using namespace std;

class A {
public:
    A() { cout << "A no parameters"; }
    A(string s) { cout << "A string parameter"; }
    A(A &a) { cout << "A object A parameter"; }
};

class B : public A {
public:
    B() { cout << "B no parameters"; }
    B(string s) { cout << "B string parameter"; }
    B(int s) { cout << "B int parameter"; }
};

int main() {
    A a2("Test");
    B b1(10);
    B b2(b1);
    return 0;
}

// A. It prints: A no parametersA no parametersB string parameter
// B. It prints: A string parameterA no parametersB int parameterA object A parameter
// C. It prints: A no parametersB string parameter
// D. It prints: A no parametersA no parameters

// Exam contains 220 questions