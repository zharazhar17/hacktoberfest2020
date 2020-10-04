import java.util.*;
public class Calculus
{
	//Sum according to the given formula : n(n+100)/2 for k=0 to n
	void sumAr(int k)
	{
		double s=0;
		for (int i=0;i<=k ;i++ ) 
		{
			s+=	(double)(i*(i+100))/2;
		}
		System.out.println("The Arithematic Sum for (n="+k+") is ="+s);

	}
}
	
