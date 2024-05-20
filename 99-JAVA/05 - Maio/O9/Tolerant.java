class Tolerant extends Person
{
    public static int count = 0;
    private int times = 0;
    private int timesCheat = 0;
    private boolean tolerant = true;

    @Override
    public boolean coop()
    {
        return this.tolerant;
    }

    @Override
    public void calc(boolean value)
    {
        if(this.timesCheat == 3)
        {
            this.times = 0;
        }
        if(!value)
        {
            this.times += 1;
        }
        if(this.times == 3)
        {
            this.timesCheat += 1;
            this.tolerant = false;
        }
    }

    @Override
    public Person copy()
    {
        Person clone = new Tolerant(getName());
        incrementCount();
        return clone;
    }

    Tolerant(String name)
    {
        Tolerant.count++;

        super(name);
    }

    @Override
    public void incrementCount()
    {
        Tolerant.count++;
    }

    @Override
    public void decrementCount()
    {
        Tolerant.count--;
    }

    
    public static int getCount()
    {
        return Tolerant.count;
    }

    public static int getCountBool()
    {   
        return (Tolerant.count < 1) ? 0 : 1; 
    }
}