#include<iostream>
using namespace std;


template<typename T>
class node{
	public:
	int data;
	node<T> *next;
	node<T> *prev;
	node<T>(T data ){
		this->data=data;
		next=NULL;
		prev=NULL;
	}
};


template<typename T>
class singlyLinkedList{
public:
	node<T>* head;
		singlyLinkedList<T>(){ 
			head=NULL;
		}
		void insertNode(T data){ 
			node<T>* newNode=new node<T>(data);
			node<T>* temp;
			if(head==NULL){
				head=newNode;	       
			}
			else{
				node<T> *temp =head;
				while(temp->next!=NULL){
					temp=temp->next;
				}
				temp->next=newNode;
			}
		}
		/*void deleteNode(T data){
			node<T>* temp;
			node<T>* temp2;
			if(head==NULL){
				cout<<"empty list"<<endl;
			}
			else{
				if(head->data ==data){
					temp=head;
					head=head->next;
					delete temp;
				}
				else{
					temp=head;
					while(temp->next!=NULL){
						if(temp->next->data==data){
							temp2=temp->next;
							temp->next=temp2->next;
							delete temp2;
							return;
						}
						else{
							temp=temp->next;
						}
					}
				}
			}
		}*/
		void traverse(){
			node<T>* temp;
			temp=head;
			while(temp!=NULL){
				cout<<temp->data<<",";
				temp=temp->next;
			}
		}
};

template<typename T>
class doublyLinkedList{
public:
	node<T>* head;
	node<T>* tail;
		doublyLinkedList<T>(){ 
			head=NULL;
			tail=NULL;
		}
		void insertNode(T data){ 
			node<T>* newNode=new node<T>(data);
			node<T>* temp;
			if(head==NULL){
				head=newNode;
				tail=NULL;	       
			}
			else{
				node<T> *temp =head;
				while(temp->next!=NULL){
					temp=temp->next;
				}
				temp->next=newNode;
				newNode->prev=temp;
				tail=newNode;
			}
		}
		/*void deleteNode(T data){
			node<T>* temp;
			node<T>* temp2;
			if(head==NULL){
				cout<<"empty list"<<endl;
			}
			else{
				if(head->data ==data){
					temp=head;
					head=head->next;
					head->prev=NULL;
					delete temp;
				}
				else{
					temp=head;
					while(temp->next!=NULL){
						if(temp->next->data==data){
							temp2=temp->next;
							temp->next=temp2->next;
							temp2->next->prev=temp;
							delete temp2;
							return;
						}
						else{
							temp=temp->next;
						}
					}
				}
			}
		}*/
		void traverse(){
			node<T>* temp;
			temp=head;
			while(temp!=NULL){
				cout<<temp->data<<",";
				temp=temp->next;
			}
		}
		void btraverse(){
			node<T>* temp;
			temp=tail;
			while(temp!=NULL){
				cout<<temp->data<<",";
				temp=temp->prev;
			}
		}
};
template<typename T>
class circulerLinkedList{
public:
	node<T>* head;
		circulerLinkedList<T>(){ 
			head=NULL;
		}
		void insertNode(T data){ 
			node<T>* newNode=new node<T>(data);
			node<T>* temp;
			if(head==NULL){
				head=newNode;	       
			}
			else{
				node<T> *temp =head;
				while(temp->next!=head){
					temp=temp->next;
				}
				temp->next=newNode;
			}
			newNode->next=head;
		}
		void deleteNode(T data){
			node<T>* temp;
			node<T>* temp2;
			if(head==NULL){
				cout<<"empty list"<<endl;
			}
			else{
				if(head->data ==data){
					temp=head;
					head=head->next;
					delete temp;
				}
				else{
					temp=head;
					while(temp->next!=head){
						if(temp->next->data==data){
							temp2=temp->next;
							temp->next=temp2->next;
							delete temp2;
							return;
						}
						else{
							temp=temp->next;
						}
					}
				}
			}
		}
		void traverse(){
			node<T>* temp;
			temp=head;
			do{
				cout<<temp->data<<",";
				temp=temp->next;
			}while(temp!=head);
		}
};
int main(){
	singlyLinkedList<int> singlyLinkedList;
	doublyLinkedList<int> doublyLinkedList;
	circulerLinkedList<int> circulerLinkedList;

	for (int i = 0; i < 10; ++i)
	{
		singlyLinkedList.insertNode(i);
	}
	singlyLinkedList.traverse();
	cout<<endl;

	for (int i = 0; i < 10; ++i)
	{
		doublyLinkedList.insertNode(i);
	}
	doublyLinkedList.traverse();
	cout<<endl;
	doublyLinkedList.btraverse();
	cout<<endl;

	for (int i = 0; i < 10; ++i)
	{
		circulerLinkedList.insertNode(i);
	}
	circulerLinkedList.traverse();
	cout<<endl;
}
