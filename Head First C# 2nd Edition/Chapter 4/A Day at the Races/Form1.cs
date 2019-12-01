using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Windows.Forms;

namespace A_Day_at_the_Races
{
    public partial class Form1 : Form
    {
        Guy[] guys = new Guy[3];
        Greyhound[] dogs = new Greyhound[4];
        public Form1()
        {
            InitializeComponent();

            guys[0] = new Guy()
            {
                Name = "Joe",
                Cash = 50,
                MyRadioButton = joeRadioButton,
                MyLabel = joeLabel
            };
            guys[0].PlaceBet(0, 0);
            guys[0].UpdateLabels();
            guys[1] = new Guy()
            {
                Name = "Bob",
                Cash = 75,
                MyRadioButton = bobRadioButton,
                MyLabel = bobLabel
            };
            guys[1].PlaceBet(0, 0);
            guys[1].UpdateLabels();
            guys[2] = new Guy()
            {
                Name = "Al",
                Cash = 45,
                MyRadioButton = alRadioButton,
                MyLabel = alLabel
            };
            guys[2].PlaceBet(0, 0);
            guys[2].UpdateLabels();

            dogs[0] = new Greyhound()
            {
                StartingPosition = dog1PictureBox.Location.X,
                MyPictureBox = dog1PictureBox,
                RacetrackLength = dog1PictureBox.Location.X + raceTrackPictureBox.Width
            };
            dogs[1] = new Greyhound()
            {
                StartingPosition = dog2PictureBox.Location.X,
                MyPictureBox = dog2PictureBox,
                RacetrackLength = dog2PictureBox.Location.X + raceTrackPictureBox.Width
            };
            dogs[2] = new Greyhound()
            {
                StartingPosition = dog3PictureBox.Location.X,
                MyPictureBox = dog3PictureBox,
                RacetrackLength = dog3PictureBox.Location.X + raceTrackPictureBox.Width
            };
            dogs[3] = new Greyhound()
            {
                StartingPosition = dog4PictureBox.Location.X,
                MyPictureBox = dog4PictureBox,
                RacetrackLength = dog4PictureBox.Location.X + raceTrackPictureBox.Width
            };
            //dogs[0].RacetrackLength = raceTrackPictureBox.ImageLocation.Length;
            //dogs[1].RacetrackLength = raceTrackPictureBox.ImageLocation.Length;
            //dogs[2].RacetrackLength = raceTrackPictureBox.ImageLocation.Length;
            //dogs[3].RacetrackLength = raceTrackPictureBox.ImageLocation.Length;

            minLabel.Text = "Minimum bet: " + betsNumericUD.Minimum + " bucks";
            minLabel.Update();
        }

        private void joeRadioButton_CheckedChanged(object sender, EventArgs e)
        {
            if (joeRadioButton.Enabled)
            {
                label1.Text = "Joe";
                label1.Update();
            }
        }

        private void bobRadioButton_CheckedChanged(object sender, EventArgs e)
        {
            if (bobRadioButton.Enabled)
            {
                label1.Text = "Bob";
                label1.Update();
            }
        }

        private void alRadioButton_CheckedChanged(object sender, EventArgs e)
        {
            if (alRadioButton.Enabled)
            {
                label1.Text = "Al";
                label1.Update();
            }
        }

        private void betsButton_Click(object sender, EventArgs e)
        {
            foreach(Guy guy in guys)
            {
                if (guy.Name.Equals(label1.Text))
                {
                    guy.PlaceBet((int)betsNumericUD.Value, (int)dogNumericUD.Value);
                    guy.UpdateLabels();
                    break;
                }
            }
        }

        private void RaceInProgress()
        {
            betsButton.Enabled = false;
            raceButton.Enabled = false;

            int isWinner = 0;
            while (isWinner == 0)
            {
                for(int i = 0; i < 4; ++i)
                {
                    if (dogs[i].Run())
                    {
                        MessageBox.Show("We have a winner - dog #" + (i + 1) + "!", "Winner");
                        isWinner = i+1;
                        break;
                    }
                }
                raceTrackPictureBox.Update();
                //Thread.Sleep(500);
            }
            foreach(Guy guy in guys)
            {
                guy.Collect(isWinner);
                guy.ClearBet();
                guy.UpdateLabels();
            }


            betsButton.Enabled = true;
            raceButton.Enabled = true;
            foreach(Greyhound dog in dogs)
            {
                dog.TakeStartingPosition();
            }
        }

        private void raceButton_Click(object sender, EventArgs e)
        {
            RaceInProgress();
        }
    }
}
