#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
class Stack {
	public:
	int top;   
	int a[MAX];
	Stack() {
        top = -1;
	}
	bool push(int x){
		if (top >= (MAX - 1)) {
			cout << "Stack Overflow";
			return false;
		}
		else {
			a[++top] = x;
			cout << x << " pushed into stack\n";
			return true;
		}
	}
	int pop(){
		if (top < 0) {
			cout << "Stack Underflow";
			return 0;
		}
		else {
			int x = a[top--];
			return x;
		}
	}
	int peek(){
		if (top < 0) {
			cout << "Stack is Empty";
			return 0;
		}
		else {
			int x = a[top];
			return x;
		}
	}
	bool isEmpty(){
		return (top < 0);
	}
};
int main()
{
	class Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.pop() << " Popped from stack\n";
	cout << "Top element is : " << s.peek() << endl;
	cout <<"Elements present in stack : ";
	while(!s.isEmpty()){
		cout << s.peek() <<" ";
		s.pop();
	}
	return 0;
 }
