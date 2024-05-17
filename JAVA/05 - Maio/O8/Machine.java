public class Machine
{
    
    public void round(Person player1, Person player2)
    {
        
        
        if(player1.coop() && player2.coop())
        {
            player1.addCoins(2);
            player2.addCoins(2);
        } else if( !player1.coop() && player2.coop())
        {
            player1.addCoins(4);
            player2.addCoins(0);
        } else if( player1.coop() && !player2.coop())
        {
            player1.addCoins(0);
            player2.addCoins(4);
        }
        System.out.print("\nPLAYER ONE: " + player1.coop() + "  COINS: " + player1.getCoin());
        System.out.print("   |    PLAYER TWO: " + player2.coop() + "  COINS: " + player2.getCoin());
        player1.calc(player2.coop());
        player2.calc(player1.coop());
    }
}