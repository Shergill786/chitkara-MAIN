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


// <!DOCTYPE html>
// <html lang="en">
// <head>
//     <meta charset="UTF-8">
//     <title>Chitkara University</title>

//     <style>
//         .container {
//             border: 2px solid red;
//             padding: 20px;
//             text-align: center;
//             border-radius: 10px;
//         }

//         .card, .card2 {
//             border: 2px solid black;
//             margin: 20px 0;
//             padding: 15px;
//             border-radius: 10px;
//         }

//         button {
//             padding: 8px 15px;
//             border-radius: 5px;
//         }
//     </style>
// </head>

// <body>

// <div class="container">
//     <h1>Chitkara University</h1>

//     <!-- Card 1 -->
//     <div class="card">
//         <h2 id="text1">About CU</h2>
//         <p id="text3">Good university and good culture</p>
//         <button id="btn1">OK</button>
//     </div>

//     <!-- Card 2 -->
//     <div class="card2">
//         <h2>Courses (BE CSE-AIML)</h2>
//         <p id="text2">Good course and good placements</p>
//         <button id="btn2">OK</button>
//     </div>
// </div>

// <script>
//     const btn1 = document.getElementById("btn1");
//     const btn2 = document.getElementById("btn2");
//     const text1 = document.getElementById("text1");
//     const text2 = document.getElementById("text2");
//     const text3 = document.getElementById("text3");

//     btn1.addEventListener("click", function() {
//         text1.style.color = "white";
//         text1.style.backgroundColor = "green";
//         text1.style.fontWeight = "bold";
//         text1.style.padding = "10px";
//         text1.style.fontSize = "20px";
//         text3.style.color = "white";
//         text3.style.backgroundColor = "green";
//         text3.style.fontWeight = "bold";
//         text3.style.padding = "10px";
//         text3.style.fontSize = "50px";

//         btn1.style.backgroundColor = "blue";
//         btn1.style.color = "white";
//         btn1.style.fontWeight = "bold";
//     });

//     btn2.addEventListener("click", function() {
//         text2.style.color = "yellow";
//         text2.style.backgroundColor = "purple";
//         text2.style.fontSize = "20px";
//         text2.style.fontWeight = "bold";
//         text2.style.padding = "10px";
//         btn2.style.backgroundColor = "purple";
//         btn2.style.color = "white";
//         btn2.style.fontWeight = "bold";
//     });

// </script>
// </body>
// </html>

// <!DOCTYPE html>
// <html>

// <head>
//     <title>All Mouse Events</title>
//     <style>
//         #box {
//             width: 200px;
//             height: 200px;
//             background-color: lightblue;
//             text-align: center;
//             line-height: 200px;
//             margin: 50px;
//             font-weight: bold;
//         }
//     </style>
// </head>

// <body>

//     <div id="box">Hover / Click Me</div>

//     <script>
//         const box = document.getElementById("box");
//         box.addEventListener("click", () => console.log("click"));
//         box.addEventListener("dblclick", () => console.log("double click"));
//         box.addEventListener("mousedown", () => console.log("mouse down"));
//         box.addEventListener("mouseup", () => console.log("mouse up"));
//         box.addEventListener("mouseenter", () => console.log("mouse enter"));
//         box.addEventListener("mouseleave", () => console.log("mouse leave"));
//         box.addEventListener("mouseover", () => console.log("mouse over"));
//         box.addEventListener("mouseout", () => console.log("mouse out"));
//         box.addEventListener("mousemove", () => console.log("mouse moving"));
//     </script>

// </body>

// </html>




// <!DOCTYPE html>
// <html>

// <head>
//     <title>All Mouse Events</title>
//     <style>
//         #box {
//             width: 200px;
//             height: 200px;
//             background-color: lightblue;
//             text-align: center;
//             line-height: 200px;
//             margin: 50px;
//             font-weight: bold;
//         }
//     </style>
// </head>

// <body>

//     <div id="box">Hover / Click Me</div>

//     <script>
//         const box = document.getElementById("box");

//         box.addEventListener("click", () => alert("click"));
//         box.addEventListener("dblclick", () => alert("double click"));
//         box.addEventListener("mousedown", () => alert("mouse down"));
//         box.addEventListener("mouseup", () => alert("mouse up"));
//         box.addEventListener("mouseenter", () => alert("mouse enter"));
//         box.addEventListener("mouseleave", () => alert("mouse leave"));
//         box.addEventListener("mouseover", () => alert("mouse over"));
//         box.addEventListener("mouseout", () => alert("mouse out"));
//         box.addEventListener("mousemove", () => alert("mouse moving"));
//     </script>

// </body>

// </html>