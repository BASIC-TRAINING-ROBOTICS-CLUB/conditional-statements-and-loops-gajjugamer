#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

class LogicalOperations {
public:
    bool andOperation(bool a, bool b) const {
        return a && b;
    }

    bool orOperation(bool a, bool b) const {
        return a || b;
    }

    bool notOperation(bool a) const {
        return !a;
    }

    bool nandOperation(bool a, bool b) const {
        return !(a && b);
    }

    bool norOperation(bool a, bool b) const {
        return !(a || b);
    }

    bool xorOperation(bool a, bool b) const {
        return (a || b) && !(a && b);
    }

    bool xnorOperation(bool a, bool b) const {
        return !(a || b) || (a && b);
    }
};

void printTruthTable(const string& expression) {
    LogicalOperations logicOps;

    cout << "\nA\tB\tResult\n";
    cout << "-----------------\n";

    for (int A = 0; A <= 1; ++A) {
        for (int B = 0; B <= 1; ++B) {
            bool a = static_cast<bool>(A);
            bool b = static_cast<bool>(B);
            bool result = false;

            if (expression == "!A") {
                result = logicOps.notOperation(a);
            } else {
                if (expression == "A&B") {
                    result = logicOps.andOperation(a, b);
                } else if (expression == "A|B") {
                    result = logicOps.orOperation(a, b);
                } else if (expression == "A~B") {
                    result = logicOps.nandOperation(a, b);
                } else if (expression == "A@B") {
                    result = logicOps.norOperation(a, b);
                } else if (expression == "A^B") {
                    result = logicOps.xorOperation(a, b);
                } else if (expression == "A=B") {
                    result = logicOps.xnorOperation(a, b);
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
