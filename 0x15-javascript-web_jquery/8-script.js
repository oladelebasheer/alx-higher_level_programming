$.get('https://swapi-api.alx-tools.com/api/films/?format=json', function (data) {
  for (const film of data.results) {
    $('ul#list_movies').append(`<li>${film.title}</li>`);
  }
});