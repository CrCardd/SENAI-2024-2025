import java.util.Random;

public class World 
{
    Person[] allPlayers = null;

    public void setAllPlayers(Person[] allPlayers)
    {
        this.allPlayers = allPlayers;
    }
    
    World(Integer grumpys, Integer collaboratives, Integer cheaters, Integer tolerants, Integer copycats)
    {

        Person[] everyone = new Person[grumpys + collaboratives + cheaters + tolerants+copycats];
        int j=0,i=0;
        for(; i < grumpys ; i++)
            everyone[i] = new Grumpy("Grumpy");
        j+=grumpys;
        for(; i < j+collaboratives ; i++)
            everyone[i] = new Collaborative("Collaborative");
        j+=collaboratives;
        for(; i < j+cheaters ; i++)
            everyone[i] = new Cheater("Cheater");
        j+=cheaters;
        for(; i < j+tolerants ; i++)
            everyone[i] = new Tolerant("Tolerant");
            j+=tolerants;
        for(; i < j+copycats ; i++)
            everyone[i] = new Copycat("Copycat");
        setAllPlayers(everyone);
    }

    public Person getPlayer()
    {
        Random rand = new Random();
        Person player = null;
        do{
            player = this.allPlayers[rand.nextInt(allPlayers.length)];
        } while(player.getAlive() == false);
        return player;
    }

    public void game(Person player1, Person player2)
    {
        Machine machine = new Machine();
        for(int i = 0; i < 5; i++)
        {
            machine.round(player1,player2);
        }
        // Person loser = (player1.getCoin() < player2.getCoin()) ? player1 : (player1.getCoin() == player2.getCoin()) ? null : player2;
        Person loser = (player1.getCoin() < player2.getCoin()) ? player1 : player2;
        System.out.printf("\n\n\n\nPLAYER ONE: %s\nPLAYER ONE COINS: %d\n\nPLAYER TWO: %s\nPLAYER TWO COINS: %d\n\n\nLOSER: %s",player1.getName(), player1.getCoin(),player2.getName(), player2.getCoin(),loser.getName());
        loser.setAlive(false);
    }
}
