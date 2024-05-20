class Cheater extends Person 
{
    @Override
    public boolean coop(){
        return false;
    }

    @Override
    public void calc(boolean value){}

    Cheater(String name)
    {
        super(name);
    }
}
