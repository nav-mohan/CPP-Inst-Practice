/*
CPA Best Training Material and Practice Test Q&A from CertLibrary.com
certlibrary.com
14–18 minutes
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

class First {
public:
    void Print() { cout << "from First"; }
};

int main() {
    First t[2];
    for (int i = 0; i < 2; i++)
        t[i].Print();
    return 0;
}

/*
• A. It prints: from First
• B. It prints: from Firstfrom First
• C. Compilation error
• D. Runtime error.
*/

/*
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
    cout << i;
    return 0;
}

/*
• A. 1010
• B. 100
• C. 010
• D. None of these
*/

/*
What happens when you attempt to compile and run the following code?
*/

#include <iostream>
#include <string>
using namespace std;

class A {
public:
    int x;
    A() { x = 0; }
    A(int x) { this->x = x; }
};

class B : private A {
public:
    using A::x;
    B() { x = 1; }
    B(int x) { this->x = x; }
};

int main() {
    B c1;
    B c2(5);
    cout << c1.x;
    cout << c2.x;
    return 0;
}

/*
• A. It prints: 5
• B. It prints: 1 5
• C. It prints: 05
• D. It prints: 0
*/

/*
What happens when you attempt to compile and run the following code?
*/

#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    int a = 30, b = 1, c = 5, i = 10;
    i = b < a < c;
    cout << i;
    return 0;
}

/*
• A. compilation fails
• B. It prints: 10
• C. It prints: 0
• D. It prints: 1
*/

/*
What happens when you attempt to compile and run the following code?
*/

#include <iostream>
#include <string>
using namespace std;

class B;

class A {
    int age;
public:
    A() { age = 5; }
    friend class B;
};

class B {
    string name;
public:
    B() { name = "Bob"; }
    void Print(A ob) {
        cout << name << ob.age;
    }
};

int main() {
    A a;
    B b;
    b.Print(a);
    return 0;
}

/*
• A. It prints: Bob5
• B. It prints: Bob
• C. It prints: 5
• D. None of these
*/

/*
What happens when you attempt to compile and run the following code?
*/

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    if (--i == 1) {
        cout << i;
    } else {
        cout << i - 1;
    }
    return 0;
}

/*
• A. It prints: 0
• B. It prints: 1
• C. It prints: -1
• D. It prints: 2
*/

/*
What happens when you attempt to compile and run the following code?
*/

#include <iostream>
using namespace std;

void fun(int &i);

int main() {
    int i = 2;
    fun(i);
    cout << i;
    return 0;
}

void fun(int &i) {
    i += 2;
}

/*
• A. It prints: 2
• B. It prints: 0
• C. It prints: 4
• D. It prints: 16
*/

/*
What happens when you attempt to compile and run the following code?
*/

#include <iostream>
using namespace std;

int fun(int x);

int main() {
    cout << fun(0);
    return 0;
}

int fun(int x) {
    if (x > 0)
        return fun(x - 1);
    else
        return 100;
}

/*
• A. It prints: 0
• B. It prints: 10
• C. It prints: 100
• D. It prints: -1
*/

/*
What is the output of the program if character 2 is supplied as input?
*/

#include <iostream>
using namespace std;

int main() {
    int c;
    cin >> c;
    try {
        switch (c) {
        case 1:
            throw 20;
        case 2:
            throw 5.2f;
        }
    }
    catch (int e) {
        cout << "int exception. Exception № " << e;
    }
    catch (float e) {
        cout << "float exception. Exception № " << e;
    }
    catch (...) {
        cout << "An exception occurred.";
    }
    return 0;
}

/*
• A. It prints: float exception. Exception №
• B. It prints: int exception. Exception № 20
• C. It prints: An exception occurred
• D. It prints: float exception. Exception № 5.2
*/

/*
What is the output of the program if character 4 is supplied as input?
*/

#include <iostream>
using namespace std;

int main() {
    int c;
    cin >> c;
    try {
        switch (c) {
        case 1:
            throw 20;
        case 2:
            throw 5.2f;
        case 3:
            throw 'a';
        default:
            cout << "No exception";
        }
    }
    catch (int e) {
        cout << "int exception. Exception № " << e;
    }
    catch (float e) {
        cout << "float exception. Exception № " << e;
    }
    catch (...) {
        cout << "An exception occurred.";
    }
    return 0;
}

/*
• A. It prints: float exception. Exception №
• B. It prints: int exception. Exception №
• C. It prints: An exception occurred
• D. It prints: No exception
*/

/*
Exam contains 220 questions
Talk to us!
Have any questions or issues? Please don't hesitate to contact us
Certlibrary.com is owned by MBS Tech Limited: Room 1905 Nam Wo Hong Building, 148 Wing Lok Street, Sheung Wan, Hong Kong. Company registration number: 2310926
Certlibrary doesn't offer Real Microsoft Exam Questions.
Certlibrary Materials do not contain actual questions and answers from Cisco's Certification Exams.
CFA Institute does not endorse, promote or warrant the accuracy or quality of Certlibrary. CFA® and Chartered Financial Analyst® are registered trademarks owned by CFA Institute.
Terms & Conditions | Privacy Policy
*/
