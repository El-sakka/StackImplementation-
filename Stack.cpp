//============================================================================
// Name        : Stack.cpp
// Author      : El-sakka
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;

// Array Implementation of Stack
const int MaxSize = 101;
class Stack{
private:
	int arr[MaxSize];
	int top;
public:
	Stack(){
		top=-1;
	}
	void Push(int x){
		if(top == MaxSize -1){
			cout<<"Error !!! Stack is Full\n";
			return;
		}
		arr[top++] = x;
	}
	void Pop(){
		if(top== -1){
			cout<<"Error !!! Stack is Empty\n";
			return;
		}
		top--;
	}
	int Top(){
		return arr[top];
	}
	bool IsEmpty(){
		return (top== -1)?true:false;
	}

};

// Stack Linked List Implementation
struct Node{
	int data;
	Node *next;
};
Node *head = NULL;
void Push(int x){
	Node *temp = new Node();
	temp->data = x;
	temp->next = head;
	head = temp;
}
void Pop(){
	Node *temp = head;
	if (head == NULL)	return;
	head = temp->next;
	delete temp;
}

int Top(){
	if (head == NULL){
		cout<<"Stack Is Empty\n";
		return -1;
	}
	return head->data;
}

bool IsEmpty(){
	return (head == NULL)?true:false;
}

int main() {

}
