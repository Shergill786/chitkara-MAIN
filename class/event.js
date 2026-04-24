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


// <!DOCTYPE html>
// <html lang="en">
// <head>
//     <meta charset="UTF-8">
//     <meta name="viewport" content="width=device-width, initial-scale=1.0">
//     <title>keyboard Events</title>
// </head>
// <body>
//     <script>
//         const inputBox = document.getElementById('inputBox');
//         inputBox.addEventListener('keydown', () => alert('Key down event triggered'));
//         inputBox.addEventListener('keyup', () => alert('Key up event triggered'));
//         inputBox.addEventListener('keypress', () => alert('Key press event triggered'));
//     </script>
// </body>
// </html>


// <!DOCTYPE html>
// <html lang="en">
// <head>
//     <meta charset="UTF-8">
//     <meta name="viewport" content="width=device-width, initial-scale=1.0">
//     <title>Document</title>

//     <style>
//         .main-div{
//             border: 2px solid black;
//             padding: 20px;
//         }
        
//         .div1, .div2{
//             border: 1px solid black;
//             padding: 10px;
//             margin: 10px 0;
//         }
//     </style>
// </head>

// <body>
//     <main class="main-div">
//         <div class="child-container">
            
//             <p id="text">HELLO EVERYONE</p>

//             <div class="div1">
//                 <input type="text" id="inputBox" placeholder="Type something">
//             </div>

//             <div class="div2">
//                 <button id="hi">HI</button>
//                 <button id="ok">OK</button>
//                 <br><br>
//                 <button id="setup">SETUP</button>
//                 <button id="why">WHY</button>
//             </div>

//             <button id="bye">BYE</button>
//         </div>

//         <script>
//             const text = document.getElementById("text");
//             const inputBox = document.getElementById('inputBox');
//             inputBox.addEventListener('keydown', () => alert('who the are you?'));
            
//             document.getElementById("hi").addEventListener("mouseover", function() {
//                 alert("HI");
//             });

//             document.getElementById("hello").addEventListener("mousedown", function() {
//                 alert("HELLO");
//             });

//             document.getElementById("ok").addEventListener("click", function() {
//                 text.style.color = "red";
//                 text.style.backgroundColor = "blue";
//                 text.style.fontSize = "30px";
//                 text.style.fontWeight = "bold";
//                 text.style.fontFamily = "Times New Roman";
//             });

//             document.getElementById("setup").addEventListener("mouseout", function() {
//                 alert("SETUP");
//             });

//             document.getElementById("why").addEventListener("mousedown", function() {
//                 alert("WHY");
//             });

//             document.getElementById("bye").addEventListener("click", function() {
//                 alert("BYE");
//             });
//         </script>
//     </main>
// </body>
// </html>


// event bubbling means when a event start from the target element child and then move upwards to the parent elemnet
// if you click a button inside a div the button event happens first then the div 
// event bubbling is a default behaviour in js it help when you want parent elements to react to child events without adding any listener

// event capturing is the opposite of event bubbling  in this the event start from the parent element and then move downwards to the child element
// it is topdown approach 
// if you click button then the div event happens first then the button 
// the event capture is commonly used when you want the parent to handle the event before child elements

// event delegation means adding a single event listener to a parent element to handle events for its child elements 
// instead of adding many event listener to each child in event bubbling the event delegation use 1 listener on parent and detect which child was it 
// the event delegation improves preformance and is useful when elements are entered dynamically

// <!DOCTYPE html>
// <html lang="en">
// <head>
//     <meta charset="UTF-8">
//     <meta name="viewport" content="width=device-width, initial-scale=1.0">
//     <title>Document</title>
// </head>
// <body>
//     <div id="parent" style="padding: 40px;background:lightblue;">
//     parent
//     <button id="child"> click</button> 
//     </div>
//     <script>
//         document.getElementById("child").addEventListener("click", function() {
//             alert("Parent clicked!");
//         });
//         document.getElementById("child").addEventListener("click", function() {
//         alert("Child clicked!");
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
//     <div id="parent" style="padding: 40px;background:lightblue;">
//     parent
//     <button id="child"> click</button> 
//     </div>
//     <script>
//         document.getElementById("child").addEventListener("click", function() {
//             alert("Parent clicked!");
//         },true);
//         document.getElementById("child").addEventListener("click", function() {
//         alert("Child clicked!");
//         },true);
//     </script>
// </body>
// </html>

// <!DOCTYPE html>
// <html lang="en">
// <head>
//     <meta charset="UTF-8">
//     <meta name="viewport" content="width=device-width, initial-scale=1.0">
//     <title>Document</title>

//     <style>
//         .main-div{
//             border: 2px solid black;
//             padding: 20px;
//         }
        
//         .div1, .div2{
//             border: 1px solid black;
//             padding: 10px;
//             margin: 10px 0;
//         }
//     </style>
// </head>

// <body>
//     <main class="main-div">
//         <div class="child-container">
            
//             <p id="text">HELLO EVERYONE</p>

//             <div class="div1">
//                 <input type="text" id="inputBox" placeholder="Type something">
//             </div>

