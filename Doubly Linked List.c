#include<stdio.h>
void createNode();
void Travel();
void deleteNode();
struct node
{
    int data;
    struct node* first;
    struct node* last;
};
struct node* root=NULL;
void main()
{
    int option=1,choice;
    while(option)
    {
            printf("\n============Doubly Linked List ================\n");
            printf("1.add node\n");
            printf("2.travel node\n");
            printf("3.delete node\n");
            printf("===============================================\n");
            printf("Enter your choice: ");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1: createNode();
                         break;
                case 2: Travel();
                        break;
                case 3: deleteNode();
                        break;
                default:
                        printf("Error");
                        break;
            }
            printf("Do you  want to continue: ");
            scanf("%d",&option);
    }

}
void createNode()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter your data: ");
    scanf("%d",&temp->data);
    temp->last = NULL;
    temp->first = NULL;
    if(root==NULL)
    {
         root=temp;
    }
    else
    {
        struct node* p;
        p=root;
        while(p->last!=NULL)
        {
            p=p->last;
        }
        p->last=temp;
        temp->first = p;
    }
}
void Travel()
{
       struct node* p1;
        p1=root;
        while(p1->last!=NULL)
        {
            printf("%d\n",p1->data);
            p1=p1->last;
        }
        printf("\n%d\n",p1->data);

}
void deleteNode()
{
    if(root==NULL)
    {
        printf("list is empty\n");
    }
}
