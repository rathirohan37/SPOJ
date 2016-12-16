import java.util.*;
import java.lang.*;
import java.io.*;

class Main
{

	static int get_digit(char x,char y)
	{
		if(y=='0')
			return 1;
		else if(y=='6')
			return 4;
		else if(y=='1')
			return 7;
		else if(y=='3' && x=='9')
			return 2;
		else if(y=='9' && x=='7')
			return 3;
		else if(y=='3' && x=='0')
			return 5;
		else if(y=='9' && x=='1')
			return 6;
		else if(y=='7' && x=='2')
			return 8;
		else if(y=='7' && x=='0')
			return 9;
		return 0;
	}

	public static void main (String[] args) throws java.lang.Exception
	{
		String s1;
		Scanner in=new Scanner(System.in);
		s1=in.nextLine();
		while(s1.charAt(0)!='B')
		{
			char s[]=s1.toCharArray();
			int i,num1=0,d=0,num2=0;
			for(i=0;s[i]!='+';i+=3)
			{
				d=get_digit(s[i+1],s[i+2]);
				num1=num1*10+d;
			}

			for(i=i+1;s[i]!='=';i+=3)
			{
				d=get_digit(s[i+1],s[i+2]);
				num2=num2*10+d;
			}
			int sum=num1+num2;
				String res="";
			while(sum!=0)
			{
				int r=sum%10;
				sum/=10;
				String dig="";
				switch(r)
				{
					case 1:dig="010";
							break;
					case 0:dig="063";
							break;
					case 2: dig="093";
							break;
					case 3: dig="079";
							break;
					case 4: dig="106";
							break;
					case 5: dig="103";
							break;
					case 6: dig="119";
							break;
					case 7: dig="011";
							break;
					case 8: dig="127";
							break;
					case 9: dig="107";
							break;
				}
				res=dig+res;

			}
			System.out.println(s1+res);
			s1=in.nextLine();
		}
	}
}
