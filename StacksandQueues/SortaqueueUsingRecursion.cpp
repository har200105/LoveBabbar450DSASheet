
void func(queue<int>&q){
    stack<int>s;
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}


queue<int> rev(queue<int> q){
    func(q);
    return q;
}












void func(queue<int>&q){
    if(size(q)!=0){
        int x = q.front();
        dequeue(q);
        func(q);
        enqueue(q);
    }
}


queue<int> rev(queue<int> q){
    func(q);
    return q;
}