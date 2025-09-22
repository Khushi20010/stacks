#include<iostream>
using namespace std;
class Stack{
    
    int size;
    int top;
    int* arr;
    public:
    Stack(int n){
        size = n;
        top = -1;
        arr = new int[size];
    }
    void push(int x){
        if(top == size-1){
            cout<<"stack overfliw\n";
            return;
        }
        arr[++top] = x;
    }
    int pop(){
        if(top  == -1){
            cout<<"stack underflow\n";
            return -1;
        }
        return arr[top--];
    }
    int peek(){
        if(top  == -1){
            cout<<"stack is empty\n";
            return- 1;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top  ==-1;
    }
    void printReverse(Stack &s){
    if(s.isEmpty()) return;
    int x = s.pop();
    printReverse(s);
    cout<<x<<" ";
    s.push(x);
    
}

};
int main(){
    Stack s(5);
    s.push(4);
        s.push(5);
            s.push(6);
                s.push(7);
                cout<<"stack elements in reverse are:  ";
               s.printReverse(s);
               cout<<endl;
                return 0;

}
