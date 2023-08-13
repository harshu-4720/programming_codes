#include"singly.h"
#include<iostream>
using namespace std;

template<typename T>
class stack{
	linkedList<int> linkedlist;
	public:
		void push(T data){
			linkedlist.insertNodeAtBeginning(data);
			cout<<"item pushed "<<endl;
		}
		void pop(){
			int item;
			item= linkedlist.deleteNodeAtBeginning();
			if(item==-1){
				cout<<"stack underflow"<<endl;
			}
			else{
				cout<<item<<" ";
			}
		}
};

int main(){
	stack<int> stack;
	int i;
	for(i=1;i<=5;i++){
	int j;
	cin>>j;
		stack.push(j);
	}
	for(i=1;i<=5;i++){
                stack.pop();
        }
}
