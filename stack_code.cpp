#include <iostream>

using namespace std;

const int MAX_SIZE = 2;


class Stack{
    int stack[MAX_SIZE];
    int top;

public:
    Stack(){
        top = -1;
    }

    bool isEmpty(){
        return top == -1;
    }

    bool isFull(){
        return top == MAX_SIZE - 1;
    }

    void push(int x){
        if (isFull()){
            cout << "Stack Overflow" << endl;
        }else{
            top++;
            stack[top] = x;
        }
    }

    int pop(){
        if (isEmpty()){
            cout << "Stack Underflow" << endl;
            return NULL;
        }else{
            int v = stack[top];
            top--;
            return v;
        }
    }
};


int main(){
    Stack s;
    s.pop();
    s.push(100);
    s.push(1000);
    s.push(100);
    cout << s.pop() << endl;
    s.pop();
}