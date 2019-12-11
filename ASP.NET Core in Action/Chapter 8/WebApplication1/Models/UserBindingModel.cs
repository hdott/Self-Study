using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace WebApplication1.Models
{
    public class UserBindingModel
    {
        [Required]
        [StringLength(100, ErrorMessage = "Maximum length is {1}")]
        [Display(Name = "Your name")]
        public string FirstName { get; set; }

        [Required]
        [StringLength(100, ErrorMessage = "Maximum length is {1}")]
        [Display(Name = "Last Name")]
        public string LastName { get; set; }

        [Required]
        [EmailAddress]
        public string Email { get; set; }

        [Phone(ErrorMessage = "Not a valid phone number.")]
        [Display(Name = "Phone number")]
        public string PhoneNumber { get; set; }
    }
}
