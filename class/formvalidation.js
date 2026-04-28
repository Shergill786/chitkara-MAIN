// 8 elemts
//  the input elemts is html form where user enter data in input and text area 
//  event handling is one of the most common component in form validation the event validation is performed using differnet events such as form submit 
//  or when user type text in text area
//  validation rules defines what is valid in required field it includes password strength and email format form format password strength and correctnesss
// regular expression in form validation is used to check email format patterns phone no patterns and passord strength patterns
// error handling in form validation displays error messages to user when an input is invalid 
// form submission if the form is coorect then the form is submitted and data is sent to local storage or online backend server
// visual representation shows the success or error messages to user using differnet colors and items

// <!DOCTYPE html>
// <html>
// <head>
//     <title>Form Validation</title>

//     <style>
//         body {
//             font-family: Arial;
//         }
//         form {
//             width: 300px;
//             margin: 50px auto;
//         }
//         input {
//             width: 100%;
//             padding: 8px;
//             margin: 8px 0;
//         }
//         .error {
//             color: red;
//             font-size: 14px;
//         }
//     </style>
// </head>
// <body>
// <form id="myForm">
//     <h2>Registration Form</h2>
//     <input type="text" id="name" placeholder="Enter Name">
//     <div id="nameError" class="error"></div>
//     <input type="email" id="email" placeholder="Enter Email">
//     <div id="emailError" class="error"></div>
//     <input type="password" id="password" placeholder="Enter Password">
//     <div id="passwordError" class="error"></div>
//     <input type="password" id="confirmPassword" placeholder="Confirm Password">
//     <div id="confirmError" class="error"></div>
//     <button type="submit">Submit</button>
// </form>
// <script>
// document.getElementById("myForm").addEventListener("submit", function(event) {
//     let name = document.getElementById("name").value.trim();
//     let email = document.getElementById("email").value.trim();
//     let password = document.getElementById("password").value.trim();
//     let confirmPassword = document.getElementById("confirmPassword").value.trim();
//     let nameError = document.getElementById("nameError");
//     let emailError = document.getElementById("emailError");
//     let passwordError = document.getElementById("passwordError");
//     let confirmError = document.getElementById("confirmError");
//     nameError.innerText = "";
//     emailError.innerText = "";
//     passwordError.innerText = "";
//     confirmError.innerText = "";
//     let isValid = true;
//     // Name validation
//     if (name === "") {
//         nameError.innerText = "Name is required";
//         isValid = false;
//     }
//     // Email validation
//     let emailPattern = /^[^ ]+@[^ ]+\.[a-z]{2,3}$/;
//     if (email === "") {
//         emailError.innerText = "Email is required";
//         isValid = false;
//     } else if (!email.match(emailPattern)) {
//         emailError.innerText = "Invalid email format";
//         isValid = false;
//     }
//     // Password validation
//     if (password === "") {
//         passwordError.innerText = "Password is required";
//         isValid = false;
//     } else if (password.length < 6) {
//         passwordError.innerText = "Password must be at least 6 characters";
//         isValid = false;
//     }
//     // Confirm password validation
//     if (confirmPassword === "") {
//         confirmError.innerText = "Please confirm password";
//         isValid = false;
//     } else if (password !== confirmPassword) {
//         confirmError.innerText = "Passwords do not match";
//         isValid = false;
//     }
//     // Prevent form submission if invalid
//     if (!isValid) {
//         event.preventDefault();
//     }
// });
// </script>
// </body>
// </html>

// <!-- <!DOCTYPE html>
// <html>
// <head>
// <title>Student Update Form</title>
// <style>
// body { font-family: Arial; }
// input { display: block; margin: 10px 0; padding: 8px; }
// .error { color: red; }
// .success { color: green; }
// </style>
// </head>

// <body>

// <h2>chitkara Updates</h2>

// <form id="form">
// <input type="text" id="name" placeholder="Name">
// <input type="text" id="fname" placeholder="First Name">
// <input type="text" id="mname" placeholder="Middle Name">
// <input type="text" id="lname" placeholder="Last Name">

// <input type="email" id="email" placeholder="Email" readonly>


// <button type="submit">Submit</button>

// </form>

// <p id="msg"></p>

// <script>
// let name = document.getElementById("name");
// let fname = document.getElementById("fname");
// let mname = document.getElementById("mname");
// let lname = document.getElementById("lname");
// let email = document.getElementById("email");
// let form = document.getElementById("form");
// let msg = document.getElementById("msg");

// // Generate Email based on requirement
// function generateEmail() {
//     if (fname.value && mname.value && lname.value) {
//         let n = fname.value.substring(0,3).toLowerCase();
//         let f = fname.value.substring(0,3).toLowerCase();
//         let m = mname.value.substring(0,3).toLowerCase();
//         let l = lname.value.substring(0,3).toLowerCase();

