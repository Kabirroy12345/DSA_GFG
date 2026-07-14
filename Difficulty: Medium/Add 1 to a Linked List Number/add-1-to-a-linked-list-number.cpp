/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* reversell(Node* head){
        Node* prev=NULL;
        Node* curr=head;
        while(curr!=NULL){
            Node* forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    Node* addOne(Node* head) {
        //reverse the linked list
        Node* newhead=reversell(head);
        Node* temp=newhead;
        int carry=1;
        while(temp!=NULL){
            int data=temp->data;
            int sum=carry+data;
            int digit=sum%10;
            carry=sum/10;
            
            temp->data=digit;
            if(temp->next==NULL && carry!=0){
                //create an extra node
                Node* newnode=new Node(carry);
                temp->next=newnode;
                temp=newnode;
            }
        
            temp=temp->next;
        }
        //reverse again
        head=reversell(newhead);
        return head;
    }
};