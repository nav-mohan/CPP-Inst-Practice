#include <iostream>
using namespace std;

int main() {
    char s1[] = "Hello";
    char s2[] = "world";
    char *const ptr = s1;
    *ptr = 'a';
    ptr = s2; // Error: Cannot assign to variable 'ptr' with const-qualified type 'char *const'
    return 0;
}

/*
CPA Best Training Material and Practice Test Q&A fr...
1 of 8
about:reader?url=https%3A%2F%2Fwww.certlibrary...
certlibrary.com
CPA Best Training Material and
Practice Test Q&A from
CertLibrary.com
14–18 minutes
• Exam List
• navaneeth account
• Log Out
• Contact
• Blog
C++ Certiﬁed Associate Programmer v6.0
Exam contains 220 questions
Point out an error in the program.
*/

#include <iostream>
using namespace std;

int main() {
    int x = 20;
    int *ptr;
    ptr = &x;
    cout << *ptr;
    return 0;
}

/*
2 of 8
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: 20
• B. It prints: 0
• C. It prints address of ptr
• D. It prints: 2
*/

#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int *ptr;
    ptr = &x;
    cout << x << " " << *ptr;
    return 0;
}

/*
3 of 8
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: 0 0
• B. It prints address of ptr
• C. It prints: 1
• D. It prints: 2
*/

#include <iostream>
#include <exception>
using namespace std;

int main() {
    try {
        int *myarray = new int[1000];
    }
    catch (bad_alloc&) {
        cout << "Error allocating memory";
    }
    catch (exception& e) {
        cout << "Standard exception";
    }
    catch (...) {
        cout << "Unknown exception";
    }
    return 0;
}

/*
4 of 8
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: Error allocating memory
• B. It prints: Standard exception
• C. It prints: Unknown exception
• D. Compilation error
*/

#include <iostream>
using namespace std;

struct {
    int x;
    char c;
    union {
        float f;
        int i;
    };
} s;

int main(int argc, const char * argv[]) {
    s.x = 10;
    s.i = 0;
    cout << s.i << " " << s.x;
    return 0;
}

/*
5 of 8
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: 0 10
• B. It prints: 11
• C. Compilation error
• D. None of these
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello", s2 = "World";
    s2 = s1 + s2;
    cout << s2;
    return 0;
}

/*
6 of 8
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: Hello
• B. It prints: HelloWorld
• C. It prints: WorldHello
• D. It prints: WorldHelloWorld
*/

#include <iostream>
using namespace std;

int main() {
    int *t;
    t = new int[2];
    for (int i = 0; i < 2; i++) {
        t[i] = 0;
    }
    cout << t[1];
    return 0;
}

/*
7 of 8
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: 0
• B. It prints: 1
• C. It prints: 2
• D. It prints: 3
*/

#include <iostream>
using namespace std;

int main() {
    int x = 2, *y, z = 3;
    y = &z;
    cout << x * *y * x * **&y; // Error: Incorrect pointer dereference
    return 0;
}

/*
8 of 8
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: 36
• B. It prints: 14
• C. It prints: 16
• D. Compilation error
*/

#include <iostream>
using namespace std;

#define DEF_A 0

int main(int argc, char *argv[]) {
    cout << DEF_A;
    return 0;
}

/*
9 of 8
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: 1
• B. It prints: 0
• C. It prints: ?1
• D. Compilation error
*/

#include <iostream>
#include <exception>
using namespace std;

class myClass : public exception {
    virtual const char* what() const throw() {
        return "My exception.";
    }
} obj;

int main() {
    try {
        throw obj;
    }
    catch (exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}

/*
10 of 8
about:reader?url=https%3A%2F%2Fwww.certlibrary...
• A. It prints: My exception.
• B. It prints: 0
• C. It prints: 1
• D. Compilation error
*/
