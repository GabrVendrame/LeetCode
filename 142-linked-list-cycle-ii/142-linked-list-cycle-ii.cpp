class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast, *slow, *pos;
        fast = head;
        slow = head;
        pos = head;
        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                while(pos != slow){
                    slow = slow->next;
                    pos = pos->next;
                }
                return pos;
            }
        }
        return NULL;
    }
};