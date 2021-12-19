class Solution{
  public:
  int ans;
  void solve(Node* root,int h ,int &ma){
      if(!root){
          return;
      }
      if(ans==0){
          return;
      }
      
      if(!root->left and !root->right){
          if(ma==-1){
              ma=h;
          }else{
              if(h!=ma){
                  ans=0;
              }
          }
          return;
      }
      solve(root->left,h+1,ma);
      solve(root->right,h+1,ma);
      
  }
    bool check(Node *root){
        int ma=-1;
        int h=0;
        ans=1;
        solve(root,h,ma);
        return ans;
    }
};