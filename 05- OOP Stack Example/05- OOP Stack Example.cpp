#include<iostream>
#include<vector>
using namespace std;

class Stack {
private:
    int size;
    vector<int> stack;
    int topOfStack;

public:
    Stack(int size = 10) {
        setSize(size);
        topOfStack = -1;
        stack.resize(size);
    }
    void setSize(int s) {
        size = s;
    }
    void push(int number) {
        if (topOfStack == size - 1) {
            cout << "Stack is Full =====================================" << endl;
        }
        else {
            topOfStack++;
            stack[topOfStack] = number;
        }
    }
    void pop() {
        if (topOfStack == -1) {
            cout << "Stack is Empty ";
        }
        else { topOfStack--; }
    }
    int peek() {
        if (topOfStack == -1) {
            throw runtime_error("Stack is Empty");
        }
        return stack[topOfStack];
    }
    bool isEmpty() {
        return topOfStack == -1;
    }
    void displayStack() {
        if (topOfStack == -1) {
            cout << "Stack is Empty ";
        }
        else {
            for (int i = 0; i <= topOfStack; i++) {
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    vector<int> numbers = { 5,4,3,5,5,10 };
    Stack stackTest(20);
    int length = numbers.size();

    for (int i = 0; i < length; i++) {
        if (!stackTest.isEmpty() && stackTest.peek() == numbers[i]) {
            cout << "The number " << numbers[i] << " duplicated" << endl;
            stackTest.pop();
        }
        else {
            stackTest.push(numbers[i]);
        }
    }

    cout << "Final stack: ";
    stackTest.displayStack();
}
