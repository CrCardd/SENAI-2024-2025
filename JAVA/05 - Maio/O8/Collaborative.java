class Collaborative extends Person
{
    @Override
    public boolean coop()
    {
        return true;
    }

    @Override
    public void calc(boolean value){}

    Collaborative(String name)
    {
        super(name);
    }
}
