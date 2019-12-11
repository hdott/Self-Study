using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using WebApplication2.Models;

// For more information on enabling MVC for empty projects, visit https://go.microsoft.com/fwlink/?LinkID=397860

namespace WebApplication2
{
    public class HomeController : Controller
    {
        // GET: /<controller>/
        public IActionResult Index()
        {
            var viewModel = new ToDoItemViewModel
            {
                Title = "Tasks for today",
                Tasks = new List<string>
                {
                    "Get fuel",
                    "Check oil",
                    "Check tyre pressure"
                },
                IsComplete = false
            };

            return View(viewModel);
            //return View();
        }

    }
}
