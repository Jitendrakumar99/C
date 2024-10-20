   ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        
        while(list1!=NULL&&list2!=NULL)
        {
            if(list1->val  > list2->val)
            {
                temp->next=list2;
                list2=list2->next;
            }
            else 
            {
                temp->next=list1;
                list1=list1->next;
            }
            temp=temp->next;
        }
      temp->next=list1!=NULL?list1:list2;
        return dummy->next;
