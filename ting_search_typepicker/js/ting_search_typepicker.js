$(document).ready(function() {
  // Remove wildcard query from search box to avoid confusing users
  $("#search :text").val($(this).val().replace('*=*'));
});