#include<iostream>
using namespace std;
#define SIZE 5
int top=-1;
template<class X>
class stack{
	X arr[SIZE];
	bool isfull(X arr[]){
		if(top==SIZE-1)
		return true;
		return false;
	}
	bool isempty(X arr[]){
		if(top==-1)
		return true;
		return false;
	}
	public:
		void push(X data){
			if(isfull(arr)) cout<<"Stack OverFlow"<<endl;
			else{
				arr[++top]=data;
				cout<<"Enter Element is :"<<arr[top]<<endl;
			}
		}
		void pop(){
			if(isempty(arr))cout<<"Stack underflow"<<endl;
			else{
				cout<<"pop element is:"<<arr[top--]<<endl;
			}
		}
};
main(){
	stack<int> s;
	//s.pop();
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	s.push(9);
	s.push(10);
}
