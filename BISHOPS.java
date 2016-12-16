import java.math.*;
import java.util.*;
import java.lang.*;
import java.io.*;
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in =new Scanner(System.in);
		while(in.hasNextBigInteger())
		{
			BigInteger n=in.nextBigInteger();
			BigInteger zero=new BigInteger("0");
			BigInteger one=new BigInteger("1");
			if(n.equals(zero))
				System.out.println("0");
			else if(n.equals(one))
				System.out.println("1");
			else{
			BigInteger two=new BigInteger("2");
			n=n.multiply(two);
			n=n.subtract(two);
			System.out.println(n);
			}
		}
	}
}
