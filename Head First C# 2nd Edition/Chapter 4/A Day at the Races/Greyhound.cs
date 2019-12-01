using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace A_Day_at_the_Races
{
    class Greyhound
    {
        public int StartingPosition;
        public int RacetrackLength;
        public PictureBox MyPictureBox = null;
        public int Location = 0;
        public static Random Randomizer = new Random();

        public bool Run()
        {
            //Location = StartingPosition + Randomizer.Next(1, 4);
            Point p = MyPictureBox.Location;
            p.X += Randomizer.Next(1, 4);
            MyPictureBox.Location = p;
            MyPictureBox.Update();

            if(MyPictureBox.Location.X > RacetrackLength)
            {
                return true;
            }
            return false;
        }

        public void TakeStartingPosition()
        {
            Location = StartingPosition;
            Point p = MyPictureBox.Location;
            p.X = StartingPosition;
            MyPictureBox.Location = p;
            MyPictureBox.Update();
        }
    }
}
