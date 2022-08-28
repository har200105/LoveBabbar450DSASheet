 struct Node{
	     char dat;
	     int freq;
	    
	     Node *left,*right;
	   };
	  Node * newNode(char j,int f){
	      Node *n=new Node();
	      n->dat=j;
	      n->freq=f;
	      n->left=NULL;
	      n->right=NULL;
	  }
	    struct cmpare{
	      bool operator()(Node *l,Node *r){
	          return l->freq>r->freq;
	      }  
	    };
	   
	    void preorder(Node *r,string t,vector<string>&a ){
	        if(r->left==NULL and r->right==NULL)
	        {
	            a.push_back(t);
	            return;
	        }
	        preorder(r->left,t+'0',a);
	        preorder(r->right,t+'1',a);
	        
	    }
	    
	    
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    Node *root=NULL;
		    priority_queue<Node *,vector<Node *>,cmpare>p;
		    for(int i=0;i<N;i++){
		        Node *t=newNode(S[i],f[i]);
		        p.push(t);
		    }
		    vector<string>v;
		    while(p.size()>1){
		        Node *n;
		        Node *l=p.top();
		        p.pop();
		        Node *r=p.top();
		        p.pop();
		        
		       // cout<<l->freq<<"  "<<r->freq<<endl;
		        n=newNode('*',l->freq+r->freq);
		        if(l->freq<=r->freq){
		            n->left=l;
		            n->right=r;
		        }
		        else{
		            n->left=r;
		            n->right=l;
		        }
		      //cout<<n->freq<<" ";
		        p.push(n);
		       
		        
		    }
		    root=p.top();
		 //   cout<<root->freq;
		    string s;
		     preorder(root,s,v);
		   
		    return v;
		    
		}