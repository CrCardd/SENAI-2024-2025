class Grumpy extends Person 
{
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

    Grumpy(String name)
    {
        super(name);
    }

}
