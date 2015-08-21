public class Queue
{
	private int arr[];
	private int f=0,r=0; 

	public Queue()
    {
        arr = new int[20];
    }
	
	public void insert(int n)
	{
		if(f==0 && r==20)
			System.out.println("queue overflow");
		else 
		{	
			if(f==0&&r==0)
			f=1;
			r++;
			arr[r]=n;
		}
	}
	public void delete()
	{
		if((f==0&&r==0)||f>r)
			System.out.println("queue underflow");
		else
		{
			System.out.println("deleted no. is "+ arr[f++] );
		}
	}
	public void display()
	{
		if(r==0)
			System.out.println("no element");
		else
		{
			System.out.println("displaying");
			for(f=1;f<=r;f++)
				System.out.println(arr[f]);
		}
	f=1;
	}
	public boolean isEmpty()
	{
		if(f==0&&r==0)
			return true;
		else
			return false; 	
	}
	public boolean isFull()
	{
		if(r==20)
			return true;
		else
			return false;	
	}
}
