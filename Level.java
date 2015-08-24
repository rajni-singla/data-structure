public class Level
{
	public class Node
	{
		private int k;
		private Node left;
		private Node right;
	};
	private Node root=null;
	private int r;
	public void put(int k)
	{
		root=putNode(root,k);
	}
	public Node putNode(Node root,int k)
	{
		if(root==null)
		{
			root=new Node();
			root.k=k;
			root.left=null;
			root.right=null;
			return root;
		}
		else if(k<root.k)
			root.left=putNode(root.left,k);
		else if(k>root.k)
			root.right=putNode(root.right,k);
		else
			root.k=k;
		return root;
	}
	public void in()
	{
		inorder(root);
	}
	public void inorder(Node x)
	{
	if(x==null)
		return;
	else
	{
		inorder(x.left);
		System.out.println(x.k);		
		inorder(x.right);
	}
	}
	public void h()
	{
		r=height(root);
		System.out.println("the height of tree is "+r);
	}
	public int height(Node root)
	{
		int l,r;
		if(root==null)
			return 0;
		l=1+height(root.left);
		r=1+height(root.right);
		return l>r?l:r;
	}
	public void order()
	{
		or(root);
	}
	public void or(Node root)
	{	
		int i,p;
		p=height(root);
		for(i=0;i<p;i++)
		{
			l(root,i);	
		}
	}
	public void l(Node root,int i)
	{
		if(root==null)
			return;
		else if(i==0)
		{
			System.out.println(root.k);
			return;
		}
		else if(i>=1)
		{
			l(root.left,i-1);
			l(root.right,i-1);						
		}
	}	
}
 
