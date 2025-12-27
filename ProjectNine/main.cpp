#include <string>
#include <iostream>
using namespace std;
/*

Objective: Learn class templates for generic programming.
Create a Stack class template that can hold any data type.
Tasks:
Implement push(), pop(), and peek() functions.
Demonstrate using Stack<int> and Stack<char> in main().
Display stack content after each operation
Expected Learning:
How to use templates for generic classes
Avoid code duplication for different data types

*/
class emp
{
private:
    int code;
    string name;
    int salary;
public:
    emp(/* args */);
    ~emp();
    emp(int code, string name, int salary);
    friend ostream& operator<<(ostream& out, const emp& e);
    operator string();
};
emp::emp(/* args */) : emp(0,"Default Name",0)
{

}

emp::emp(int code, string name, int salary) : code(code), name(name), salary(salary)
{

}

emp::~emp()
{

}

ostream& operator<<(ostream& out, const emp& e) {
    out << "Code: " << e.code
        << ", Name: " << e.name
        << ", Salary: " << e.salary;
    return out;
}

emp::operator string()
{
    return "Code: "+to_string(code) + ", Name" + name + to_string(salary);
}


template <typename T>
class Stack {
private:
    static const int maxSize = 100;
    T arr[maxSize];
    int top;        
public:
    Stack() : top(-1)  //initialization list
    {

    }            
    void push(T value) 
    {
        if (top >= maxSize - 1) 
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = value;
        display();
    }
    T pop() 
    {
        if (top < 0) 
        {
            cout << "Stack Underflow" << endl;
            return T(); 
        }
        T value = arr[top--];
        display();
        return value;
    }
    T peek() 
    {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return T(); 
        }
        return arr[top];
    }
    void display() {
        cout << "Stack content: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main(){
    cout << float()<<endl;
    Stack <emp> s;
    s.push(emp(1, "Ahmed", 5000));
    s.push(emp(2, "Sara", 7000));
    ///////////////////////////////////////////
    //////////////////////////////////////////
    /////////////////////////////////////////
    ////////////////////////////////////////
    s.display();

    cout<<s.pop()<<endl;
    s.display();

    Stack <int> s2;
    int x=10;
    s2.push(x);
    cout<<s2.pop();
    s2.display();

    return 0;
}
