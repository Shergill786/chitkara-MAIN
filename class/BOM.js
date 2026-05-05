// the bom used to interact with the browser window navigator and location and history control the browser behaviour
// the main object in bom is the window object 
// console.log(window.innerHeight); // window height
// console.log(window.innerWidth); //  window dimensions x,y 

// navigator object contains information about the user browser such as the name of the browser, version, and os where 
// differernt cookie are avalible
// useful for brower protection and security


// location object contains information about the current url and allows us to change the url and redirect the user to another page
// location object is used for navigation and url manipulation


// alert 
// there are different buildin dialogs in js which 
// alert() - shows a message to the user and waits for the user to click ok
// confirm() - shows a message to the user and waits for the user to click ok or cancel, returns true if ok is clicked and false if cancel is clicked
// prompt() - shows a message to the user and waits for the user to enter a value and click ok, returns the value entered by the user or null if cancel is clicked


// timers alerts execute a function after a specified delay or repeat a function at a specified interval
// setTimeout() - executes a function after a specified delay
// setInterval() - executes a function repeatedly at a specified interval
// clearTimeout() - cancels a timeout set with setTimeout()
// clearInterval() - cancels an interval set with setInterval()

/* <html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <button onclick="showWindowsize()">Click me</button>
    <script>
        function showWindowsize() {
            console.log("Window height: " + window.innerHeight);
            console.log("Window width: " + window.innerWidth);
        }
    </script>
</body>
</html>
 */
// <!DOCTYPE html>
// <html lang="en">
// <head>
//     <meta charset="UTF-8">
//     <meta name="viewport" content="width=device-width, initial-scale=1.0">
//     <title>Document</title>
// </head>
// <body>
//     <h2> window object examples</h2>
//     <button onclick="openNewWindow()">Open New Window</button>
//     <script>
//         function openNewWindow() {
//             window.open("https://www.google.com", "_blank", "width=500,height=500");
//         }
//     </script>
// </body>
// </html>'

// <!DOCTYPE html>
// <html>
// <head>
// </head>
// <body>

// <h2>Navigator Info</h2>

// <button onclick="getNavigatorInfo()">Get Info</button>

// <p id="info"></p>

// <script>
// function getNavigatorInfo() {
//     let info = "";
//     info += "Browser Name: " + navigator.appName + "<br>";
//     info += "Version: " + navigator.appVersion + "<br>";
//     info += "Platform: " + navigator.platform + "<br>";
//     info += "User Agent: " + navigator.userAgent;

//     document.getElementById("info").innerHTML = info;
// }
// </script>

// </body>
// </html>


// <!DOCTYPE html>
// <html>
// <head>
//     <title>Location Object</title>
// </head>
// <body>

// <h2>Location Example</h2>

// <button onclick="showLocation()">Show URL Info</button>
// <button onclick="redirectPage()">Go to Google</button>

// <p id="locationInfo"></p>

// <script>
// function showLocation() {
//     let data = "";

//     data += "Full URL: " + location.href + "<br>";
//     data += "Hostname: " + location.hostname + "<br>";
//     data += "Path: " + location.pathname;

//     document.getElementById("locationInfo").innerHTML = data;
// }

// function redirectPage() {
//     location.href = "https://www.google.com";
// }
// </script>

// </body>
// </html>

// function createFragmentExample() {
//     const fragment = document.createDocumentFragment();
//     for (let i = 0; i < 1000; i++) {
//         const div = document.createElement("div");
//         fragment.appendChild(div);
//     }
//     document.body.appendChild(fragment);
// }


// et timeout is javascript function used to execute a piece of code after a specified delay
//  It runs the function only once after the given times in milliseconds
// The set timeout function is mainly used for tasks such as showing messages after delay or performing actions the delay time is given in milliseconds where one milliseconds is equal to one second Set interval 
// Ut is a javascript function used to execute a function and a fixed time intervals in a repeated way it is commonly used for tasks like updating clocks animations and photo refreshing contents to stop the repeat execution of set interval clear interval method or function is used

// <html>
// <body>

// <button onclick="startInterval()">Start Interval</button>
// <button onclick="stopInterval()">Stop Interval</button>

// <p id="timerOutput"></p>

// <script>
// let intervalId;

// function startTimeout() {
//     setTimeout(function () {
//         document.getElementById("timerOutput").innerHTML = "Executed after 3 seconds";
//     }, 3000);
// }

// function startInterval() {
//     let count = 0;

//     intervalId = setInterval(function () {
//         count++;
//         document.getElementById("timerOutput").innerHTML = "Count: " + count;
//     }, 100);
// }

// function stopInterval() {
//     clearInterval(intervalId);
// }
// </script>

// </body>
// </html>


// <!DOCTYPE html>
// <html>
// <body>

// <button onclick="startInterval()">Start Interval</button>
// <button onclick="stopInterval()">Stop Interval</button>

// <p id="timerOutput"></p>

// <script>
//     let intervalId;

// function startTimeout() {

//     setTimeout(function() {

//         document.getElementById("timerOutput").innerHTML = "Executed after 3 seconds";

//     }, 2000);

// }

// function startInterval() {

//     let count = 0;

//     intervalId = setInterval(function() {

//         count++;

//         document.getElementById("timerOutput").innerHTML = "Count: " + count;

//     }, 1000);

// }

// function stopInterval() {

//     clearInterval(intervalId);

// }

// </script>

// </body>

// </html>



// <!DOCTYPE html>
// <html>
// <head>
//     <title>Callback Functions</title>
// </head>
// <body>

// <h2>Callback Function Demo</h2>
// <button onclick="startProcess()">Start Process</button>
// <p id="output"></p>

// <script>
// function processUser(name, callback) {
//     document.getElementById("output").innerHTML = "Processing user: " + name;
//     callback();
// }

// function showMessage() {
//     document.getElementById("output").innerHTML += "<br>Welcome to JavaScript!";
// }

// function startProcess() {
//     processUser("Sam", showMessage);
// }
// </script>

// </body>
// </html>

// PROMISE IN JS 
// 3 diff stages of promise lifecycle 
// how to hanle error in promise
// diff bw promise error handling and event loop in js


// promise is a built-in object in JavaScript that represents the eventual completion (or failure) of an asynchronous operation and its resulting value. A promise can be in one of three states: pending, fulfilled, or rejected.


// 1. Pending: The initial state of a promise. It is neither fulfilled nor rejected. The promise is waiting for the asynchronous operation to complete.
// 2. Fulfilled: The state of a promise when the asynchronous operation has completed successfully. The promise is resolved with a value, which can be accessed using the .then() method.
// 3. Rejected: The state of a promise when the asynchronous operation has failed. The promise is rejected with a reason (error), which can be accessed using the .catch() method.


// To handle errors in promises, you can use the .catch() method, which allows you to specify a callback function that will be executed if the promise is rejected. This is useful for handling any errors that may occur during the asynchronous operation.


// handling errors in promises is different from handling errors in the event loop because promises provide a more structured way to manage asynchronous operations and their associated errors. In the event loop, errors can be thrown and may not be caught if they occur in asynchronous code, leading to unhandled exceptions. In contrast, promises allow you to chain .then() and .catch() methods to handle both successful outcomes and errors in a more predictable manner, ensuring that errors are properly caught and handled without crashing the application.


// a promise in java script is a object that represent a result of a syncronous process