//         email.value = n + f + m + l + "@gmail.com";
//     }
// }

// // Event listeners
// fname.addEventListener("input", generateEmail);
// mname.addEventListener("input", generateEmail);
// lname.addEventListener("input", generateEmail);

// // Form Validation
// form.addEventListener("submit", function(e) {
    
//     if (!fname.value || !mname.value || !lname.value || !email.value) {
//         e.preventDefault();
//         msg.innerText = "All fields are required";
//         msg.className = "error";
//         return;
//     }

//     msg.innerText = "Form submitted successfully";
//     msg.className = "success";
// });

// </script>

// </body>
// </html> -->


// <!DOCTYPE html>
// <html>
// <head>
// <title>Form</title>
// <style>
// input { display:block; margin:10px; padding:8px; }
// </style>
// </head>
// <body>
// <form id="form">
// <input type="text" id="fname" placeholder="First Name">
// <input type="text" id="lname" placeholder="Last Name">
// <input type="text" id="sname" placeholder="Surname">
// <input type="text" id="mname" placeholder="Middle Name">
// <input type="date" id="dob">
// <input type="email" id="email" placeholder="Email">
// <input type="password" id="password" placeholder="Password">
// <button type="submit">Submit</button>
// </form>
// <p id="msg"></p>
// <script>
// let fname = document.getElementById("fname");
// let lname = document.getElementById("lname");
// let sname = document.getElementById("sname");
// let mname = document.getElementById("mname");
// let dob = document.getElementById("dob");
// let email = document.getElementById("email");
// let password = document.getElementById("password");
// let form = document.getElementById("form");
// let msg = document.getElementById("msg");
// function generateEmail() {
//     if (fname.value && lname.value && sname.value && mname.value && dob.value) {
//         let f = fname.value.substring(0,3).toLowerCase();
//         let l = lname.value.substring(0,3).toLowerCase();
//         let s = sname.value.substring(0,3).toLowerCase();
//         let m = mname.value.substring(0,3).toLowerCase();
//         let d = dob.value.replaceAll("-", "");
//         email.value = f + l + s + m + d + "@gmail.com";
//     }
// }
// fname.addEventListener("input", generateEmail);
// lname.addEventListener("input", generateEmail);
// sname.addEventListener("input", generateEmail);
// mname.addEventListener("input", generateEmail);
// dob.addEventListener("change", generateEmail);

// form.addEventListener("submit", function(e) {
//     if (password.value.length !== 12) {
//         e.preventDefault();
//         msg.innerText = "Password must be 12 characters";
//         return;
//     }
//     msg.innerText = "Form submitted successfully";
//     e.preventDefault();
// });
// </script>

// </body>
// </html>

// // <!DOCTYPE html>
// // <html>
// // <head>
// // <title>U_trade</title>

// // <style>
// // h1 {
//     text-align: center;
// }

// input {
//     display: block;
//     width: 100%;
//     margin: 10px 0;
//     padding: 8px;
// }

// .red {
//     color: red;
// }

// .blue {
//     color: blue;
// }

// .yellow {
//     background-color: yellow;
//     color: black;
// }
// </style>

// </head>

// <body>

// <h1>U_trade</h1>

// <form id="form">
// <input type="text" id="fname" placeholder="F_Name">
// <input type="text" id="lname" placeholder="Last Name">
// <input type="text" id="fullname" placeholder="Your Full Name" readonly>
// <input type="email" id="email" placeholder="Email ID" readonly>
// <input type="password" id="password" placeholder="Password (12 characters)">
// <button type="submit">OK</button>
// </form>

// <p id="msg"></p>

// <script>
// let fname = document.getElementById("fname");
// let lname = document.getElementById("lname");
// let fullname = document.getElementById("fullname");
// let email = document.getElementById("email");
// let password = document.getElementById("password");
// let form = document.getElementById("form");
// let msg = document.getElementById("msg");

// function generateEmail() {
//     if (fname.value && lname.value) {

//         fullname.value = fname.value + lname.value;
//         let f = fullname.value.substring(0,10).toLowerCase();
//         email.value = f + "@gmail.com";
//     }
// }

// fname.addEventListener("input", generateEmail);
// lname.addEventListener("input", generateEmail);

// form.addEventListener("submit", function(e) {
//     e.preventDefault();

//     if (password.value.length !== 12) {
//         msg.innerText = "Password must be 12 characters";
//         return;
//     }
//     fname.style.color = "red";
//     lname.style.color = "red";

//     fullname.style.color = "blue";
//     email.style.color = "blue";

//     password.style.backgroundColor = "yellow";
//     password.style.color = "black";
//     msg.innerText = "Form submitted successfully";
// });
// </script>
// </body>
// </html>


