// What happens when you attempt to compile and run the
// following code?
#include <iostream>
using namespace std;

int main()
{
    int x = 2, *y;
    y = &x;
    cout << *y + x;
    return 0;
}
// • A. It prints: 1
// • B. It prints: 2
// • C. It prints: 4
// • D. It prints: 0

// What happens when you attempt to compile and run the
// following code?
#include <iostream>
using namespace std;

int main() {
    int *i;
    i = new int;
    *i = 1.0 / 2 * 2 / 1 * 2 / 4 * 4;
    cout << *i;
    return 0;
}
// • A. It prints: 0
// • B. It prints: 1
// • C. It prints: 2
// • D. It prints: 0.5

// Which of the following statements are correct about an array? int
// tab[10];
// • A. The array can store 10 elements.
// • B. The expression tab[1] designates the very ﬁrst element in the
// array.
// • C. The expression tab[9] designates the last element in the
// array.
// • D. It is necessary to initialize the array at the time of declaration.

// Which of the following is a logical operator?
// • A. &
// • B. &&
// • C. ||
// • D. !

// How could you pass arguments to functions?
// • A. by value
// • B. by reference
// • C. by pointer
// • D. by void

// What happens when you attempt to compile and run the
// following code?
#include <iostream>
using namespace std;

int main() {
    int i, j;
    for (i = 0, j = 1; j < 2, i < 4; i++, j++);
    cout << i << " " << j;
    return 0;
}
// • A. It prints: 4 5
// • B. It prints: 2 3
// • C. It prints: 3 2
// • D. It prints: 4 3

// What happens when you attempt to compile and run the
// following code?
#include <iostream>
#include <cstdarg>
using namespace std;

int mult(int f, int s, int t);
int main() {
    cout << mult(1, 2, 3);
    return 0;
}

int mult(int f, int s, int t) {
    int mult_res;
    mult_res = f * s * t;
    return mult_res;
}
// • A. It prints: 0
// • B. It prints: 6
// • C. It prints: 2
// • D. It prints: 3

// Which code, inserted at line 5, generates the output "ABC"?
#include <iostream>
using namespace std;

class A {
public:
    //insert code here
};

class B : public A {
public:
    void Print() { cout << "B"; }
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
}
// • A. void Print(){ cout<<"A";}
// • B. virtual void Print(){ cout<<"A";}
// • C. virtual void Print(string s){ cout<<s;}
// • D. None of these

// What happens when you attempt to compile and run the
// following code?
#include <iostream>
using namespace std;

class BaseClass {
public:
    int *ptr;
    BaseClass(int i) { ptr = new int(i); }
    ~BaseClass() { delete ptr; delete ptr; }
    void Print() { cout << *ptr; }
};

void fun(BaseClass x);

int main() {
    BaseClass o(10);
    fun(o);
    o.Print();
}

void fun(BaseClass x) {
    cout << "Hello:";
}
// • A. It prints: Hello:1
// • B. It prints: Hello:
// • C. It prints: 10
// • D. Runtime error.

// What will happen when you attempt to compile and run the
// following code?
#include <iostream>
using namespace std;

int getValue();

int main() {
    const int x = getValue();
    cout << x;
    return 0;
}

int getValue() {
    return 5;
}
// • A. It will print 0
// • B. The code will not compile.
// • C. It will print 5
// • D. It will print garbage value

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
// 2024-07-19, 15:16
