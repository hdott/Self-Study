using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace WebApplication2.Models
{
    public class ToDoItemViewModel
    {
        public string Title { get; set; }
        public List<string> Tasks { get; set; }
        public bool IsComplete { get; set; }
    }
}
