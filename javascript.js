// console.log("Hello, World!");
// console.log("This is a sample JavaScript file.");

// age=24;
// console.log("Age:", age);
// age+=1;
// console.log("Next Year Age:", age);
// name="JAVASCRIPT";
// console.log("Name:", name);

// x=null;
// y=undefined;
// console.log(x);
// console.log(y);

// isActive=true;
// console.log( isActive);


// const pi=3.14;
// console.log("Value of pi:", pi);

// let score=100;
// score+=50;
// console.log("Total Score:", score);



let attempts = 3;
while (attempts > 0) {
    let email = prompt("Enter your email address:");
    switch (true) {
        case email.includes("@") && email.includes("."):
            console.log("Valid email address");
            attempts = 0; 
            break;
        default:
            console.log("Invalid email address");
            attempts--;
    }
}

