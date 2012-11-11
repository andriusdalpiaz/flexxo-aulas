TimeTrac = {}
TimeTrac.Views = {}
TimeTrac.Location = {}
TimeTrac.Broadcast = {}
TimeTrac.Controls = {}


$(function() {
   TimeTrac.Controls.Container = $("#container");
   $("#menu a").click(function(e) {

   })
   TimeTrac.Views.RenderView();
})

$(window).bind("hashchange", function() {
   TimeTrac.Views.RenderView();
});

TimeTrac.Views.RenderView = function() 
{
   var uri = TimeTrac.Views.GetViewUri();
   if(uri)
   {
      try{
         var view = new EJS({ url : uri}).render(TimeTrac.Location);
         TimeTrac.Controls.Container.html(view);
      }catch(err){
         TimeTrac.Broadcast.Error(err.message);
      }
      
   }
}

TimeTrac.Views.GetViewUri = function() {
   TimeTrac.Location.Hash = location.hash.split('/')

   if(TimeTrac.Location.Hash.length > 1)
   {
      var viewUri = "";
      viewUri = "views/" + TimeTrac.Location.Hash[1];
      
      if(TimeTrac.Location.Hash[2])
      {
         viewUri += "/" + TimeTrac.Location.Hash[2] + ".ejs"
      }
      else
      {
         viewUri += "/index.ejs"
      }

      return viewUri;
   }
};

TimeTrac.Broadcast.Error = function(msg) {
   var notification = $("<div/>").addClass("alert").addClass("alert-error").html(msg)
   TimeTrac.Controls.Container.prepend(notification.slideUp(1000));
};