#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

class LogicalOperation {
public:
    virtual bool evaluate(bool a, bool b) const = 0;
};

class AndOperation : public LogicalOperation {
public:
    bool evaluate(bool a, bool b) const override {
        return a && b;
    }
};

class OrOperation : public LogicalOperation {
public:
    bool evaluate(bool a, bool b) const override {
        return a || b;
    }
};

class NotOperation : public LogicalOperation {
public:
    bool evaluate(bool a, bool b) const override {
        return !a;
    }
};

class NandOperation : public LogicalOperation {
public:
    bool evaluate(bool a, bool b) const override {
        return !(a && b);
    }
};

class NorOperation : public LogicalOperation {
public:
    bool evaluate(bool a, bool b) const override {
        return !(a || b);
    }
};

class XorOperation : public LogicalOperation {
public:
    bool evaluate(bool a, bool b) const override {
        return (a || b) && !(a && b);
    }
};

class XnorOperation : public LogicalOperation {
public:
    bool evaluate(bool a, bool b) const override {
        return !(a || b) || (a && b);
    }
};

void printTruthTable(const string& expression) {
    AndOperation andOp;
    OrOperation orOp;
    NotOperation notOp;
    NandOperation nandOp;
    NorOperation norOp;
    XorOperation xorOp;
    XnorOperation xnorOp;

    cout << "\nA\tB\tResult\n";
    cout << "-----------------\n";

    for (int A = 0; A <= 1; ++A) {
        for (int B = 0; B <= 1; ++B) {
            bool a = static_cast<bool>(A);
            bool b = static_cast<bool>(B);
            bool result = false;

            if (expression.find('!') != string::npos) {
                result = notOp.evaluate(a, b);
            } else {
                if (expression.find('&') != string::npos) {
                    result = andOp.evaluate(a, b);
                } else if (expression.find('|') != string::npos) {
                    result = orOp.evaluate(a, b);
                } else if (expression.find('~') != string::npos) {
                    result = nandOp.evaluate(a, b);
                } else if (expression.find('@') != string::npos) {
                    result = norOp.evaluate(a, b);
                } else if (expression.find('^') != string::npos) {
                    result = xorOp.evaluate(a, b);
                } else if (expression.find('=') != string::npos) {
                    result = xnorOp.evaluate(a, b);
                }
            }

            cout << A << "\t" << B << "\t" << (result ? 1 : 0) << endl;
        }
    }
}

int main() {
    string expression;

    cout << "Enter a logical expression (e.g., A&B, A|B, !A, A~B for NAND, A@B for NOR, A^B for XOR, A=B for XNOR): ";
    getline(cin, expression);

    expression.erase(remove_if(expression.begin(), expression.end(), ::isspace), expression.end());

    printTruthTable(expression);

    return 0;
}
