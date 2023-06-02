#include <iostream>
#include <string.h>
using namespace std;

struct Node{
	int val = 0;
	Node *nextNode;
};

int main(){
	
	Node n1,n2;
	n1 = {10, &n2};
	n2 = {20};

	cout<<n1.nextNode->val<<endl;

}
