// // =============================================================================
// // DESTRUCTURING - ARRAY & OBJECT DESTRUCTURING WITH PRACTICAL EXAMPLES
// // =============================================================================

// console.log("========== ARRAY DESTRUCTURING ==========\n");

// // 1. BASIC ARRAY DESTRUCTURING
// console.log("1. BASIC ARRAY DESTRUCTURING:");
// const [a, b, c] = [1, 2, 3];
// console.log(`a=${a}, b=${b}, c=${c}`);  // a=1, b=2, c=3
// console.log("");

// // 2. SKIP ELEMENTS IN ARRAY
// console.log("2. SKIP ELEMENTS:");
// const [first, , third] = ["x", "y", "z"];
// console.log(`first=${first}, third=${third}`);  // first=x, third=z
// console.log("");

// // 3. REST OPERATOR (...) - Collect remaining elements
// console.log("3. REST OPERATOR:");
// const [head,body, ...tail] = [1, 2, 3, 4, 5];
// console.log(`head=${head}`);     // head=1
// console.log(`body=${body}`);     // body=2
// console.log(`tail=`, tail);       // tail=[2,3,4,5]
// console.log("");

// // 4. DEFAULT VALUES
// console.log("4. DEFAULT VALUES:");
// const [num1 = 10, num2 = 20] = [5];
// console.log(`num1=${num1}, num2=${num2}`);  // num1=5, num2=20 (uses default)
// console.log("");

// // 5. VARIABLE SWAPPING
// console.log("5. VARIABLE SWAPPING:");
// let x = 5, y = 10;
// console.log(`Before: x=${x}, y=${y}`);
// [x, y] = [y, x];
// console.log(`After: x=${x}, y=${y}`);  // x=10, y=5
// console.log("");

// // 6. NESTED ARRAY DESTRUCTURING
// console.log("6. NESTED ARRAY DESTRUCTURING:");
// const [[a1, b1], [c1, d1]] = [[1, 2], [3, 4]];
// console.log(`a1=${a1}, b1=${b1}, c1=${c1}, d1=${d1}`);  // 1,2,3,4
// console.log("");

// // 7. FUNCTION PARAMETER DESTRUCTURING
// console.log("7. FUNCTION PARAMETERS:");
// function processCoordinates([x_coord, y_coord]) {
//   console.log(`Coordinates: X=${x_coord}, Y=${y_coord}`);
// }
// processCoordinates([10, 20]);
// console.log("");

// console.log("\n========== OBJECT DESTRUCTURING ==========\n");

// // 8. BASIC OBJECT DESTRUCTURING
// console.log("8. BASIC OBJECT DESTRUCTURING:");
// const person = {name: "Alice", age: 28, city: "New York"};
// const {name, age, city} = person;
// console.log(`${name}, ${age} years old, from ${city}`);
// console.log("");

// // 9. SELECTIVE DESTRUCTURING
// console.log("9. SELECTIVE DESTRUCTURING:");
// const {name: personName} = {name: "Bob", age: 30, city: "NYC"};
// console.log(`Name: ${personName}`);  // Only extract name
// console.log("");

// // 10. RENAME PROPERTIES
// console.log("10. RENAME PROPERTIES:");
// const {name: fullName, age: years} = {name: "Charlie", age: 25};
// console.log(`${fullName} is ${years} years old`);
// console.log("");

// // 11. DEFAULT VALUES IN OBJECTS
// console.log("11. DEFAULT VALUES:");
// const {name: defName = "Unknown", email = "no-email@example.com"} = {name: "Dave"};
// console.log(`Name: ${defName}, Email: ${email}`);
// console.log("");

// // 12. NESTED OBJECT DESTRUCTURING
// console.log("12. NESTED OBJECT DESTRUCTURING:");
// const student = {
//   name: "Eve",
//   address: {
//     city: "Boston",
//     country: "USA"
//   }
// };
// const {name: studentName, address: {city: studentCity}} = student;
// console.log(`${studentName} lives in ${studentCity}`);
// console.log("");

// // 13. REST OPERATOR IN OBJECTS
// console.log("13. REST OPERATOR IN OBJECTS:");
// const {a: varA, b: varB, ...others} = {a: 1, b: 2, c: 3, d: 4};
// console.log(`a=${varA}, b=${varB}`);
// console.log("Others:", others);  // {c: 3, d: 4}
// console.log("");

