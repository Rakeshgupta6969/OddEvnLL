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
        ListNode* oddEvenList(ListNode* head) {
    
          // using the brute force solution.
    
          if(head == NULL || head -> next == NULL) return head;
    
         vector<int> ans;
    
    
         ListNode * temp = head;
    
         while( temp != NULL){
           ans.push_back(temp -> val);
           temp = temp -> next;
         }
    
    
         vector<int> ans2;
    
         for(int i = 0; i<ans.size(); i++){
    
          if((i + 1) % 2 != 0){
        
           ans2.push_back(ans[i]);
             
          }
         }
    
    
          for(int i = 0; i<ans.size(); i++){
    
          if((i + 1) % 2 == 0){
         ans2.push_back(ans[i]);   
          }
    
         }
    
            ListNode* dummy = new ListNode(-1);
    
            ListNode* temp2 = dummy;
    
            for(int i = 0; i<ans2.size(); i++){
             
             ListNode* temp3 = new ListNode(ans2[i]);
    
             temp2 -> next = temp3;
             temp2 = temp3;
    
            }
    
            return dummy -> next;
    
        }
    };