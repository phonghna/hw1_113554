#include <iostream>
#include <stack>

using namespace std;


void insertAtBottom(stack<int>& s, int element) {
    if (s.empty()) {
        s.push(element);
        return;
    }
    int topElement = s.top();
    s.pop();
    
    insertAtBottom(s, element);
    s.push(topElement);
}

void reverseStack(stack<int>& s) {
    if (s.empty()) return;
    int topElement = s.top();
    s.pop();
    reverseStack(s);

    insertAtBottom(s, topElement);
}


void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;

    // Push elements onto the stack
    s.push(31);
    s.push(30);
    s.push(29);
    s.push(28);

    cout << "elements present in stack from top to bottom: ";
    printStack(s);
    reverseStack(s);
    cout << "Reversed output: ";
    printStack(s);

    return 0;
}
