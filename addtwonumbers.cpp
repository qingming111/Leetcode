
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
	if(l1 == NULL)
		return l2;
	if(l2 == NULL)
		return l1;
	ListNode* res = new ListNode(0);
	ListNode* tmp = res;
	int carry = 0;
	while(l1 != NULL && l2 != NULL)
	{
		int value = l1->val + l2->val + carry;
		tmp->next = new ListNode(value % 10);
		carry = value / 10;
		tmp = tmp->next;
		l1 = l1->next;
		l2 = l2->next;
	}
	while(l1 != NULL)
	{
		int value = l1->val + carry;
		tmp->next = new ListNode(value % 10);
		carry = value / 10;
		l1 = l1->next;
		tmp = tmp->next;
	}
	while(l2 != NULL)
	{
	
		 int value = l2->val + carry;
		 tmp->next = new ListNode(value % 10);
		 carry = value / 10;
		 tmp = tmp->next;
		 l2 = l2->next;
	}
	if(carry)
		tmp->next = new ListNode(1);
	return res->next;

}
