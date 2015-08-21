public class Stack
{
	private  int arr[];
	private int top=-1;

    Stack()
    {
        arr = new int[50];
    }
	public void push(int n)
	{
		top=top+1;
		arr[top]=n;
	}
	public int pop()
	{
		int r;
		r=arr[top];
		top=top-1;
		return r;
	}
	public boolean isEmpty()
	{
		if(top==-1)
			return true;
		else
			return false; 	
	}
	public boolean isFull()
	{
		if(top==49)
			return true;
		else
			return false;	
	}	
}
