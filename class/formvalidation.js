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

