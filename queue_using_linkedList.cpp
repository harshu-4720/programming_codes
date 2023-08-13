#include"singly.h"
#include<iostream>
using namespace std;

template<typename T>
class queue{
	linkedList<int> linkedlist;
	public:
	void endqueue(T data){
		linkedlist.insertNodeAtEnd(data);
		cout<<"item inserted"<<endl;
	}
	void dequeue(){
		int i;
		i=linkedlist.deleteNodeAtBeginning();
		if(i==-1){
			cout<<"emptyqueue"<<endl;
		}
		else{
			cout<<i<<" ";
		}
	}	
};

int main(){
	queue<int> q;
	for(int i=1;i<=5;i++){
		int j;
		cin>>j;
		q.endqueue(j);
	}
	for(int i=1;i<=5;i++){
		q.dequeue();
	}
}