// Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head. //



class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
         ListNode*temp=head;
      while(head!=nullptr && head->val==val){
            head=head->next;
            delete temp;
            temp=head;
          }
      while(temp!=nullptr && temp->next!=nullptr){
            if(temp->next->val==val){
                ListNode*del=temp->next;
                temp->next=del->next;
                delete del;
              }
            else
            temp=temp->next;
            }
     return head;
    }
};
