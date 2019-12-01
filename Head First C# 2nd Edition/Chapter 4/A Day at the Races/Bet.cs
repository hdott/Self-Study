using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace A_Day_at_the_Races
{
    class Bet
    {
        public int Amount;
        public int Dog;
        public Guy Bettor;

        public string GetDescription()
        {
            if(Amount == 0)
            {
                return (Bettor.Name + " hasn't placed a bet");
            }
            else
            {
                return (Bettor.Name + " bets " + Amount + " on dog #" + Dog);
            }
        }

        public int PayOut(int Winner)
        {
            if(Winner == Dog)
            {
                return Amount;
            }
            else
            {
                return -Amount;
            }
        }
    }
}
