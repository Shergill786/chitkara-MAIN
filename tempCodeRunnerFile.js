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
