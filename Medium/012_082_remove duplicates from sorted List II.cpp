class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        ListNode* current = head;

        while (current != nullptr) {

            bool duplicate = false;

            while (current->next != nullptr &&
                   current->val == current->next->val) {

                duplicate = true;
                current = current->next;
            }

            if (duplicate) {
                prev->next = current->next;
            }
            else {
                prev = current;
            }

            current = current->next;
        }

        return dummy.next;
    }
};
