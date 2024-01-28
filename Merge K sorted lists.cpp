/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> res;
        vector<ListNode*> ans;
        for(int i=0;i<lists.size();i++) {
            if(lists[i] != NULL) {   //list k copy korlam
                ans.push_back(lists[i]);
            }
        }
        if(ans.size() == NULL) return NULL;
        for(int i=0;i<ans.size();i++) {
            ListNode *ptr = ans[i];  //copied list ta akta vector e dhokalam
            while(ptr != NULL) {
                res.push_back(ptr->val);
                ptr = ptr->next;
            }
        }
        sort(res.begin(),res.end());
        ListNode *start = new ListNode(res[0]);
        ListNode *ptr = start;
        for(int i=1;i<res.size();i++) {
            ListNode *curr = new ListNode(res[i]);
            ptr->next = curr;
            ptr = ptr->next;
        }
        return start;
    }
};
