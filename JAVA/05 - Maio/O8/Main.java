public class Main
{
    public static void main(String[] args)
    {
        World world = new World(0, 1, 0, 2,4);
        Person p1 = world.getPlayer();
        Person p2 = world.getPlayer();
        world.game(p1, p2);
    }
}