// // 14. FUNCTION PARAMETERS WITH OBJECT DESTRUCTURING
// console.log("14. FUNCTION PARAMETER DESTRUCTURING:");
// function displayUser({name: userName, age: userAge, city: userCity = "Unknown"}) {
//   console.log(`${userName}, ${userAge} years old, from ${userCity}`);
// }
// displayUser({name: "Frank", age: 35});  // Frank, 35, Unknown
// console.log("");

// // 15. PRACTICAL EXAMPLE - API Response
// console.log("15. PRACTICAL EXAMPLE - API RESPONSE:");
// const apiResponse = {
//   status: "success",
//   data: {
//     userId: 123,
//     username: "alice_wonder",
//     email: "alice@example.com"
//   },
//   timestamp: "2024-03-26T10:30:00Z"
// };
// const {status, data: {userId, username}} = apiResponse;
// console.log(`Status: ${status}, User: ${username} (ID: ${userId})`);
// console.log("");

// console.log("\n========== SHALLOW COPY VS DEEP COPY ==========\n");

// // 16. SHALLOW COPY - PROBLEM
// console.log("16. SHALLOW COPY - DEMONSTRATES THE PROBLEM:");
// const original = {x: 1, nested: {y: 2, z: 3}};
// const shallowCopy = {...original};
// console.log("Before modification:");
// console.log(`Original nested.y: ${original.nested.y}`);

// shallowCopy.nested.y = 999;  // Modifying nested property
// console.log("After modifying shallow copy's nested.y:");
// console.log(`Original nested.y: ${original.nested.y}`);  // 999! PROBLEM!
// console.log("→ Problem: Nested objects are shared!");
// console.log("");

// // 17. SHALLOW COPY METHODS
// console.log("17. SHALLOW COPY METHODS:");

// // Method 1: Spread operator
// const obj1 = {a: 1, nested: {b: 2}};
// const copy1 = {...obj1};

// // Method 2: Object.assign()
// const copy2 = Object.assign({}, obj1);

// // Method 3: Array slice
// const arr = [1, 2, 3];
// const arrCopy = arr.slice();

// console.log("Shallow copies created, but nested objects still shared");
// console.log("");

// // 18. DEEP COPY - SOLUTION
// console.log("18. DEEP COPY - SOLVES THE PROBLEM:");
// const original2 = {x: 1, nested: {y: 2, z: 3}};
// const deepCopy = JSON.parse(JSON.stringify(original2));
// console.log("Before modification:");
// console.log(`Original nested.y: ${original2.nested.y}`);

// deepCopy.nested.y = 999;
// console.log("After modifying deep copy's nested.y:");
// console.log(`Original nested.y: ${original2.nested.y}`);  // Still 2! ✓
// console.log("→ Solution: Original remains unchanged!");
// console.log("");

// // 19. PRACTICAL DEEP COPY EXAMPLE
// console.log("19. PRACTICAL EXAMPLE - CLONING USER DATA:");
// const userData = {
//   id: 1,
//   profile: {
//     name: "Grace",
//     scores: [85, 90, 88]
//   }
// };

// const userCopy = JSON.parse(JSON.stringify(userData));
// userCopy.profile.scores[0] = 100;
// userCopy.profile.name = "Modified";

// console.log(`Original: ${userData.profile.name}, Score: ${userData.profile.scores[0]}`);
// console.log(`Copy: ${userCopy.profile.name}, Score: ${userCopy.profile.scores[0]}`);
// console.log("");

// // 20. DEEP COPY WITH RECURSIVE FUNCTION
// console.log("20. DEEP COPY - RECURSIVE FUNCTION METHOD:");
// function deepCopyRecursive(obj) {
//   if (obj === null || typeof obj !== "object") return obj;
//   if (Array.isArray(obj)) return obj.map(item => deepCopyRecursive(item));
  
//   const newObj = {};
//   for (let key in obj) {
//     newObj[key] = deepCopyRecursive(obj[key]);
//   }
//   return newObj;
// }

// const original3 = {name: "Henry", scores: [85, 90], details: {city: "LA"}};
// const deepCopy3 = deepCopyRecursive(original3);
// deepCopy3.scores[0] = 100;
// deepCopy3.details.city = "NY";

// console.log("Original scores[0]:", original3.scores[0]);  // 85
// console.log("Original city:", original3.details.city);    // LA
// console.log("Copy scores[0]:", deepCopy3.scores[0]);      // 100
// console.log("Copy city:", deepCopy3.details.city);        // NY
