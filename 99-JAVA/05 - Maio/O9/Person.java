abstract class Person 
{
    private Integer coins = 10;
    private String playerName;

    abstract boolean coop();
    abstract void calc(boolean value);
    abstract Person copy();
    abstract public void incrementCount();
    abstract public void decrementCount();


    Person( String name )
    {
        this.playerName = name;
    }

    public void addCoins(Integer value)
    {
        this.coins += (value-1);
    }

    public Integer getCoin()
    {
        return this.coins;
    }


    public String getName()
    {
        return this.playerName;
    }



    




}
