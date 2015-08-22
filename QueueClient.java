import java.util.*;
public class QueueClient
{
	public static void main(String args[])
	{
		Queue q=new Queue();
		int r,p;
		char ch;
		boolean a,b;
		Scanner s=new Scanner(System.in);
		do
		{
			System.out.println("enter ur choice...\n");
			System.out.println("1.insert\n2.delete\n3.display\n4.empty?\n5.full");
			r=s.nextInt();
			switch(r)
			{	
				case 1:
				System.out.println("enter no.");
				p=s.nextInt();
				q.insert(p);
				break;
				case 2:
				q.delete();
				break;
				case 3:
				q.display();
				break;
				case 4:
				a=q.isEmpty();
				if(a)
					System.out.println("queue is empty\n");
				else
					System.out.println("queue is not empty\n");
				break;
				case 5:
				b=q.isFull();
				if(b)
					System.out.println("queue is full\n");
				else
					System.out.println("queue is not full\n");
				break;
				default:
				System.out.println("wrong choice");
			}
		System.out.println("enter y for more");
		ch=s.next().charAt(0);
		}while(ch=='y'||ch=='Y');
	}
} 
