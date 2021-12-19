void twoStacks :: push1(int x)
{
    top1++;
    arr[top1]=x;
}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
    top2--;
    arr[top2]=x;
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    if(top1==-1) return -1;
    else return arr[top1--];
}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
    if(top2==size) return -1;
    else return arr[top2++];
}































