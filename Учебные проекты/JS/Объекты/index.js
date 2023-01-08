const appNode = document.querySelector(".js-app");
const book = {
  author: "Остин Клеон",
  title: "Покажи свою работу",
  image: "https://andychef.ru/wp-content/uploads/2014/06/cover.jpg",
  year: "2021",
  pages: 220,
};
const book1 = new Object();

function render() {
  const html = `
        <div>
            <h1>${book.title}</h1>
            <p>${book.author}</p> 
            <img
                src='${book.image}'
                alt='${book.title}, ${book.author}'/>  <!-- любой текст -->
        </div> 
    `; // не работают комментарии в div
    // что за ` апостров
        // live server не работает сайт при запуске
  appNode.innerHTML = html;
}

render();

console.log(book.author);