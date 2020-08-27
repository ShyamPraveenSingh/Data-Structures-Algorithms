//The sum of three integers should be equal to 0
//Using brute force algorithm

public class ThreeSum
{
	public static int count (int[] a)
	{
		int N = a.length;
		int count = 0;
		for (int i=0; i<N; i++)
			for (int j = i+1; j<N; j++)
				for (int k = j+1; k<N; k++)
					count++;
		return count;
	}

	public static void main (String [] args)
	{
		int [] a = In.readInts(args [0]);
		StdOut.println(count(a));
	}
}
