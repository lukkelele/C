#include <stdio.h>



typedef struct node 
{
	int val;
	struct node *prev, *next;
} Node;


Node head, tail, pn;


Node createNode(int val)
{
	struct node newNode;
	newNode.val = val;	

	return newNode;
}


void showNode(Node node) 
{
	printf("val = %d\n", node.val);

}


int main(void)
{

	Node n = createNode(5);
	Node n2 = createNode(3);

	n2.prev = &n;
	n.next = &n2;

	showNode(n);	
	showNode(n2);
	showNode(*n2.prev);

	printf("\nn == %d\nn2.prev == %d\nn.next == %d\n", n.val, n2.prev->val, n.next->val);




	printf("\n\n ---");
	return 0;
}
