#pragma checksum "C:\Users\nhori\Git\SStudy\ASP.NET Core in Action\Chapter 7\WebApplication2\Views\Home\ViewTodo.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "c8c36d2f2b8a836b1b7c9034bc225ee700421108"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Views_Home_ViewTodo), @"mvc.1.0.view", @"/Views/Home/ViewTodo.cshtml")]
[assembly:global::Microsoft.AspNetCore.Mvc.Razor.Compilation.RazorViewAttribute(@"/Views/Home/ViewTodo.cshtml", typeof(AspNetCore.Views_Home_ViewTodo))]
namespace AspNetCore
{
    #line hidden
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Threading.Tasks;
    using Microsoft.AspNetCore.Mvc;
    using Microsoft.AspNetCore.Mvc.Rendering;
    using Microsoft.AspNetCore.Mvc.ViewFeatures;
#line 1 "C:\Users\nhori\Git\SStudy\ASP.NET Core in Action\Chapter 7\WebApplication2\Views\_ViewImports.cshtml"
using WebApplication2;

#line default
#line hidden
#line 1 "C:\Users\nhori\Git\SStudy\ASP.NET Core in Action\Chapter 7\WebApplication2\Views\Home\ViewTodo.cshtml"
using WebApplication2.Models;

#line default
#line hidden
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"c8c36d2f2b8a836b1b7c9034bc225ee700421108", @"/Views/Home/ViewTodo.cshtml")]
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"6b36aee4455a440795f240a74431c307640c545e", @"/Views/_ViewImports.cshtml")]
    public class Views_Home_ViewTodo : global::Microsoft.AspNetCore.Mvc.Razor.RazorPage<ToDoItemViewModel>
    {
        #pragma warning disable 1998
        public async override global::System.Threading.Tasks.Task ExecuteAsync()
        {
            BeginContext(57, 6, true);
            WriteLiteral("\r\n<h1>");
            EndContext();
            BeginContext(64, 11, false);
#line 4 "C:\Users\nhori\Git\SStudy\ASP.NET Core in Action\Chapter 7\WebApplication2\Views\Home\ViewTodo.cshtml"
Write(Model.Title);

#line default
#line hidden
            EndContext();
            BeginContext(75, 9, true);
            WriteLiteral("</h1>\r\n\r\n");
            EndContext();
        }
        #pragma warning restore 1998
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.ViewFeatures.IModelExpressionProvider ModelExpressionProvider { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.IUrlHelper Url { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.IViewComponentHelper Component { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.Rendering.IJsonHelper Json { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<ToDoItemViewModel> Html { get; private set; }
    }
}
#pragma warning restore 1591