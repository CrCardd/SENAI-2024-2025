class Grumpy extends Person 
{
    public static int count = 0;
    private boolean grumpy = true;

    @Override
    public boolean coop()
    {
        return this.grumpy;
    }

    @Override
    public void calc(boolean value)
    {
        if(!value)
        {
            this.grumpy = false;
        }
    }

    @Override
    public Person copy()
    {
        Person clone = new Grumpy(getName());
        incrementCount();
        return clone;
    }

    Grumpy(String name)
    {
        Grumpy.count++;

        super(name);
    }

    @Override
    public void incrementCount()
    {
        Grumpy.count++;
    }

    @Override
    public void decrementCount()
    {
        Grumpy.count--;
    }

    
    public static int getCount()
    {
        return Grumpy.count;
    }

    public static int getCountBool()
    {   
        return (Grumpy.count < 1) ? 0 : 1; 
    }
}
