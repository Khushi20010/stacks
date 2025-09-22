#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next =  nullptr;
    }

};
class Stack{
    private:
    Node* top;
    public:
    Stack(){
        top = nullptr;
    }
    bool isEmpty(){
        return top  ==  nullptr;
    }
   
    void push(int val){
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        cout<<val<<" pushed into stack\n";

    }
    void pop(){
        if(isEmpty()){
            cout<<"stack is underflow";
            return;

        }
        Node* temp = top;
        cout<<top->data<<"  popped into stack\n";
        top = top->next;
        delete temp;
    }
    int peek(){
        if(isEmpty()){
            cout<<"Stack is empty\n";
            return -1;
        }
        return top->data;

    }
    void display(){
        if(isEmpty()){
            cout<<"stack is empty\n";
            return;
        }
        Node* curr = top;
        while(curr!= nullptr){
            cout<<curr->data<<" ";
            curr = curr->next;
        }
        cout<<endl;
    }
};
int main(){
    Stack s;
    s.push(8);
       s.push(9);
          s.push(10);
             s.push(11);
             s.display();
             s.pop();
             s.display();
             cout<<"top element"<<s.peek()<<endl;
             cout<<"IS stack empty?"<<(s.isEmpty()? "Yes":"no")<<endl;
             return 0;

}