//             <div class="div2">
//                 <button id="hi">HI</button>
//                 <button id="ok">OK</button>
//                 <br><br>
//                 <button id="setup">SETUP</button>
//                 <button id="why">WHY</button>
//             </div>

//             <button id="bye">BYE</button>
//         </div>

//         <script>
//             const text = document.getElementById("text");
//             const inputBox = document.getElementById('inputBox');
//             inputBox.addEventListener('keydown', () => alert('who the are you?'));
            
//             document.getElementById("hi").addEventListener("mouseover", function() {
//                 alert("HI");
//             });

//             document.getElementById("hello").addEventListener("mousedown", function() {
//                 alert("HELLO");
//             });

//             document.getElementById("ok").addEventListener("click", function() {
//                 text.style.color = "red";
//                 text.style.backgroundColor = "blue";
//                 text.style.fontSize = "30px";
//                 text.style.fontWeight = "bold";
//                 text.style.fontFamily = "Times New Roman";
//             });

//             document.getElementById("setup").addEventListener("mouseout", function() {
//                 alert("SETUP");
//             });

//             document.getElementById("why").addEventListener("mousedown", function() {
//                 alert("WHY");
//             });

//             document.getElementById("bye").addEventListener("click", function() {
//                 alert("BYE");
//             });
//         </script>
//     </main>
// </body>
// </html>

// <!DOCTYPE html>
// <html>
// <head>
//     <title>Event Delegation</title>
// </head>
// <body>

// <button id="addBtn">Add Item</button>

// <ul id="list">
//     <li>Item 1</li>
//     <li>Item 2
//         <ul>
//             <li>Child Item A</li>
//             <li>Child Item B</li>
//         </ul>
//     </li>
//     <li>Item 3</li>
// </ul>

// <script>
// let count =4;

// document.getElementById("addBtn").addEventListener("click", () => {
//     const li = document.createElement("li");
//     li.textContent = "Item " + count++;
//     document.getElementById("list").appendChild(li);
// });

// document.getElementById("list").addEventListener("click", (e) => {
//     if (e.target.parentElement.id === "list") {
//         alert(e.target.textContent);
//     }
// });
// </script>

// </body>
// </html>

// <!DOCTYPE html>
// <html>
// <head>
//     <title>Event Delegation</title>
// </head>
// <body>

// <button id="addBtn">Add Item</button>

// <ul id="list">
//     <li>Item 1</li>
//     <li>Item 2</li>
//     <li>Item 3
//     <ul id="sub">
//         <li>section 3.1</li>
//         <ul id ="subsection"> 
//             <li> section 3.1.1 </li>
//         </ul> 
// </ul>
//     </li>
// </ul>
// <script>
// let count = 2;
// let scount=2;

// document.getElementById("addBtn").addEventListener("click", () => {
//     const li = document.createElement("li");
//     li.textContent = "section 3.1." + count++;
//     document.getElementById("subsection").appendChild(li);
// });
// document.getElementById("addBtn").addEventListener("click",()=>{
//     const li = document.createElement("li");
//     li.textContent = "section 3." + scount++;
//     document.getElementById("sub").appendChild(li);
// });

// </script>

// </body>
// </html>

// <!DOCTYPE html>
// <html>
// <head>
// <title>Limit Sub Items</title>
// <style>
// button{margin:20px;padding:8px 15px;cursor:pointer;}
// </style>
// </head>
// <body>

// <button id="ok">OK</button>

// <ul id="list">
// <li>Item 1
//     <ul>
//         <li>Item 1.1</li>
//         <li>Item 1.2</li>
//     </ul>
// </li>

// <li>Item 2
//     <ul>
//         <li>Item 2.1
//             <ul>
//                 <li id="target">Item 2.1.1</li>
//             </ul>
//         </li>
//     </ul>
// </li>
// </ul>

// <script>
// let count3 = 3;

// document.getElementById("ok").addEventListener("click", () => {
    
//     let target = document.getElementById("target");
//     let sub = target.querySelector("ul");

//     // create sub list if not exists
//     if (!sub) {
//         sub = document.createElement("ul");
//         target.appendChild(sub);
//     }

//     let count = sub.children.length;

//     // limit check
//     if (count >= 10) {
//         alert("Limit reached (Item 2.1.1.10)");
//         return;
//     }

//     // correct numbering        
//     let li = document.createElement("li");
//     li.textContent = "Item 2.1.1." + (count + 1);
//     sub.appendChild(li);

//     // add new main item
//     let main = document.getElementById("list");
//     let li3 = document.createElement("li");
//     li3.textContent = "Item " + count3++;
//     main.appendChild(li3);
// });
// </script>

// </body>
// </html>



// <!DOCTYPE html>
// <html lang="en">
// <head>
//     <meta charset="UTF-8">
//     <title>Event Handling</title>
// </head>
// <body>

// <button id="addBtn">Add Item</button>
// <button id="toggleStop">Toggle stopPropagation</button>
// <button id="enableCap">Enable Capturing</button>
// <button id="disableCap">Disable Capturing</button>

