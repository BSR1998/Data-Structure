#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node *link;
};
struct node *root=NULL;
int main()
{

    int ch,turn=1;
    while(turn)
    {
        printf("=====================================\n");
        printf("1.add Node\n2.delete Node\n3.traveling");
        printf("\n=====================================\n");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
                case 1:createNode();
                        break;
                case 2:deleteNode();
                        break;
                case 3:travaling(*root);
                        break;
                default:
                        printf("illegle choice");
                        break;
        }
        printf("\nDo you want to continue?");
        scanf("%d",&turn);

    }
    return 0;
}
void createNode()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else{
        struct node* p = (struct node*)malloc(sizeof(struct node));
        p = root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;

    }

}
void deleteNode()
{
    struct node* temp;
    if(root==NULL)
    {
        printf("linked list is empty");
    }
    else{
    temp = root;
    root = temp->link;
    printf("Deleted node: %d",temp->data);
    free(temp);
    }


}
void travaling()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp = root;
    while(temp->link!=NULL)
    {
        printf("\n%d",temp->data);
        temp=temp->link;
    }
    printf("\n%d",temp->data);

}
