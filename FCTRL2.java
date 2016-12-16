
import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in = new Scanner(System.in);
		int t=in.nextInt();
		while(t-->0){
		int n=in.nextInt();
		BigInteger bi1;
		bi1 = new BigInteger("1");
	for(int i=2;i<=n;i++)
	{
		BigInteger i1;
		i1= new BigInteger(i+"");
		bi1 = bi1.multiply(i1);
	}
	String str = "" +bi1;
	System.out.println( str );
	}
	}
}
