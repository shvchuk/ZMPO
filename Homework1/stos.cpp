#include <iostream>

class Stack {
private:
    int *stackArray;
    int top;
public:
    Stack();
    ~Stack();
    explicit Stack(int);
    void push(int);
    int pop();
    bool isEmpty();
    int peek();
    int count();
    void print();
};

Stack::Stack(){
    stackArray = 0;
    top = -1;
}

Stack::Stack(int size){
    stackArray = new int[size];
    top = -1;
}

Stack::~Stack(){
    delete[] stackArray;
}

void Stack::push(int n) {
    ++top;
    stackArray[top] = n;
}

int Stack::pop() {
    int returnValue = stackArray[top];
    --top;
    return returnValue;
}

bool Stack::isEmpty() {
    return top == -1;
}

int Stack::peek() {
    return stackArray[top];
}

int Stack::count() {
    return top + 1;
}

void Stack::print() {
    if(!isEmpty()){
        for (int i = top; i >= 0 ; i--){
            std::cout << stackArray[i] << " ";
        }
    }
    std::cout << std::endl;
}

int main() {

    Stack *stos = new Stack(10);
    stos->push(10);
    stos->push(20);
    stos->push(30);
    stos->push(40);
    stos->push(50);
    stos->print();
    stos->pop();
    stos->print();
    std::cout << "Number of elements in the stack: " << stos->count() << std::endl;
    std::cout << "Peek element: " << stos->peek() << std::endl;
    std::cout << "Empty stack: " << stos->isEmpty() << std::endl;
    return 0;
}

