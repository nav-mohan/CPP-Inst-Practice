#include <iostream>
using namespace std;

class Test {
    float i, j;
};

class Add {
public:
    int x, y;
    Add(int a = 3, int b = 3) { x = a; y = b; }
    int result() { return x + y; }
};

int main() {
    Test test;
    Add *padd;
    padd = &test;
    cout << padd->result();
    return 0;
}

/* 
What happens when you attempt to compile and run the
following code?
*/

#include <iostream>
using namespace std;

class BaseC {
    int *ptr;
public:
    BaseC() { ptr = new int(10); }
    BaseC(int i) { ptr = new int(i); }
    ~BaseC() { delete ptr; }
    void Print() { cout << *ptr; }
};

int main() {
    BaseC *o = new BaseC(5);
    o->Print();
    return 0;
}

/*
2 of 9
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: 5
• B. It prints: 10
• C. It prints: 1
• D. It prints: 0
What will happen when you attempt to compile and run the
following code?
*/

#include <iostream>
using namespace std;

int main() {
    const char *s;
    char str[] = "Hello ";
    s = str;
    // E O
    while (*s) {
        cout << *++s;
        *s++;
    }
    return 0;
}

/*
3 of 9
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It will print:"el "
• B. The code will not compile.
• C. It will print:"Hello "
• D. It will print garbage value
*/

#include <iostream>
using namespace std;

class A {
public:
    void print() {
        cout << "A ";
    }
};

class B {
public:
    void print() {
        cout << "B ";
    }
};

int main() {
    B sc[2];
    A *bc = (A*)sc;
    for (int i = 0; i < 2; i++)
        (bc++)->print();
    return 0;
}

/*
4 of 9
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: A A
• B. It prints: B B
• C. It prints: A B
• D. It prints: B A
What happens when you attempt to compile and run the
following code?
*/

#include <iostream>
using namespace std;

int main() {
    int x, y = 10;
    float f;
    f = 5.20;
    x = (int) f;
    cout << x << ", ";
    f = float(y);
    cout << f;
    return 0;
}

/*
5 of 9
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: 5, 10
• B. It prints: 5.2, 10
• C. It prints: 5.20, 10.0
• D. It prints: 5.2, 10.00
What happens when you attempt to compile and run the
following code?
*/

#include <iostream>
using namespace std;

int op(int x, int y) {
    return x ? y : 0;
}

int op(int x, float y) {
    return x + y;
}

int main() {
    int i = 1, j = 2, k, l;
    float f = 0.23;
    k = op(i, j);
    l = op(j, f);
    cout << k << ", " << l;
    return 0;
}

/*
6 of 9
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: ?1,?1
• B. It prints: ?1,3
• C. It prints: ?1,2
• D. Compilation fails
*/

#include <iostream>
#include <string>
using namespace std;

class B;

class A {
    int age;
public:
    A() { age = 5; }
    friend void Print(A &ob, B &so);
};

class B {
    string name;
public:
    B() { name = "Bob"; }
};

void Print(A &ob, B &so) {
    cout << ob.age << " " << so.name;
}

int main() {
    A a;
    B b;
    Print(a, b);
    return 0;
}

/*
7 of 9
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. friend void Print(A ob, B so);
• B. friend void Print(A &ob, B &so);
• C. friend void Print(A *ob, B *so);
• D. None of these
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    cout << s << " " << s.length();
    return 0;
}

/*
8 of 9
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: test 4
• B. It prints: test
• C. It prints: test 5
• D. It prints: 4
*/

#include <iostream>
using namespace std;

class A {
public:
    int i;
};

int main() {
    int c;
    A obj;
    obj.i = 5;
    cin >> c;
    try {
        switch (c) {
        // case handlers
        }
    } catch (...) {
        cout << "An exception occurred";
    }
    return 0;
}

/*
9 of 9
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: object exception. Exception № 5
• B. It prints: int exception. Exception №
• C. It prints: An exception occurred
• D. It prints: No exception
Exam contains 220 questions
*/
