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

int main() {
    A *obj;
    A ob1;
    obj = &ob1;
    obj->Print(); // should be obj->Print()
    B ob2;
    obj = &ob2;
    obj->Print(); // should be obj->Print()
    return 0;
}

/*
CPA Best Training Material and Practice Test Q&A fr...
1 of 9
about:reader?url=https%3A%2F%2Fwww.certlibrary...
certlibrary.com
CPA Best Training Material and
Practice Test Q&A from
CertLibrary.com
14–17 minutes
• Exam List
• navaneeth account
• Log Out
• Contact
• Blog
C++ Certiﬁed Associate Programmer v6.0
Exam contains 220 questions
*/

#include <iostream>
using namespace std;

int main() {
    const int x = 0;
    const int *ptr;
    ptr = &x;
    cout << *ptr;
    return 0;
}

/*
2 of 9
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: 0
• B. It prints address of x
• C. It prints: 1
• D. Compilation error
*/

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    for (i = 10; i > -1; i /= 2) {
        if (!i)
            break;
    }
    cout << i;
    return 0;
}

/*
3 of 9
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: 0
• B. It prints: 1
• C. It prints: -1
• D. Compilation error
*/

#include <iostream>
#include <string>
using namespace std;

class A {
public:
    int x;
    A() { x = 0; }
};

class B {
public:
    int x;
    B() { x = 1; }
};

class C : public A, public B {
public:
    int x;
    C(int x) {
        this->x = x;
        // A::x = x + 1;
    }
    void Print() {
        cout << x << A::x << B::x;
    }
};

int main() {
    C c2(1);
    c2.Print();
    return 0;
}

/*
4 of 9
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: 1
• B. It prints: 121
• C. It prints: 111
• D. It prints: 2
*/

#include <iostream>
using namespace std;

namespace myNamespace1 {
    int x = 5;
    int y = 10;
}

namespace myNamespace2 {
    float x = 3.14;
    float y = 1.5;
}

int main() {
    {
        using namespace myNamespace1;
        cout << x << " ";
    }
    {
        using namespace myNamespace2;
        cout << y;
    }
    return 0;
}

/*
5 of 9
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: 5 1.5
• B. It prints: 3.14 10
• C. Compilation error
• D. None of these
*/

#include <iostream>
using namespace std;

int main() {
    float i = 1.0 / 2 * 2 / 1 * 2 / 4 * 4 / 2;
    cout << i;
    return 0;
}

/*
6 of 9
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: 0
• B. It prints: 1
• C. It prints: 2
• D. It prints: 0.5
*/

#include <iostream>
#include <string>
using namespace std;

class First {
    string name;
public:
    First() {
        name = "Alan";
    }
    void Print() {
        cout << name;
    }
};

int main() {
    First ob1, *ob2;
    ob2 = new First();
    ob1.Print();
    ob2->Print();
    delete ob2;
    return 0;
}

/*
7 of 9
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. Garbage value
• B. It prints: AlanAlan
• C. It prints: Alan
• D. It prints: Al
*/

class A {
    int x;
protected:
    int y;
public:
    int age;
};

class B : protected A {
    string name;
public:
    void Print() {
        cout << name << age;
    }
};

/*
8 of 9
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. public
• B. private
• C. protected
• D. None of these
*/

#include <iostream>
using namespace std;

int main() {
    const int x = 20;
    const int *ptr;
    ptr = &x;
    // *ptr = 10; // Compilation error: cannot modify a const object
    cout << *ptr;
    return 0;
}

/*
9 of 9
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: 20
• B. It prints: 10
• C. Compilation error at line 8
• D. It prints address of ptr
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
        int i = 5;
        cout << i;
    }
    cout << i;
    return 0;
}

/*
A. 1010 -
B. 101010 -
C. 0510 -
D. None of these -
Answer : C Topic 2, Volume B
*/
