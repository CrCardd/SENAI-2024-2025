class Tolerant extends Person
{
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

    Tolerant(String name)
    {
        super(name);
    }


}