using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Graph.Graph
{
    class Graph
    {
        public string Name { get;set; }
        public bool IsDiGraph { get; set; }
        private List<Edge> edges;
        private List<string> vertices;
        private int[] adjMatrix;
        private List<List<string>> adjList;

        public Graph(string name, bool isDiGraph)
        {
            Name = name;
            IsDiGraph = isDiGraph; 
        }
    }
}
