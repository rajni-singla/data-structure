public class Tree
{
	public class Node
	{
		private int k;
		private Node left;
		private Node right;
	};
	private Node root=null;
	private int i;
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
	public void search(int k)
	{
		boolean p;
		p=sea(root,k);		
		if(p)
			System.out.println("key is present in tree");
		else
			System.out.println("key is not present");
	}
	public boolean sea(Node root,int k)
	{
		if(root!=null)
		{
		if(k==root.k)
			return true; 
		else if(k < root.k)
			return sea(root.left,k);
		else
			return sea(root.right,k);		
		}

        return false;
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
	public void pre()
	{
		preorder(root);
	}
	public void preorder(Node root)
	{
	if(root==null)
		return;
	else
	{
		System.out.println(root.k);	
		preorder(root.left);	
		preorder(root.right);
	}
	}
	public void min()
	{
		Node z;
		z=mini(root);
		System.out.println("minimum node is " + z.k);
	}
	public Node mini(Node x)
	{
		if(x.left==null)
			return x;
		else
			return mini(x.left);
	}
	public void deleteMin()
	{
		root=delMin(root);
	}
	public Node delMin(Node x)
	{
		if(x.left==null)
			return x.right;
		x.left=delMin(x.left);
			return x;
	}
	public void h()
	{
		int r=height(root);
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
	
}
 
