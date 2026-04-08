// // =============================================================================
// // JSON HANDLING - JSON.stringify() and JSON.parse() WITH EXAMPLES
// // =============================================================================

// console.log("========== JSON FUNDAMENTALS ==========\n");

// // DEFINITION:
// // JSON (JavaScript Object Notation) is a lightweight format for storing and
// // exchanging data. It uses human-readable text with key-value pairs.

// // USES:
// // ✓ APIs and web services (REST APIs)
// // ✓ Configuration files
// // ✓ Local storage in browsers
// // ✓ Data transmission between client and server
// // ✓ File storage

// console.log("1. WHAT IS JSON:\n");
// console.log("A lightweight, language-independent data format");
// console.log("JSON structure types:");
// console.log("  - Objects: {\"key\": \"value\"}");
// console.log("  - Arrays: [1, 2, 3, \"hello\"]");
// console.log("  - Strings: \"Hello World\"");
// console.log("  - Numbers: 42, 3.14, -5");
// console.log("  - Booleans: true, false");
// console.log("  - Null: null");
// console.log("");

// console.log("\n========== JSON.stringify() METHOD ==========\n");

// // PURPOSE: Convert JavaScript objects/arrays into JSON strings
// // SYNTAX: JSON.stringify(value, [replacer], [space])

// console.log("2. BASIC JSON.stringify():");
// const person = {
//   name: "John",
//   age: 30,
//   city: "New York"
// };
// const jsonString = JSON.stringify(person);
// console.log("Object:", person);
// console.log("JSON String:", jsonString);
// console.log("");

// console.log("3. JSON.stringify() WITH FORMATTING (Pretty Print):");
// const personFormatted = JSON.stringify(person, null, 2);
// console.log("Formatted output with 2-space indentation:");
// console.log(personFormatted);
// console.log("");

// console.log("4. JSON.stringify() WITH REPLACER FUNCTION:");
// const user = {name: "Alice", age: 28, email: "alice@example.com"};
// const filtered = JSON.stringify(user, (key, value) => {
//   if (typeof value === "string") {
//     return value.toUpperCase();
//   }
//   return value;
// });
// console.log("Original:", user);
// console.log("With string values uppercase:", filtered);
// console.log("");

// console.log("5. JSON.stringify() WITH REPLACER ARRAY:");
// const userData = {id: 1, name: "Bob", email: "bob@example.com", password: "secret"};
// const selected = JSON.stringify(userData, ["id", "name", "email"]);
// console.log("Original:", userData);
// console.log("Only selected properties:", selected);
// console.log("Note: password is excluded!");
// console.log("");

// console.log("6. STRINGIFY WITH NESTED OBJECTS:");
// const company = {
//   name: "TechCorp",
//   employees: 150,
//   location: {
//     city: "San Francisco",
//     country: "USA"
//   }
// };
// const jsonCompany = JSON.stringify(company, null, 2);
// console.log("Nested object as JSON:");
// console.log(jsonCompany);
// console.log("");

// console.log("7. STRINGIFY WITH ARRAYS:");
// const numbers = [1, 2, 3, 4, 5];
// const jsonNumbers = JSON.stringify(numbers);
// console.log("Array:", numbers);
// console.log("JSON String:", jsonNumbers);
// console.log("");

// console.log("8. STRINGIFY ARRAY OF OBJECTS:");
// const students = [
//   {id: 1, name: "Alice", grade: "A"},
//   {id: 2, name: "Bob", grade: "B"},
//   {id: 3, name: "Charlie", grade: "A"}
// ];
// const jsonStudents = JSON.stringify(students, null, 2);
// console.log("Students array as JSON:");
// console.log(jsonStudents);
// console.log("");

// console.log("\n========== JSON.parse() METHOD ==========\n");

// // PURPOSE: Convert JSON strings back to JavaScript objects/arrays
// // SYNTAX: JSON.parse(text, [reviver])

// console.log("9. BASIC JSON.parse():");
// const jsonStr = '{"name":"Bob","age":30}';
// const parsedObj = JSON.parse(jsonStr);
// console.log("JSON String:", jsonStr);
// console.log("Parsed Object:", parsedObj);
// console.log(`Access properties: name=${parsedObj.name}, age=${parsedObj.age}`);
// console.log("");

// console.log("10. JSON.parse() WITH ARRAY:");
// const jsonArray = '[1, 2, 3, \"hello\", true]';
// const parsedArray = JSON.parse(jsonArray);
// console.log("JSON String:", jsonArray);
// console.log("Parsed Array:", parsedArray);
// console.log("");

// console.log("11. JSON.parse() WITH NESTED OBJECTS:");
// const jsonNested = '{"user":{"name":"Charlie","address":{"city":"Boston","zip":"02101"}}}';
// const parsedNested = JSON.parse(jsonNested);
// console.log("JSON String:", jsonNested);
// console.log("Parsed Object:", parsedNested);
// console.log(`Access nested: city=${parsedNested.user.address.city}`);
// console.log("");

