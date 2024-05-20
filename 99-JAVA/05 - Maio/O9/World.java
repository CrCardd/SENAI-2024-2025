import java.util.Random;
// import java.util.Scanner;

public class World 
{
    Stack allPlayers = null;

    World(Integer grumpys, Integer collaboratives, Integer cheaters, Integer tolerants, Integer copycats)
    {
        this.allPlayers = new Stack(grumpys, collaboratives, cheaters, tolerants, copycats);
        
    }

    public Person getPlayer(Integer index)
    {
        return allPlayers.getPlayer(index);
    }

    public void game()
    {
        // Scanner scan = new Scanner(System.in);
        Random rand = new Random();
        Machine machine = new Machine();
        Person player1=null,player2=null;
        int index,index2;
        while( Copycat.getCountBool() + Grumpy.getCountBool() + Tolerant.getCountBool() + Cheater.getCountBool() + Collaborative.getCountBool() != 1)
        {
            do
            {
                index = rand.nextInt(this.allPlayers.getSize());
                index2 = rand.nextInt(this.allPlayers.getSize());
            } while(index == index2);
            player1 = getPlayer(index);
            player2 = getPlayer(index2);

            
            if(player1.getCoin() >=20)
            {
                System.out.println("\n\n\nCop");
                allPlayers.addPlayer(player1.copy());
                player1.addCoins(-9);
            } else if (player1.getCoin() < 1) 
            {
                System.out.println("\n\n\nDel");
                allPlayers.removePlayer(index);    
            }
            
            if(player2.getCoin() >=20)
            {
                System.out.println("\n\n\nCop");
                allPlayers.addPlayer(player2.copy());
                player1.addCoins(-9);
            } else if (player2.getCoin() < 1) 
            {
                System.out.println("\n\n\nDel");
                allPlayers.removePlayer(index2);
            }
            
            machine.round(player1,player2);
            System.err.printf("\nCHEATERS: %d | COLLABORATIVES: %d | COPYCAT: %d | GRUMPY: %d | TOLERANT: %d",Cheater.getCount(), Collaborative.getCount(), Copycat.getCount(), Grumpy.getCount(), Tolerant.getCount());
            System.out.print("\nPLAYER 1: " + player1.getName() + "\tCOINS: " + player1.getCoin());
            System.out.print("\t\t\tPLAYER 2: " + player2.getName() + "\tCOINS: " + player2.getCoin());
            // String x = scan.nextLine();
        }
        
        for(int i=0; i<this.allPlayers.getSize() ; i++)
        {
            Person player = getPlayer(i);
            if(machine.endOfRound(player))
            {
                allPlayers.removePlayer(i);
                continue;
            }
            
        }
        System.err.printf("\nCHEATERS: %d | COLLABORATIVES: %d | COPYCAT: %d | GRUMPY: %d | TOLERANT: %d",Cheater.getCount(), Collaborative.getCount(), Copycat.getCount(), Grumpy.getCount(), Tolerant.getCount());
    }
}
