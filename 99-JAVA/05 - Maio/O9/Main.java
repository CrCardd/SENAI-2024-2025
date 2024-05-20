public class Main
{
    public static void main(String[] args)
    {
       
        int cheaters = 1;
        int collaboratives = 1;
        int copycats = 0;
        int grumpys = 0;
        int tolerants = 0;

        World world = new World(grumpys, collaboratives, cheaters, tolerants, copycats);
        world.game();
    }
}