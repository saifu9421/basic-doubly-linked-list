import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        while (true) {
            for (BigInteger i = BigInteger.ZERO; i.compareTo(new BigInteger("9000000000000000000")) <= 0; i = i.add(BigInteger.ONE)) {
                System.out.print(i + " ");
            }
        }
    }
}