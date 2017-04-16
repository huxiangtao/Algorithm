#include<stdio.h>

typedef struct binaryItem {
	int value;
	struct binaryItem * left;
	struct binaryItem * right;
} NODE;

void initTree(NODE *,int);
void insertNode(NODE *,int);

int main(void) {
	NODE root;
	int n;
	printf("Please enter a number to init the tree root.\n");
	scanf("%d",&n);
	initTree(&root,n);	
	printf("Please insert node now.\n");
	scanf("%d",&n);	
	insertNode(&root,n);
	printf("Please enter next node.\n");
	while(1) {
		scanf("%d",&n);
		if(root.left != NULL)
			insertNode(root.left,n);
		else if(root.right != NULL)
			insertNode(root.right,n);
		printf("Please enter next node.\n");
	}
	return 0;
}

void initTree(NODE * item,int n) {
	item->value = n;
	item->left = NULL;
	item->right = NULL;
}

void insertNode(NODE * item,int n) {
	NODE node = {
		n,
		NULL,
		NULL
	};

	if(node.value > item->value)
		item->right = &node;
	else if(node.value == item->value)
		return;
	else
		item->left = &node;
}
