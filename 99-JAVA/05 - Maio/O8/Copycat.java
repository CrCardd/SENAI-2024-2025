import java.util.Random;

class Copycat extends Person
{
    private Integer copycatValue = null;

    @Override
    public boolean coop()
    {
        Random rand = new Random();
        if(copycatValue == null)
            return (rand.nextInt(2) == 1) ? true : false;
        return (copycatValue == 1) ? true : false;
    }

    @Override
    public void calc(boolean value)
    {
        this.copycatValue = (value) ? 1 : 0;
    }

    Copycat(String name)
    {
        super(name);
    }
}
