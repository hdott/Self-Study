using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace A_Day_at_the_Races
{
    class Guy
    {
        public string Name;
        public Bet MyBet;
        public int Cash;
        public RadioButton MyRadioButton;
        public Label MyLabel;

        public void UpdateLabels()
        {
            MyLabel.Text = MyBet.GetDescription();
            MyLabel.Update();
            MyRadioButton.Text = Name + " has " + Cash + " bucks";
            MyRadioButton.Update();
        }

        public void ClearBet()
        {
            MyBet.Amount = 0;
            MyBet.Dog = 0;
        }

        public bool PlaceBet(int Amount, int Dog)
        {
            if(Amount < Cash)
            {
                MyBet = new Bet
                {
                    Amount = Amount,
                    Dog = Dog,
                    Bettor = this
                };
                return true;
            }
            return false;
        }
        
        public void Collect(int Winner)
        {
            if(MyBet.Amount != 0)
            {
                Cash += MyBet.PayOut(Winner);
            }
        }
    }
}
