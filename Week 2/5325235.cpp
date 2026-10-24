#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Stack {
private:
    vector<string> items;   // using a vector so we don't have to set a fixed size

public:
    // push = put a new student on top of the stack
    void push(const string& item) {
        items.push_back(item);              // push_back adds at the end, and the end is our top
        cout << "Pushed: " << item << endl;
    }

    // peek = just look at who's on top, don't remove anyone
    string peek() {
        if (isEmpty()) {
            return "Stack is empty";        // avoids a crash if there's nothing to look at
        }
        return items.back();                // back() gives the last item = the top
    }

    // pop = remove the top student
    string pop() {
        if (isEmpty()) {
            return "Stack is empty";        // can't pop from an empty stack
        }
        string top = items.back();          // save the top first, because pop_back() returns nothing
        items.pop_back();                   // now remove it
        return top;
    }

    // checks if the stack has nothing inside
    bool isEmpty() {
        return items.empty();
    }

    // prints the stack from top to bottom
    void display() {
        // the vector is in push order (Ana first), so loop backwards to show the top first
        for (int i = items.size() - 1; i >= 0; i--) {
            cout << items[i];
            if (i != 0) cout << " -> ";     // skip the arrow after the last one
        }
        cout << endl;
    }
};

int main() {
    Stack stack;

    // push the students in order, Ana is first so she ends up at the bottom
    stack.push("Ana");
    stack.push("Ben");
    stack.push("Carlo");
    stack.push("Diana");                    // Diana is last so she's on top

    // display from top to bottom, should start with Diana
    cout << "\nStack (TOP to BOTTOM):" << endl;
    stack.display();

    // peek at the top, stack stays the same
    cout << "\nPeek (top element): " << stack.peek() << endl;

    // pop everyone one by one, LIFO so Diana leaves first
    cout << "\nPopping all students:" << endl;
    while (!stack.isEmpty()) {
        cout << "Popped: " << stack.pop() << endl;
    }

    return 0;
}