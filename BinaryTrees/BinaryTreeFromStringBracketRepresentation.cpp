class Solution
{
public:

    int findIndex(string str,int start,int end){
       
       if(start>end){
          return -1;
       }

       stack<char>st;
       for(int i=start;i<=end;i++){
           if(str[i]=='('){
               st.push('(');
           }
           else if(str[i]==')'){
               if(st.top()=='('){
                   st.pop();
                   if(st.empty()){
                       return i;
                   }
               }
           }
       }
       return -1;
   }
   
   Node*makeNode(string str,int start,int end){
       if(start>end)return NULL;
       int num=0;
       while(start<=end and str[start]!='(' and str[start]!=')'){
           num=num*10+str[start++]-'0';
       }
       start--;
       Node*root=new Node(num);
       int index=-1;
       if(start+1<end and str[start+1]=='('){
           index=findIndex(str,start+1,end);
       }
       if(index!=-1){
           root->left=makeNode(str,start+2,index-1);
           root->right=makeNode(str,index+2,end-1);
       }
       return root;
   }
   
   
   Node *treeFromString(string str){
       int end=str.length()-1;
       return makeNode(str,0,end);
   }
};