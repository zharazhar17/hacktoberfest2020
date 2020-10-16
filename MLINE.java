/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	// your code goes here
	int t;
	Scanner in=new Scanner(System.in);
    t=in.nextInt();
	for(int h=0;h<t;h++)
	{int N,m,c;
	N=in.nextInt();
	m=in.nextInt();
	c=in.nextInt();
	int count=0;
    int X[]=new int[N+1];
    int Y[]=new int[N+1];
    int temp[]=new int[N+1];
	for(int i=0;i<N;i++)
	{
	   X[i]=in.nextInt();
	   Y[i]=in.nextInt();
	    int temp1=Y[i]-(m*X[i])-c;
	    if(temp1<0)
	    temp[i]=-1;
	    else if(temp1>0)
	    temp[i]=1;
	    
	}
	for(int i=0;i<N;i++)
	    for(int j=i+1;j<N;j++)
	    {
	        if(temp[i]*temp[j]<0)
	            count++;
	    }
	   System.out.println(count);
	}
	}
}
