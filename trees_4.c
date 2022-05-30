//construct a balanced binary using sorted array
#include<stdio.h>
#include<stdlib.h>


struct TNode
{
    int data;
    struct TNode* left;
    struct TNode* right;
};

struct TNode* newNode(int data);


struct TNode* sortedArrayToBST(int arr[], int start, int end)
{

    if (start > end)
      return NULL;


    int mid = (start + end)/2;
    struct TNode *root = newNode(arr[mid]);


    root->left =  sortedArrayToBST(arr, start, mid-1);


    root->right = sortedArrayToBST(arr, mid+1, end);

    return root;
}


struct TNode* newNode(int data)
{
    struct TNode* node = (struct TNode*)
                         malloc(sizeof(struct TNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}


void preOrder(struct TNode* node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}


int main()
{
    int arr[20] ;
    int m,i;
    printf("size");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("no\n");
        scanf("%d",&arr[i]);
    }
    struct TNode *root ;
    root= sortedArrayToBST(arr, 0, m-1);
    printf("n PreOrder Traversal of constructed BST ");
    preOrder(root);

    return 0;
}
