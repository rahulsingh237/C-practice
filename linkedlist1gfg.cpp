#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

int main()
{
	Node* head=NULL;
	Node* second=NULL;
	Node* third=NULL;
	
	head=new Node();
	second=new Node();
	third=new Node();
	
	head->data=10;
	head->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=30;
	third->next=NULL;
	
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head=head->next;
	}
	return 0;
}
