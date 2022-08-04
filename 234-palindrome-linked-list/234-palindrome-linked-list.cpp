class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow, *fast, *prev, *temp;
        slow = head;
        fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        prev = slow;
        slow = slow->next;
        prev->next = NULL;
        while(slow != NULL){
            temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        fast = head;
        slow = prev;
        while(slow != NULL){
            if(fast->val != slow->val){
                return false;
            } else{
                fast = fast->next;
                slow = slow->next;
            }
        }
        return true;
    }
};