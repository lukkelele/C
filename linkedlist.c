#include <stdio.h>


typedef struct node 
{
	int val, index;
	struct node *prev, *next;
} Node;


Node *head, *tail;


Node newNode(int val)
{
	struct node newNode;
	newNode.val = val;	
	if (head == NULL) {
		head = &newNode;
		tail = &newNode;
	}
	
	return newNode;
}


double countNodes(Node *head)
{
	double i;
	Node n = *head;
	while ((n.next != head)) {
		i++;
	}
	return i;
}


void joinNode(Node *after, Node *joinee) 
{
	Node *buf = after->next;
	after->next = joinee;
	joinee->prev = after;
	joinee->next = buf;
	if (joinee->next == NULL) {
		joinee->next = head;
		tail = joinee;
	}
}


void removeNode(Node *node) 
{
	node->prev = node->next;	// Remove the node and relink the chain}
	if (node->next == NULL) {
		node->prev->next = head;
		node->prev = tail; 	// head <-> tail polling could be of use to make sure they always link
	}
}

void showNode(Node node) 
{
	printf("val = %d\n", node.val);

}


int main(void)
{

	Node n = newNode(52);
	Node n2 = newNode(3);

	n2.prev = &n;
	n2.next = head;
	n.next = &n2;
	n.prev = head;

	Node n3 = newNode(12);
	Node n4 = newNode(25);

	n3.prev = &n2;
	n3.next = &n;

	joinNode(&n3, &n4);
	printf("n3->next == %d\nn4->next == %d\n", n3.next->val, n4.next->val);

	showNode(n);	
	showNode(n2);
	showNode(*n2.prev);

	printf("\nn == %d\nn2.prev == %d\nn.next == %d\n", n.val, n2.prev->val, n.next->val);




	printf("\n\n ---");
	return 0;
}
