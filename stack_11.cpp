void add_at_bottom(stack<int>&s,int x)
{
    if(s.size()==0||s.top()<=x)
    {
        s.push(x);
        return;
    }
    else
    {
        int a=s.top();
        s.pop();
        add_at_bottom(s,x);
        s.push(a);
        return;
    }
}

void SortedStack :: sort()
{
   if(s.size()==1)
   {
       return;
   }
   
      int a=s.top();
      s.pop();
      sort();
      add_at_bottom(s,a);
      return;
    
}
