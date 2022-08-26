/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


class Solution {
public:
   
    TreeNode*helper(vector<int>&p,vector<int>&i,int l,int h,int&idx){
        
        if(l>h){
            return NULL;
        }
        
        int index=find(i.begin(),i.end(),p[idx])-i.begin();
        
        TreeNode*root=new TreeNode(p[idx]);
        
        idx++;
        
        root->left=helper(p,i,l,index-1,idx);
        
        root->right=helper(p,i,index+1,h,idx);
        
        return root;
    }
    
    
    TreeNode* bstFromPreorder(vector<int>& p) {
        vector<int>i=p;
        sort(i.begin(),i.end());
        int idx=0;
        return helper(p,i,0,p.size()-1,idx);
    }
    
    
};