// console.log("12. JSON.parse() WITH REVIVER FUNCTION:");
// const jsonData = '{"name":"Dave","birthYear":1995}';
// const revived = JSON.parse(jsonData, (key, value) => {
//   if (key === "birthYear") {
//     return new Date().getFullYear() - value;  // Convert to age
//   }
//   return value;
// });
// console.log("Original JSON:", jsonData);
// console.log("With reviver (birthYear → age):", revived);
// console.log("");

// console.log("13. JSON.parse() ERROR HANDLING:");
// const validJson = '{"name":"Eve","age":25}';
// const invalidJson = '{name: "Eve", age: 25}';  // Invalid - keys must be quoted

// console.log("Valid JSON parse:");
// try {
//   const result = JSON.parse(validJson);
//   console.log("✓ Parsed successfully:", result);
// } catch (error) {
//   console.log("✗ Error:", error.message);
// }

// console.log("\nInvalid JSON parse (syntax error):");
// try {
//   const result = JSON.parse(invalidJson);
//   console.log("✓ Parsed successfully:", result);
// } catch (error) {
//   console.log("✗ Error:", error.message);
// }
// console.log("");

// console.log("\n========== STRINGIFY & PARSE TOGETHER ==========\n");

// console.log("14. ROUND TRIP: Object → String → Object");
// const original = {
//   id: 1,
//   name: "Frank",
//   scores: [85, 90, 88],
//   passed: true
// };

// // Convert to string

// const jsonString14 = JSON.stringify(original);
// console.log("1. Original object:", original);
// console.log("2. Stringified:", jsonString14);

// // Convert back to object
// const restored = JSON.parse(jsonString14);
// console.log("3. Parsed back:", restored);
// console.log(`Same structure? name=${restored.name}, firstScore=${restored.scores[0]}`);
// console.log("");

// console.log("\n========== PRACTICAL EXAMPLES ==========\n");

// console.log("15. DEEP COPY USING JSON (Shallow vs Deep Clone):");
// const originalData = {
//   name: "Grace",
//   skills: ["JavaScript", "Python", "C"]
// };

// // Shallow copy (doesn't work well for nested)
// const shallowCopy = {...originalData};

// // Deep copy using JSON
// const deepCopy = JSON.parse(JSON.stringify(originalData));

// // Modify the copy
// shallowCopy.skills[0] = "Modified";
// deepCopy.skills[0] = "Deep Modified";

// console.log("Original skills[0]:", originalData.skills[0]);  // Modified! (shared)
// console.log("Shallow copy skills[0]:", shallowCopy.skills[0]);
// console.log("Deep copy skills[0]:", deepCopy.skills[0]);  // Changed, but original is safe
// console.log("");

// console.log("16. LOCAL STORAGE SIMULATION:");
// const userProfile = {
//   userId: 101,
//   username: "henry_holmes",
//   preferences: {
//     theme: "dark",
//     notifications: true
//   }
// };

// // Save to "storage" (simulated)
// const storageData = JSON.stringify(userProfile);
// console.log("Saved to storage:", storageData);

// // Retrieve from "storage" (simulated)
// const retrievedProfile = JSON.parse(storageData);
// console.log("Retrieved from storage:", retrievedProfile);
// console.log(`User prefers ${retrievedProfile.preferences.theme} theme`);
// console.log("");

// console.log("17. API REQUEST - SENDING DATA:");
// const formData = {
//   username: "ivy_innovator",
//   email: "ivy@example.com",
//   age: 24
// };
// const jsonBody = JSON.stringify(formData);
// console.log("Sending to API:");
// console.log(`fetch('/api/users', {`);
// console.log(`  method: 'POST',`);
// console.log(`  body: ${jsonBody}`);
// console.log(`})`);
// console.log("");

// console.log("18. API RESPONSE - RECEIVING DATA:");
// const apiResponseJson = '[{"id":1,"name":"Jack","status":"active"},{"id":2,"name":"Jill","status":"inactive"}]';
// console.log("Response from API:", apiResponseJson);

// const users = JSON.parse(apiResponseJson);
// console.log("Parsed response:");
// users.forEach(user => {
//   console.log(`  - ${user.name} (ID: ${user.id}) - Status: ${user.status}`);
// });
// console.log("");

// console.log("19. REMOVE SENSITIVE DATA:");
// const sensitiveData = {
//   id: 999,
//   name: "Karen",
//   email: "karen@example.com",
//   apiKey: "secret-key-12345"
// };
// const safeSend = JSON.stringify(sensitiveData, ["id", "name", "email"]);
// console.log("Original:", sensitiveData);
// console.log("Safe to send (apiKey removed):", safeSend);
// console.log("");

// console.log("20. FORMATTING CONFIGURATION:");
// const config = {
//   server: "localhost:8080",
//   database: {
//     host: "localhost",
//     port: 5432,
//     name: "myapp_db"
//   },
//   logging: true
// };
// const configJson = JSON.stringify(config, null, 4);
// console.log("Configuration file (nicely formatted):");
// console.log(configJson);
