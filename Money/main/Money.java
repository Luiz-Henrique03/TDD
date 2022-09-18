
package Money.main;

import java.util.Objects;


public class Money implements Expression {

    protected int amount;
    protected String currency;

    Money(int amount, String currency) {
        this.amount = amount;
        this.currency = currency;
    }

    public static Money dollar(int amount) {
        return new Money(amount, "USD");
    }

    public static Money franc(int amount) {
        return new Money(amount, "CHF");
    }

    @Override
    public Expression times(int multiplier) {
        return new Money(amount * multiplier, currency);
    }

    @Override
    public Expression plus(Expression addend) {
        return new Sum(this, addend);
    }

    public Money plus(Money addend) {
        return new Money(this.amount + addend.amount, currency);
    }

    public String currency() {
        return currency;
    }

    @Override
    public Money reduce(Bank bank, String to) {
        int rate = bank.rate(currency, to);
        return new Money(amount / rate, to);
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null || obj.getClass() != this.getClass())
            return false;
        Money money = (Money) obj;
        return amount == money.amount
                && currency().equals(money.currency());
    }

    @Override
    public int hashCode() {
        int hash = 5;
        hash = 83 * hash + this.amount;
        hash = 83 * hash + Objects.hashCode(this.currency);
        return hash;
    }

    @Override
    public String toString() {
        return amount + " " + currency;
    }

}
