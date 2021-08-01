#include<bits/stdc++.h>
using namespace std;
int k;
class Node
{
public:
    int data;
    Node* next;
    Node* prev;
};
Node* head = NULL;
Node* ptr;
Node* append(class Node* head_ref, int new_data)
{
    class Node* new_node = (class Node*) malloc(sizeof(class Node));
    new_node->data  = new_data;
    new_node->next = NULL;
    new_node->prev = NULL;
    if (head_ref == NULL)
    {
        head = new_node;
        return new_node;
    }
    else
    {
        head_ref->next = new_node;
        new_node->next = head;
        new_node->prev = head_ref;
        head->prev = new_node;
        return new_node;
    }
}
int clockwise(Node *head)
{
    int sum=0,f = 0;
    Node *temp1 = head,*temp2 = head->next;
    while(1)
    {f = 1;
        //cout<<temp1->data<<" "<<temp2->data<<endl;
        if(temp1->data<temp2->data)
            sum+=temp2->data-temp1->data;
        else
            sum+=temp1->data+k-temp2->data;
        temp1 = temp1->next;
        temp2 = temp2->next;
        //cout<<sum<<endl;
        if(temp2->data == head->data && f == 1)break;
    }
    return sum;
}
int anticlockwise(Node *head)
{
    int sum=0,f = 0;
    Node *temp1 = head,*temp2 = head->prev;
    while(1)
    {f = 1;
        //cout<<temp1->data<<" "<<temp2->data<<endl;
        if(temp2->data<temp1->data)
            sum+=temp1->data-temp2->data;
        else
            sum+=temp1->data+k-temp2->data;
        temp1 = temp1->prev;
        temp2 = temp2->prev;
        //cout<<sum<<endl;
        if(temp2->data == head->data && f ==1)
            break;
    }
    return sum;
}
int main()
{
    int n,i,j,x,min=INT_MAX;
    cin>>k>>n;

    ptr = head;
    for(i=0; i<n; i++)
    {
        cin>>x;
        ptr = append(ptr, x);
    }
    ptr = head;
    for(i=0; i<n; i++)
    {
        x = clockwise(ptr);
        //cout<<x<<endl<<endl<<endl;
        if(min>x)
            min = x;
        x = anticlockwise(ptr);
        //cout<<x<<endl<<endl<<endl;
        if(min>x)
            min = x;
        ptr = ptr->next;
    }
    cout<<min<<endl;
    return 0;
}
