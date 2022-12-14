
package Money.main;



public class Main {
    public static void main(String[]args) {
        Money five = Money.dollar(5);
        Money ten = Money.franc(10);
        Bank bank = new Bank();
        bank.addRate("CHF", "USD", 2);
        Expression sum = new Sum(five, ten).plus(five);
        Money result = bank.reduce(sum, "USD");
        System.out.println(result);
    }
}
