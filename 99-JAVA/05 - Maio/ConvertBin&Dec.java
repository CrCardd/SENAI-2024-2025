public class Main
{
	public static void main(String[] args) {
	    int num = 10101010;
		System.out.printf("Bin to Dec:\t%d ", binToDec( num, countDec(num)));
		System.out.printf("\nDec to Bin:\t%d ", decToBin(binToDec(num,countDec(num)),0));


	    int num2 = 378;
		System.out.printf("\n\n\n\nDec to Bin 2:\t%d ", decToBin(num2,0));
		System.out.printf("\nBin to Dec 2:\t%d ", binToDec( decToBin(num2,0), countDec(decToBin(num2,0))));
	}
	
	
	public static int binToDec (int bin, int n){
	    if( n == 0 ){
	        return 0;
	    }
	    n -= 1;
	    return  ( (int)(bin/((int)Math.pow(10,n))) % 2 ) * (int)Math.pow(2,n) + binToDec(bin,n);
	}
	


	public static int decToBin( int num, int i ){
	    if( num == 0 ){
	        return 0;
	    }
	    return ((num%2) * ((int)Math.pow(10,i))) + decToBin(num>>1,i+1);
	}







	public static int countDec(int count){
	    int i = 0;
	    while( count > 0 ){
	        count /= 10;
	        i++;
	    }
	    return i;
	}
}
