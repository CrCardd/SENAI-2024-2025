import java.util.Random;

public class Main {

    public static void main (String[] args){
        int[] arrayFer = new int[]{
            244, 232, 241, 123,
            232, 64, 111, 140
        };
        for ( int i = 0; i < arrayFer.length ; i ++ ){
            System.out.printf("[%d] ",arrayFer[i]);
        }
        System.out.printf("\n\n\n\n");
        int result = compact(arrayFer);
        System.out.printf("%d\n", result);
        int[] array = decompact(result);
        for ( int i = 0; i < array.length ; i ++ ){
            System.out.printf("[%d] ",array[i]);
        }
    }

	public static int compact(int[] originalBase){
        int[] old_array = new int[originalBase.length];
        int j=0,result=0;
        for ( int i = 0 ; i < originalBase.length ; i++ ){
            old_array[i] = originalBase[i]>>5;
        }
        for ( int i = 0 ; i < old_array.length ; i ++ ){
            result |= old_array[i] << j;
            j+=3;
        }
        return result;
    }
    
    
    
	public static int[] decompact( int winrar ){
	    Random generate = new Random();
        int all = 0,all2 = getNumbBin(winrar)/3,censura;
        int[] new_array = new int[all2];
        for( int i = 0 ; i < all2 ; i++ ){
            censura = (int)Math.pow(2,all) | (int)Math.pow(2,all+1) | (int)Math.pow(2,all+2);
            if ( all - 5 > 0 ){
                new_array[i] = ((winrar & censura) >> (all - 5)) + generate.nextInt(31);
            }else{
                new_array[i] = ((winrar & censura) << ((all - 5)*-1)) + generate.nextInt(31);
            }
            all+=3;
        }
        return new_array;
    }
    
    
    
    public static int getNumbInt( int num ){
        float va = 1024;
	    int i=0;
	    while(va>1){
	        va /=10;
	        i=1;
	    }
	    return i;
    }
	public static int getNumbBin( int num ){
        int i = 0;
        while(num>1){
            i++;
            num>>=1;
        }
        i++;
        return i;
    }
    
}
