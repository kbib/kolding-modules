$(document).ready(function() {
  // Remove wildcard query from search box to avoid confusing users
  $("#search :text").each(function(i, e) {
    $(e).val($(e).val().replace('*=*', ''));
  });
});