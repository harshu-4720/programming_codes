#include<iostream>
using namespace std;

template<typename T>
class array{
	public:
		T maxIndex=-1;
		T *array = new T[100];
		void insert(T data){
			maxIndex++;
			array[maxIndex]=data;
		}
		void searchNumber(T data){
			T j;
			for(j=0;j<=maxIndex;j++){
				if(array[j]==data){ 
					cout<<"Data Presnt at index  "<<j<<endl;
					return;
				}
			}
			cout<<"not present"<<endl;
		}	
		void deleteNumber(T number){
			T index;
			for(index=0;index<=maxIndex;index++){
				if(array[index]==number){ 
					break;
				}
			}
			for(T i=index;i<maxIndex;i++){
				array[i]=array[i+1];       
			}
			maxIndex--;
		}
		void printArray(){
			for(T i=0;i<=maxIndex;i++){\
				cout<<array[i]<<",";
			}
		}

};

int main(){
	array<int> arr;
	int i;
	for(i=0;i<10;i++ ){
		arr.insert(i);       
	}
	arr.searchNumber(8);
	arr.deleteNumber(8);
	arr.searchNumber(8);
	arr.printArray();
}
