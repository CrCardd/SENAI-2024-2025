abstract class Person 
{
    private Integer coins = 10;
    private boolean alive = true;
    private String playerName;

    abstract boolean coop();
    abstract void calc(boolean value);

    Person( String name )
    {
        this.playerName = name;
    }


    public void taxa()
    {
        this.coins -= 1;
    }

    public void addCoins(Integer value)
    {
        taxa();
        this.coins += value;
    }

    public Integer getCoin()
    {
        return this.coins;
    }

    public void setAlive(boolean value)
    {
        this.alive = value;
    }

    public boolean getAlive()
    {
        return this.alive;
    }


    public String getName()
    {
        return this.playerName;
    }


}
