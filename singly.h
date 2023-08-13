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
class linkedList{
public:
	node<T>* head;
		linkedList<T>(){ 
			head=NULL;
		}
		void insertNodeAtBeginning(T data){ 
			node<T>* newNode=new node<T>(data);
			node<T>* temp;
			if(head==NULL){
				head=newNode;	       
			}
			else{
				newNode->next=head;
				head=newNode;
			}
		}
		int deleteNodeAtBeginning(){
			int item;
			node<T>* temp;
			if(head==NULL){
				return -1;
			}
			else{
				temp=head;
				head=head->next;
				item=temp->data;
				delete temp;
				return item;
			}
		
		}
		void insertNodeAtEnd(T data){ 
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
		int deleteNodeAtEnd(T data){
			node<T>* temp;
			node<T>* temp2;
			int j;
			if(head==NULL){
				return -1;
			}
			else{
				if(head->data ==data){
					temp=head;
					head=head->next;
					j=temp->data;
					delete temp;
					return j;
				}
				else{
					temp=head;
					while(temp->next!=NULL){
						if(temp->next->data==data){
							temp2=temp->next;
							temp->next=temp2->next;
							j=temp2->data;
							delete temp2;
							return j;
						}
						else{
							temp=temp->next;
						}
					}
				}
			}
		}

};