// <ul id="list">
//     <li>Item 1</li>
//     <li>Item 2</li>
//     <ul>
//         <li>Child Item A</li>
//         <li>Child Item B</li>
//     </ul>
//     <li>Item 3</li>
// </ul>

// <script>
// let count = 4;
// let stopEnabled = false;
// let useCapture = false;

// const list = document.getElementById("list");

// // Add Item (TC4)
// document.getElementById("addBtn").addEventListener("click", () => {
//     const li = document.createElement("li");
//     li.textContent = "Item " + count++;
//     list.appendChild(li);
// });

// // Main Handler (Delegation)
// function handler(e) {

//     const li = e.target.closest("li");
//     if (!li) {
//         alert("UL clicked");
//         return;
//     }

//     // TC1, TC5: click any li (including nested)
//     if (list.contains(li)) {
//         alert(li.textContent.trim());

//         // TC3: stopPropagation
//         if (stopEnabled) {
//             e.stopPropagation();
//         }
//     }
// }
// function attach() {
//     list.removeEventListener("click", handler, true);
//     list.removeEventListener("click", handler, false);
//     list.addEventListener("click", handler, useCapture);
// }

// attach();


// // Toggle stopPropagation (TC3)
// document.getElementById("toggleStop").addEventListener("click", () => {
//     stopEnabled = !stopEnabled;
//     alert("stopPropagation: " + (stopEnabled ? "ON" : "OFF"));
// });

// // Enable Capturing (TC6)
// document.getElementById("enableCap").addEventListener("click", () => {
//     useCapture = true;
//     attach();
//     alert("Capturing Enabled");
// });

// // Disable Capturing (TC7)
// document.getElementById("disableCap").addEventListener("click", () => {
//     useCapture = false;
//     attach();
//     alert("Bubbling Mode");
// });

// </script>

// </body>
// </html>



// <!DOCTYPE html>
// <html>
// <head>
//     <title>Student Manager</title>
//     <style>
//         h1 {
//             color: red;
//             text-align: center;
//             font-size: 30px;
//         }

//         #list {
//             background-color: lightblue;
//             border: 2px solid red;
//             padding: 15px;
//             list-style: none;
//         }

//         li {
//             padding: 10px;
//             margin: 5px;
//             border: 1px solid black;
//             cursor: pointer;
//         }

//         .first {
//             color: red;
//             font-weight: bold;
//             background-color: gray;
//         }
//     </style>
// </head>
// <body>

// <h1 id="heading">Student List</h1>


// <button id="addBtn">Add Student</button>

// <ul id="list">
//     <li class="first">Student 1</li>
//     <li>Student 2</li>
//     <li>Student 3</li>
// </ul>

// <script>
// let count = 4;

// document.getElementById("addBtn").addEventListener("click", function () {
//     let li = document.createElement("li");
//     li.textContent = "New Student " + count++;

//     li.style.color = "red";
//     li.style.backgroundColor = "yellow";

//     document.getElementById("list").appendChild(li);
// });

// document.getElementById("list").addEventListener("click", function (e) {
//     if (e.target.tagName === "LI") {

//         document.getElementById("heading").textContent = e.target.textContent;

//         e.target.remove();
//     }
// });
// </script>

// </body>
// </html>


// <!DOCTYPE html>
// <html>
// <head>
//     <title>Event Delegation Assignment</title>
// </head>
// <body>

// <h2>Product List</h2>

// <button id="addBtn">Add Product</button>
// <button id="stopBtn">Toggle stopPropagation</button>
// <button id="captureOn">Enable Capturing</button>
// <button id="captureOff">Disable Capturing</button>

// <ul id="list">
//     <li>Product 1</li>
//     <li>Product 2</li>
//     <li>Product 3</li>
// </ul>

// <script>
// let stop = false;
// let useCapture = false;
// let count = 4;

// const list = document.getElementById("list");

// // 🔹 EVENT DELEGATION (Single listener for all <li>)
// function handleClick(e) {
//     if (e.target.tagName === "LI") {
//         alert("Item: " + e.target.textContent);

//         if (stop) {
//             e.stopPropagation(); // control propagation
//         }
//     }
// }

// // Attach listener
// function attachListener() {
//     list.removeEventListener("click", handleClick, true);
//     list.removeEventListener("click", handleClick, false);

//     list.addEventListener("click", handleClick, useCapture);
// }

// attachListener();

// // 🔹 Add new item dynamically
// document.getElementById("addBtn").onclick = function () {
//     let li = document.createElement("li");
//     li.textContent = "Product " + count++;
//     list.appendChild(li);
// };

// //  Toggle stopPropagation
// document.getElementById("stopBtn").onclick = function () {
//     stop = !stop;
//     alert("stopPropagation: " + stop);
// };

// //  Enable capturing
// document.getElementById("captureOn").onclick = function () {
//     useCapture = true;
//     attachListener();
//     alert("Capturing Enabled");
// };

// //  Disable capturing (default bubbling)
// document.getElementById("captureOff").onclick = function () {
//     useCapture = false;
//     attachListener();
//     alert("Capturing Disabled");
// };
// </script>

// </body>
// </html>