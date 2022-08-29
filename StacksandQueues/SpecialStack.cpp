int minimum;


void push(stack<int>& s, int a){
    
    if(s.empty()){
       minimum=a;
       s.push(a);
    }
    
    else{
        
        if (a<minimum){
            minimum=a;
        }
        s.push(a);
    }

}

bool isFull(stack<int>& s,int n){
    if (s.size()==n){
        return true;
    }
    return false;
}

bool isEmpty(stack<int>& s){
    if (s.size()==0){
        return true;
    }
     return false;
}

int pop(stack<int>& s){
    if (!s.empty())
    {
        int x=s.top();
        s.pop();
        return x;
    }
    return -1;
}

int getMin(stack<int>& s){
    return minimum;
}