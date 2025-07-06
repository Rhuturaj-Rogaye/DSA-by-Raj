#include <iostream>
// Corrected MAX_SIZE based on the code
using namespace std;

class Stack {
public :
    int arr[5];
    int top;

    Stack() {
        top = -1;
    }

    void push(int val) {
        if (top > 5) {
            cout << "Stack Overflow" << endl;
        } else {
            top++;
            arr[top] = val;
            cout << "Pushed Value: " << val << endl;
        }
    }

    void pop() {
        if (top <= -1) {
            cout << "Stack underflow" << endl;
            // Or throw an exception
        } else {
            int val = arr[top];
            top--;
            cout << "Popped value: " << val << endl;
        }
    }

    void peek() {
        if (top != -1) {
            cout << "Topmost element is: " << arr[top] << endl;
        }
    }

    void display();
};
void Stack::display() {
        int i;
        if (top == -1) {
            cout << "No elements in stack" << endl;
        } else {
            cout << "Elements are:" << endl;
            for (i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }


int main() {
    Stack s;
    // clrscr(); // This is a conio.h function, might not be available in all environments
    cout << "Stack push operation" << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    // s.push(40); // Uncommenting this might cause overflow as MAX_SIZE is 5
    // s.push(50); // Uncommenting this might cause overflow as MAX_SIZE is 5
    s.peek();
    s.display();
    cout << "Stack popped operation" << endl;
    s.pop();
    s.pop();
    s.display();
    s.pop();
    s.pop();
    s.pop();
    s.display();
    s.peek();
    // getch(); // This is a conio.h function, might not be available in all environments
    return 0;
}