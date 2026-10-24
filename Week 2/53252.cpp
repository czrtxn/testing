#include <iostream>
#include <stack>
using namespace std;

void display(stack<char> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<char> nums;

    nums.push('X');
    cout << "X is pushed into the stack" << endl;
    nums.push('Y');
    cout << "Y is pushed into the stack" << endl;
    nums.push('Z');
    cout << "Z is pushed into the stack" << endl;

    cout << "\nStack elements: ";
    display(nums);

    cout << "Top element: " << nums.top() << endl;

    cout << nums.top() << " is popped from the stack" << endl;
    nums.pop();

    cout << "Stack elements after pop: ";
    display(nums);

    return 0;
}