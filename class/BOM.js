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
 */}
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