Node* p,*s;
void solve(Node* r,int key){
   if(!r)
       return;
   if(r->key < key){
       if(!p || p->key < r->key)
           p = r;
   }
   else if(r->key > key){
       if(!s || s->key > r->key)
           s = r;
   }
   solve(r->left,key);
   solve(r->right,key);
}
void findPreSuc(Node* r, Node*& pre, Node*& suc, int key)
{
   p = NULL,s = NULL;
   solve(r,key);
   pre = p;
   suc = s;
}