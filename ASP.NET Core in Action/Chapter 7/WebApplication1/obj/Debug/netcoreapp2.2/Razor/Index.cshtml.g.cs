#pragma checksum "C:\Users\nhori\Git\SStudy\ASP.NET Core in Action\Chapter 7\WebApplication1\Index.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "310be7f2cf567c866a9b42c69268ade7414b07e3"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Index), @"mvc.1.0.view", @"/Index.cshtml")]
[assembly:global::Microsoft.AspNetCore.Mvc.Razor.Compilation.RazorViewAttribute(@"/Index.cshtml", typeof(AspNetCore.Index))]
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
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"310be7f2cf567c866a9b42c69268ade7414b07e3", @"/Index.cshtml")]
    public class Index : global::Microsoft.AspNetCore.Mvc.Razor.RazorPage<dynamic>
    {
        #pragma warning disable 1998
        public async override global::System.Threading.Tasks.Task ExecuteAsync()
        {
#line 1 "C:\Users\nhori\Git\SStudy\ASP.NET Core in Action\Chapter 7\WebApplication1\Index.cshtml"
   
    var tasks = new List<string>
    {
        "Buy milk", "Buy eggs", "Buy bread"
    };

#line default
#line hidden
            BeginContext(102, 36, true);
            WriteLiteral("\r\n<h1>Tasks to complete</h1>\r\n<ul>\r\n");
            EndContext();
#line 10 "C:\Users\nhori\Git\SStudy\ASP.NET Core in Action\Chapter 7\WebApplication1\Index.cshtml"
     for(var i=0; i<tasks.Count; i++)
    {
        var task = tasks[i];

#line default
#line hidden
            BeginContext(214, 12, true);
            WriteLiteral("        <li>");
            EndContext();
            BeginContext(227, 1, false);
#line 13 "C:\Users\nhori\Git\SStudy\ASP.NET Core in Action\Chapter 7\WebApplication1\Index.cshtml"
       Write(i);

#line default
#line hidden
            EndContext();
            BeginContext(228, 3, true);
            WriteLiteral(" - ");
            EndContext();
            BeginContext(232, 4, false);
#line 13 "C:\Users\nhori\Git\SStudy\ASP.NET Core in Action\Chapter 7\WebApplication1\Index.cshtml"
            Write(task);

#line default
#line hidden
            EndContext();
            BeginContext(236, 7, true);
            WriteLiteral("</li>\r\n");
            EndContext();
#line 14 "C:\Users\nhori\Git\SStudy\ASP.NET Core in Action\Chapter 7\WebApplication1\Index.cshtml"
    }

#line default
#line hidden
            BeginContext(250, 5, true);
            WriteLiteral("</ul>");
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
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<dynamic> Html { get; private set; }
    }
}
#pragma warning restore 1591