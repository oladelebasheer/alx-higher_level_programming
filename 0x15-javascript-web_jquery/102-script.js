document.addEventListener('DOMContentLoaded', function () {
    $('input#btn_translate').click(function () {
      $.get('https://www.fourtonfish.com/hellosalut/hello/' +
  $('input#language_code').val(), function (data) {
        $('div#hello').html(data.hello);
      });
    });
  });