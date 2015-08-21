public class StackClient 
{
	public static void main(String args[])
	{
		boolean p,q;
		Stack s=new Stack();
		p=s.isEmpty();
		if(p)
		System.out.println("stack is empty\n");
		else
		System.out.println("stack is not empty\n");
		
		System.out.println("elements are pushed\n");
		s.push(5);
		s.push(13);
		s.push(48);
		s.push(20);
		s.push(14);
		s.push(15);
		
		System.out.println("elements are popped");
		System.out.println(s.pop()+"\n");
		System.out.println(s.pop()+"\n");
		System.out.println(s.pop()+"\n");
		System.out.println(s.pop()+"\n");
		System.out.println(s.pop()+"\n");
		System.out.println(s.pop()+"\n");
		
		q=s.isFull();
		if(q)
		System.out.println("stack is full\n");
		else
		System.out.println("stack is not full\n");
	}
}
