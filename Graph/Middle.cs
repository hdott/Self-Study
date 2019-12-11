using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Graph
{
    class Middle
    {
        public Graph.Graph CurrentGraph { get; set; }
        private bool IsSaved { get; set; }
        public bool CreateNewGraph(string name, bool isDiGraph)
        {
            if(CurrentGraph == null)
            {
                CurrentGraph = new Graph.Graph(name, isDiGraph);
                return true;
            } 
            else if (IsSaved)
            {
                CurrentGraph = new Graph.Graph(name, isDiGraph);
                return true;
            }

            return false;
        }


    }
}
