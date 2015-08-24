import java.util.*;
public class LevelClient
{
	public static void main(String args[])
	{
		Level s=new Level();
		int r,key,v;
		char ch;
		boolean t;
		do
		{	
			System.out.println("enter\n1.insert\n2.levelorder\n3.inorder\n4.height");
			Scanner s1=new Scanner(System.in);
			r=s1.nextInt();
			switch(r)
			{
				case 1:
					System.out.println("enter key");
					key=s1.nextInt();
					s.put(key);
					break;
				case 2:
					System.out.println("level order is");
					s.order();
					break;
				case 3:
					System.out.println("inorder is");
					s.in();
					break;
				case 4:
					s.h();
					break;
			}
		System.out.println("enter y for more");
		ch=s1.next().charAt(0);
		}while(ch=='y'||ch=='Y');
	}
}
