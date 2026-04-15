// evnt is a action that happens in a browser,  when html page is loaded therer are differemt type of event sich as
// 1. click a button 
// 2. typing in a input field
// 3. moving the mouse
// 4. submitting a form
// 5. page loading
 
// the page loading ouccure when there is poor internet connection or localStorage issue
// event handler is a function in js that get executed when a event ouccures 


// <!DOCTYPE html>
// <html lang="en">
// <head>
//     <meta charset="UTF-8">
//     <title>Event Handler Example</title>
// </head>
// <body>

//     <button id="btn">Click Me</button>

//     <script>
//         function sayHello() {
//             alert("Hello!");
//         }

//         const button = document.getElementById("btn");
//         button.addEventListener("click", sayHello);
//     </script>

// </body>
// </html>

// addEventListener method in js is used to attach an event handler to a specific element so that it runs when a specific event occurs. 
// syntax: element.addEventListener(event, function);   

// <html lang="en">
// <head>
//     <meta charset="UTF-8">
//     <meta name="viewport" content="width=device-width, initial-scale=1.0">
//     <title>Event Listener Example</title>
// </head>
// <body>

//     <button id="btn">Click Me</button>

//     <script>
//         document.addEventListener("DOMContentLoaded", function() {
//             const button = document.getElementById("btn");
//             button.addEventListener("click", function() {
//                 alert("Button clicked!");
//             });
//         });
//     </script>

// </body>
// </html>1


// <!DOCTYPE html>
// <html lang="en">
// <head>
//     <meta charset="UTF-8">
//     <meta name="viewport" content="width=device-width, initial-scale=1.0">
//     <title>Document</title>
// </head>
// <body>
//     <button id="btn"> change background</button> 
//     <script>
//         const btn = document.getElementById('btn');
//         btn.addEventListener('click', function() {
//             document.body.style.backgroundColor = 'blue';
//         });
//     </script>

// </body>
// </html>

// <!DOCTYPE html>
// <html lang="en">
// <head>
//     <meta charset="UTF-8">
//     <meta name="viewport" content="width=device-width, initial-scale=1.0">
//     <title>Document</title>
// </head>
// <body>
//     <p id="text">Hello, World!</p>
//     <button id="btn">Click Me</button>
//     <script>
//         const btn = document.getElementById('btn');
//         const text = document.getElementById('text');
//         btn.addEventListener('click',function(){
//             text.style.backgroundColor = 'lightblue';
//             text.style.color = 'white';
//             text.style.fontFamily = 'Arial, sans-serif';
//             text.style.fontSize = '200px';

//         });
//         </script>
// </body>
// </html>


