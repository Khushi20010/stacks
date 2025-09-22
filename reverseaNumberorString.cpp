#include<iostream>
#include<string>
using namespace std;
class Stack{
    private:
    int top;
    int size;
    char* arr;
    public:
    Stack(int n){
        size = n;
        arr = new char[size];
        top  = -1;
    }
    void push(char c){
        if(top == size-1){
            cout<<"stack overflow\n";
            return;
        }
        arr[++top]  =c;
    }
    char pop(){
        if(top == -1){
            cout<<"stack underflow\n";
            return '\0';

        }
        return arr[top--];
    }
    bool isEmpty(){
        return top == -1;
    }

};
int main(){
    string str;
    cout<<"Enter a string/number:  ";
    cin>>str;
    Stack s(str.length());
    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }
    string reversed = "";
    while(!s.isEmpty()){
        reversed+=s.pop();
    }
    cout<<"Reversed string/number:  "<<reversed<<endl;
    return 0;  
}