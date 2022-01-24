#include <iostream>
#include <stack>
#include <vector>
#include <sstream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
    string input, cmd;
    int n, x;

    std::stack<int> stack;
    for (int i = 0; i < n; i++) {
        std::getline(cin, input);
        const char sb = ' ';

        std::vector<string> output;
        std::stringstream ss(input);

        string stemp;
        while(std::getline(ss,  stemp,sb)) { output.push_back(stemp); }
        if (cmd == "push") { stack.push(x); }
        else if (cmd == "top") {
            if (stack.empty()) {
                cout << -1 << endl;
                continue;
            }
            cout << stack.top() << endl;
        }
        else if (cmd == "size") { cout << stack.size() << endl; }
        else if (cmd == "empty") { cout << (stack.empty() ? 1 : 0) << endl; }
        else {
            if (stack.empty()) {
                cout << -1 << endl;
                continue;
            }
            cout << stack.top() << endl;
            stack.pop();
        }
    }
    return 0;
}
