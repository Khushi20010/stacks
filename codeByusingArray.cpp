#include<iostream>
using namespace std;
class Stack{
    private:
    int* arr;
    int top;
    int capacity;
    public:
    Stack(int size){
capacity = size;
    arr =new int[capacity];
    top = -1;

    }
    void push(int val){
        if(top == capacity-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        arr[++top] = val;
        cout<<val<<"  pushed into stack "<<endl;
    }
    void pop(){
        if(top == -1){
            cout<<"stack is underflow"<<endl;
            return;
        }
        cout<<arr[top--]<<"  popped into the stack"<<endl;
    }
    int peek(){
        if(top == -1){
            cout<<"stack is empty\n";
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top == -1;

    }
    bool isFull(){
        return top == capacity-1;
    }
    void display(){
        if(top == -1){
            cout<<"stack is empty"<<endl;
            return;
        }
        cout<<"stack elements are:  ";
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<endl;
        }


    }
    
};
int main(){
    Stack s(3);
    s.push(8);
    s.push(9);
    s.push(10);
    s.display();
    cout<<"Top elements is:"<<s.peek()<<endl;
    // s.pop();
    // s.display();
    cout<<"Stack empty?"<<(s.isEmpty()?"yes":"no")<<endl;
    cout<<"stack full?"<<(s.isFull()?"yes":"no");
    return 0;

}