import java.util.*;
public class TreeClient
{
	public static void main(String args[])
	{
		Tree s=new Tree();
		int r,key,v;
		char ch;
		boolean t;
		do
		{	
			System.out.println("enter\n1.insert\n2.inorder\n3.preorder\n4.search\n5.find minimum\n6.delete minimum\n7.height");
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
					System.out.println("inorder is");
					s.in();
					break;
				case 3:
					System.out.println("preorder is");
					s.pre();
					break;
				case 4:
					System.out.println("which key u want to search");
					v=s1.nextInt();					
					s.search(v);
					break;
				case 5:
					s.min();
					break;
				case 6:
					s.deleteMin();
					System.out.println("minimum element is deleted..");
					break;
				case 7:
					s.h();
					break;
			}
		System.out.println("enter y for more");
		ch=s1.next().charAt(0);
		}while(ch=='y'||ch=='Y');
	}
}
