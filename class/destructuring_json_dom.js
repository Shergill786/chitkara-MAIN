// /*
// ================================================================================
//                     DESTRUCTURING IN JAVASCRIPT
// ================================================================================
// */

// // ============================================================================
// // CONTENT EXPLANATION: DESTRUCTURING
// // ============================================================================
// // Destructuring is a JavaScript feature that allows you to extract values from
// // arrays or objects and assign them to variables in a single statement.
// // It makes code cleaner and more readable by avoiding repetitive access to
// // array indices or object properties.

// // KEY ADVANTAGES:
// // 1. Cleaner, more readable code
// // 2. Less repetition when working with arrays/objects
// // 3. Extract only needed values
// // 4. Rename values during extraction


// // ============================================================================
// // TOPIC EXPLANATION: ARRAY DESTRUCTURING
// // ============================================================================

// // | Concept              | Example                          | Use Case                    |
// // | -------------------- | -------------------------------- | --------------------------- |
// // | Basic Destructuring  | const [a, b] = [1, 2];          | Extract array values        |
// // | Skip Elements        | const [a, , c] = [1, 2, 3];     | Skip middle values          |
// // | Rest Operator        | const [a, ...rest] = [1,2,3];   | Collect remaining elements  |
// // | Default Values       | const [a = 5] = [];              | Provide default values      |
// // | Swapping Variables   | [a, b] = [b, a];                | Swap values easily          |

// // Example 1: Basic Array Destructuring
// console.log("--- BASIC ARRAY DESTRUCTURING ---");
// const numbers = [10, 20, 30];
// const [first, second, third] = numbers;
// console.log(first);   // 10
// console.log(second);  // 20
// console.log(third);   // 30

// // Example 2: Skipping Elements
// console.log("\n--- SKIPPING ARRAY ELEMENTS ---");
// const fruits = ["Apple", "Banana", "Cherry", "Date"];
// const [fruit1, , , fruit4] = fruits;
// console.log(fruit1);  // "Apple"
// console.log(fruit4);  // "Cherry" (Banana is skipped)

// // Example 3: Rest Operator (...) - Collect Remaining Elements
// console.log("\n--- REST OPERATOR IN ARRAYS ---");
// const colors = ["Red", "Green", "Blue", "Yellow"];
// const [color1, color2, ... remainingColors] = colors;
// console.log(color1);           // "Red"
// console.log(color2);           // "Green"
// console.log(remainingColors);  // ["Blue", "Yellow"]

// // Example 4: Default Values
// console.log("\n--- DEFAULT VALUES IN DESTRUCTURING ---");
// const items = [123];
// const [item1, item2 = 100, item3 = 200] = items;
// console.log(item1);  // 123
// console.log(item2);  // 100 (default used)
// console.log(item3);  // 200 (default used)

// // // Example 5: Swapping Variables
// console.log("\n--- VARIABLE SWAPPING ---");
// let a = 5;
// let b = 10;
// console.log("Before swap - a:", a, "b:", b);
// [a, b] = [b, a];
// console.log("After swap - a:", a, "b:", b);


// // ============================================================================
// // TOPIC EXPLANATION: OBJECT DESTRUCTURING
// // ============================================================================

// // | Concept              | Example                                      | Use Case                |
// // | -------------------- | -------------------------------------------- | ----------------------- |
// // | Basic Destructuring  | const {name, age} = {name: "John", age: 25}; | Extract object values   |
// // | Rename Properties    | const {name: n, age: a} = {name: "John", ...}| Rename during extraction|
// // | Default Values       | const {name = "Unknown"} = {};               | Provide defaults        |
// // | Nested Objects       | const {{address: {city}} = obj;              | Extract nested values   |
// // | Rest Operator        | const {a, ...rest} = {a:1, b:2, c:3};        | Collect other props     |

// // Example 1: Basic Object Destructuring
// console.log("\n--- BASIC OBJECT DESTRUCTURING ---");
// const person = {
//   name: "Alice",
//   age: 28,
//   city: "New York",
//   job: "Developer"
// };
// const {name, age, city} = person;
// console.log(name);  // "Alice"
// console.log(age);   // 28
// console.log(city);  // "New York"

// // Example 2: Renaming Properties During Destructuring
// console.log("\n--- RENAMING PROPERTIES ---");
// const employee = { emp_name: "Bob", emp_id: 101 };
// const {emp_name: empName, emp_id: empId} = employee;
// console.log(empName);  // "Bob"
// console.log(empId);    // 101

// // Example 3: Default Values in Objects
// console.log("\n--- DEFAULT VALUES IN OBJECTS ---");
// const user = { username: "john_doe" };
// const {username, email = "no-email@example.com", phone = "N/A"} = user;
// console.log(username);  // "john_doe"
// console.log(email);     // "no-email@example.com" (default)
// console.log(phone);     // "N/A" (default)

// // Example 4: Nested Object Destructuring
// console.log("\n--- NESTED OBJECT DESTRUCTURING ---");
// const company = {
//   companyName: "TechCorp",
//   address: {
//     street: "123 Main St",
//     city: "San Francisco",
//     country: "USA"
//   }
// };
// const {address: {city: companyCity, country}} = company;
// console.log(companyCity);  // "San Francisco"
// console.log(country);      // "USA"

// // Example 5: Rest Operator with Objects
// console.log("\n--- REST OPERATOR IN OBJECTS ---");
// const student = { rollNo: 1, name: "Charlie", grade: "A", age: 20 };
// const {rollNo, name, ...otherDetails} = student;
// console.log(rollNo);        // 1
// console.log(name);          // "Charlie"
// console.log(otherDetails);  // {grade: "A", age: 20}


// // ============================================================================
// // TOPIC EXPLANATION: SHALLOW COPY VS DEEP COPY
// // ============================================================================

// // | Type          | Definition                           | Use Case                  |
// // | ------------- | ------------------------------------ | ------------------------- |
// // | Shallow Copy  | Copies only first level properties   | Simple objects/arrays     |
// // | Deep Copy     | Recursively copies all nested props  | Complex nested structures |

// console.log("\n--- SHALLOW COPY EXPLANATION ---");
// // SHALLOW COPY: Only copies the first level. Nested objects still reference
// // the original object.

// // Example 1: Shallow Copy Problems
// console.log("\n--- SHALLOW COPY - PROBLEM DEMONSTRATION ---");
// const originalObj = {
//   name: "David",
//   address: {
//     city: "Boston",
//     zipcode: "02101"
//   }
// };

// // Using Object.assign() - creates SHALLOW copy
// const shallowCopy = Object.assign({}, originalObj);
// shallowCopy.name = "Edward";  // Changes copy only
// shallowCopy.address.city = "Cambridge";  // Changes BOTH (nested ref)

// console.log("Original - name:", originalObj.name);           // "David" (unchanged)
// console.log("Original - address.city:", originalObj.address.city); // "Cambridge" (CHANGED!)
// console.log("Shallow Copy - name:", shallowCopy.name);       // "Edward"
// console.log("Shallow Copy - address.city:", shallowCopy.address.city); // "Cambridge"

// // Example 2: Shallow Copy Methods
// console.log("\n--- SHALLOW COPY METHODS ---");
// // Method 1: Object.assign()
// const user1 = {id: 1, name: "Frank"};
// const copy1 = Object.assign({}, user1);
// console.log("Object.assign() copy:", copy1);

// // Method 2: Spread Operator(...)
// const user2 = {id: 2, name: "Grace"};
// const copy2 = {...user2};
// console.log("Spread operator copy:", copy2);

// // Method 3: Array.slice() (for arrays)
// const arr1 = [1, 2, 3];
// const copy3 = arr1.slice();
// console.log("Array slice() copy:", copy3);

// // Method 4: Array Spread Operator
// const arr2 = [4, 5, 6];
// const copy4 = [...arr2];
// console.log("Array spread copy:", copy4);


// console.log("\n--- DEEP COPY EXPLANATION ---");
// // DEEP COPY: Recursively copies ALL levels including nested objects/arrays.
// // Changes to the copy don't affect the original.

// // Example 1: JSON Method (works for most cases)
// console.log("\n--- DEEP COPY - JSON METHOD ---");
// const complexObj = {
//   name: "Henry",
//   scores: [85, 90, 95],
//   address: {
//     city: "Seattle",
//     country: "USA"
//   }
// };

// const deepCopyJson = JSON.parse(JSON.stringify(complexObj));
// deepCopyJson.name = "Isabella";
// deepCopyJson.scores[0] = 100;
// deepCopyJson.address.city = "Portland";

// console.log("Original - name:", complexObj.name);              // "Henry"
// console.log("Original - scores[0]:", complexObj.scores[0]);    // 85
// console.log("Original - address.city:", complexObj.address.city); // "Seattle"
// console.log("Deep Copy - name:", deepCopyJson.name);           // "Isabella"
// console.log("Deep Copy - scores[0]:", deepCopyJson.scores[0]); // 100
// console.log("Deep Copy - address.city:", deepCopyJson.address.city); // "Portland"

// // Example 2: Recursive Function Method
// console.log("\n--- DEEP COPY - RECURSIVE FUNCTION ---");
// function deepCopyManual(obj) {
//   // Handle primitives and null
//   if (obj === null || typeof obj !== "object") {
//     return obj;
//   }
  
//   // Handle arrays
//   if (Array.isArray(obj)) {
//     return obj.map(item => deepCopyManual(item));
//   }
  
//   // Handle objects
//   const newObj = {};
//   for (let key in obj) {
//     if (obj.hasOwnProperty(key)) {
//       newObj[key] = deepCopyManual(obj[key]);
//     }
//   }
//   return newObj;
// }

// const originalData = {
//   title: "Chapter 1",
//   chapters: [
//     {name: "Intro", pages: 10},
//     {name: "Content", pages: 50}
//   ]
// };

// const deepCopyManualResult = deepCopyManual(originalData);
// deepCopyManualResult.title = "Modified";
// deepCopyManualResult.chapters[0].pages = 20;

// console.log("Original - title:", originalData.title);           // "Chapter 1"
// console.log("Original - chapters[0].pages:", originalData.chapters[0].pages); // 10
// console.log("Deep Copy - title:", deepCopyManualResult.title);   // "Modified"
// console.log("Deep Copy - chapters[0].pages:", deepCopyManualResult.chapters[0].pages); // 20


// /*
// ================================================================================
//                         JSON HANDLING IN JAVASCRIPT
// ================================================================================
// */

// // ============================================================================
// // CONTENT EXPLANATION: JSON
// // ============================================================================
// // JSON (JavaScript Object Notation) is a lightweight data format used to
// // exchange data between applications. It's a human-readable text format that
// // uses key-value pairs and arrays. JavaScript provides built-in methods to
// // convert between JavaScript objects and JSON strings.

// // KEY FEATURES:
// // 1. Language-independent format
// // 2. Lightweight and easy to parse
// // 3. Primarily used in APIs and data storage
// // 4. Can represent objects, arrays, strings, numbers, booleans, and null


// // ============================================================================
// // TOPIC EXPLANATION: JSON BASICS & STRUCTURE
// // ============================================================================

// // | Component      | Description                       | Example              |
// // | -------------- | --------------------------------- | -------------------- |
// // | Object         | Key-value pairs in {}             | {"name": "John"}     |
// // | Array          | Ordered list in []                | [1, 2, 3]            |
// // | String         | Text in double quotes             | "Hello"              |
// // | Number         | Integer or decimal                | 42, 3.14             |
// // | Boolean        | true or false                     | true, false          |
// // | null           | Represents empty/no value         | null                 |

// console.log("\n\n--- JSON STRUCTURE EXAMPLES ---");
// // Valid JSON Examples
// const jsonObject = '{"name": "John", "age": 30, "city": "New York"}';
// const jsonArray = '[1, 2, 3, 4, 5]';
// const jsonNested = '{"person": {"name": "Jane", "skills": ["JavaScript", "Python"]}}';

// console.log("JSON Object String:", jsonObject);
// console.log("JSON Array String:", jsonArray);
// console.log("JSON Nested Structure:", jsonNested);


// // ============================================================================
// // TOPIC EXPLANATION: JSON.stringify()
// // ============================================================================

// // | Purpose | Usage | Syntax |
// // | --- | --- | --- |
// // | Convert object to JSON string | Sending data over network | JSON.stringify(value, replacer, space) |
// // | Replacer parameter | Filter/transform properties | Function or array of keys |
// // | Space parameter | Format output (indentation) | Number (spaces) or string |

// console.log("\n--- JSON.stringify() METHOD ---");

// // Example 1: Basic Object to JSON
// console.log("\n--- BASIC STRINGIFY ---");
// const person1 = {
//   name: "Alice",
//   age: 28,
//   isStudent: false
// };
// const jsonString1 = JSON.stringify(person1);
// console.log("Object:", person1);
// console.log("JSON String:", jsonString1);
// // Output: {"name":"Alice","age":28,"isStudent":false}

// // Example 2: Adding Indentation (Readable Format)
// console.log("\n--- STRINGIFY WITH INDENTATION ---");
// const person2 = {
//   name: "Bob",
//   age: 32,
//   email: "bob@example.com"
// };
// const jsonString2 = JSON.stringify(person2, null, 2);
// console.log("Formatted JSON:\n" + jsonString2);
// /* Output:
// {
//   "name": "Bob",
//   "age": 32,
//   "email": "bob@example.com"
// }
// */

// // Example 3: Stringify Array
// console.log("\n--- STRINGIFY ARRAY ---");
// const colors = ["Red", "Green", "Blue"];
// const jsonString3 = JSON.stringify(colors);
// console.log("Array:", colors);
// console.log("JSON String:", jsonString3);
// // Output: ["Red","Green","Blue"]

// // Example 4: Stringify with Replacer Function
// console.log("\n--- STRINGIFY WITH REPLACER FUNCTION ---");
// const employee = {
//   name: "Charlie",
//   salary: 50000,
//   password: "secret123"
// };
// const jsonString4 = JSON.stringify(employee, (key, value) => {
//   // Hide password field
//   if (key === "password") {
//     return undefined;  // Omit this property
//   }
//   return value;
// });
// console.log("Original object:", employee);
// console.log("Stringified (password hidden):", jsonString4);
// // Output: {"name":"Charlie","salary":50000}

// // Example 5: Stringify with Replacer Array (selective properties)
// console.log("\n--- STRINGIFY WITH REPLACER ARRAY ---");
// const user = {
//   name: "David",
//   age: 25,
//   email: "david@example.com",
//   phone: "555-1234"
// };
// const jsonString5 = JSON.stringify(user, ["name", "email"]);
// console.log("Original object:", user);
// console.log("Only name and email:", jsonString5);
// // Output: {"name":"David","email":"david@example.com"}


// // ============================================================================
// // TOPIC EXPLANATION: JSON.parse()
// // ============================================================================

// // | Purpose | Usage | Syntax |
// // | --- | --- | --- |
// // | Convert JSON string to object | Receiving/processing data | JSON.parse(text, reviver) |
// // | Reviver parameter | Transform values during parsing | Function that transforms values |
// // | Error handling | Handle invalid JSON | Try-catch block |

// console.log("\n--- JSON.parse() METHOD ---");

// // Example 1: Basic JSON String to Object
// console.log("\n--- BASIC PARSE ---");
// const jsonStr1 = '{"name":"Emma","age":26,"city":"Boston"}';
// const parsedObj1 = JSON.parse(jsonStr1);
// console.log("JSON String:", jsonStr1);
// console.log("Parsed Object:", parsedObj1);
// console.log("Name:", parsedObj1.name);
// console.log("Age:", parsedObj1.age);

// // Example 2: Parsing JSON Array
// console.log("\n--- PARSE JSON ARRAY ---");
// const jsonStr2 = '[{"id":1,"name":"Item1"},{"id":2,"name":"Item2"}]';
// const parsedArr = JSON.parse(jsonStr2);
// console.log("JSON String:", jsonStr2);
// console.log("Parsed Array:", parsedArr);
// console.log("First item:", parsedArr[0]);
// console.log("Second item name:", parsedArr[1].name);

// // Example 3: Parsing with Reviver Function
// console.log("\n--- PARSE WITH REVIVER FUNCTION ---");
// const jsonStr3 = '{"date":"2024-03-26","amount":100.50}';
// const parsedObj3 = JSON.parse(jsonStr3, (key, value) => {
//   // Convert date string to Date object
//   if (key === "date") {
//     return new Date(value);
//   }
//   // Convert amount to currency
//   if (key === "amount") {
//     return "$" + value.toFixed(2);
//   }
//   return value;
// });
// console.log("Parsed with reviver:", parsedObj3);
// console.log("Date type:", typeof parsedObj3.date);
// console.log("Amount:", parsedObj3.amount);

// // Example 4: Error Handling with Parse
// console.log("\n--- ERROR HANDLING IN PARSE ---");
// const invalidJson = '{"name":"Frank","age":30,}'; // Invalid - trailing comma
// try {
//   const result = JSON.parse(invalidJson);
// } catch (error) {
//   console.log("Error caught:", error.message);
//   console.log("Invalid JSON cannot be parsed");
// }

// // Example 5: Real-world Scenario - API Response
// console.log("\n--- REAL-WORLD API RESPONSE SCENARIO ---");
// const apiResponse = '{"status":"success","data":{"user":"Grace","score":95},"timestamp":"2024-03-26T10:30:00Z"}';
// const api_data = JSON.parse(apiResponse);
// console.log("Status:", api_data.status);
// console.log("User:", api_data.data.user);
// console.log("Score:", api_data.data.score);
// console.log("Timestamp:", api_data.timestamp);


// /*
// ================================================================================
//                     DOM MANIPULATION IN JAVASCRIPT
// ================================================================================
// */

// // ============================================================================
// // CONTENT EXPLANATION: DOM
// // ============================================================================
// // DOM (Document Object Model) is a programming interface for web documents.
// // It represents the page structure as a tree of nodes that JavaScript can
// // access and manipulate. Every element in HTML becomes a node in the DOM.

// // KEY CONCEPTS:
// // 1. DOM Tree - Hierarchical structure of elements
// // 2. Selectors - Methods to find elements
// // 3. Properties - Access/modify element attributes and content
// // 4. Methods - Functions to add/remove/modify elements


// // ============================================================================
// // TOPIC EXPLANATION: DOM TREE & STRUCTURE
// // ============================================================================

// // | Element         | Description                        | Example                  |
// // | --------------- | ---------------------------------- | ------------------------ |
// // | document        | Root of all DOM elements           | document                 |
// // | Element Node    | HTML tags                          | <div>, <p>, <button>     |
// // | Text Node       | Text content inside elements       | "Hello World"            |
// // | Attribute Node  | Attributes of elements             | class="btn", id="main"   |
// // | Parent          | Element that contains others       | <body> is parent of <p>  |
// // | Child           | Elements inside another element    | <p> is child of <body>   |
// // | Sibling         | Elements at same level             | <h1> and <p> in same div|

// console.log("\n\n=== DOM STRUCTURE EXAMPLE ===");
// console.log(`
// HTML Structure:
// <html>
//   <body>
//     <div id="container">
//       <h1>Title</h1>
//       <p>Content</p>
//       <button class="btn">Click Me</button>
//     </div>
//   </body>
// </html>

// DOM Tree:
// document
// └── html
//     └── body
//         └── div (id="container")
//             ├── h1 (Text: "Title")
//             ├── p (Text: "Content")
//             └── button (class="btn", Text: "Click Me")
// `);


// // ============================================================================
// // TOPIC EXPLANATION: DOM SELECTORS
// // ============================================================================

// // | Selector Method | Returns | Use Case |
// // | --- | --- | --- |
// // | getElementById() | Single element | When you know exact ID |
// // | querySelector() | First matching element | Single element selection |
// // | querySelectorAll() | All matching elements (NodeList) | Multiple elements |
// // | getElementsByClass() | HTMLCollection | By class name |
// // | getElementsByTag() | HTMLCollection | By tag name |

// console.log("\n--- DOM SELECTOR METHODS ---");

// // Example 1: getElementById() - Get by ID
// console.log("\n--- getElementById() EXAMPLE ---");
// // HTML: <div id="main-app">Content</div>
// // const mainApp = document.getElementById("main-app");
// // Returns the element with id="main-app"
// console.log("Use: document.getElementById('id-name')");
// console.log("Returns: Single element or null if not found");

// // Example 2: querySelector() - CSS Selector (first match)
// console.log("\n--- querySelector() EXAMPLE ---");
// // HTML: <div class="container"><p class="text">Text</p></div>
// // const element = document.querySelector(".text");     // By class
// // const element = document.querySelector("#header");   // By ID
// // const element = document.querySelector("div > p");   // By hierarchy
// console.log("Use: document.querySelector('selector')");
// console.log("Returns: First matching element or null");
// console.log("Selectors: '.class', '#id', 'tag', 'tag.class', 'parent > child'");

// // Example 3: querySelectorAll() - CSS Selector (all matches)
// console.log("\n--- querySelectorAll() EXAMPLE ---");
// // HTML: <p class="item">Item 1</p><p class="item">Item 2</p><p class="item">Item 3</p>
// // const items = document.querySelectorAll(".item");
// // Returns NodeList of all matching elements
// console.log("Use: document.querySelectorAll('selector')");
// console.log("Returns: NodeList of all matching elements");

// // Example 4: Comparison of Selector Methods
// console.log("\n--- SELECTOR METHODS COMPARISON ---");
// console.log(`
// | Method | Syntax | Returns | Live? |
// |--------|--------|---------|-------|
// | getElementById() | getElementById("id") | 1 Element | N/A |
// | querySelector() | querySelector(".class") | 1 Element | No |
// | querySelectorAll() | querySelectorAll(".class") | NodeList | No |
// | getElementsByClassName() | getElementsByClassName("class") | HTMLCollection | Yes |
// | getElementsByTagName() | getElementsByTagName("div") | HTMLCollection | Yes |
// `);


// // ============================================================================
// // TOPIC EXPLANATION: READ/WRITE HTML & CSS
// // ============================================================================

// // | Property/Method | Purpose | Use Case |
// // | --- | --- | --- |
// // | innerHTML | Get/Set HTML content | Replace element content with HTML |
// // | textContent | Get/Set text only | Set plain text without HTML |
// // | setAttribute() | Set attribute | Change id, class, data attributes |
// // | getAttribute() | Get attribute value | Read attribute values |
// // | style | Get/Set inline CSS | Change colors, sizes, positions |
// // | classList.add() | Add CSS class | Apply styles via classes |
// // | classList.remove() | Remove CSS class | Remove styles |
// // | classList.toggle() | Add/Remove class | Toggle states |

// console.log("\n--- READ/WRITE HTML CONTENT ---");

// // Example 1: innerHTML - Get and Set HTML
// console.log("\n--- innerHTML EXAMPLE ---");
// // HTML: <div id="content"><p>Old text</p></div>
// // const element = document.getElementById("content");
// // console.log(element.innerHTML);  // Returns: "<p>Old text</p>"
// // element.innerHTML = "<p>New text</p><span>Added</span>";
// console.log("Use: element.innerHTML");
// console.log("Get: Returns HTML string inside element");
// console.log("Set: Replaces element content with new HTML");

// // Example 2: textContent - Get and Set Text Only
// console.log("\n--- textContent EXAMPLE ---");
// // HTML: <div id="message"><b>Important:</b> Read this</div>
// // const element = document.getElementById("message");
// // console.log(element.textContent);  // Returns: "Important: Read this"
// // element.textContent = "New message";  // Replaces with plain text
// console.log("Use: element.textContent");
// console.log("Get: Returns only text content (no HTML tags)");
// console.log("Set: Sets content as plain text only");

// // Example 3: getAttribute() and setAttribute()
// console.log("\n--- getAttribute() and setAttribute() ---");
// // HTML: <button id="btn" class="primary">Click</button>
// // const button = document.getElementById("btn");
// // console.log(button.getAttribute("class"));  // Returns: "primary"
// // button.setAttribute("type", "submit");  // Adds type="submit"
// // button.setAttribute("class", "secondary");  // Changes class
// console.log("Use: element.getAttribute('attribute-name')");
// console.log("Use: element.setAttribute('attribute-name', 'value')");
// console.log("Examples: class, id, type, placeholder, disabled, etc.");

// // Example 4: Read and Write CSS Styles
// console.log("\n--- STYLE PROPERTY EXAMPLE ---");
// // HTML: <div id="box"></div>
// // const box = document.getElementById("box");
// // box.style.backgroundColor = "blue";
// // box.style.width = "100px";
// // box.style.height = "100px";
// // box.style.marginTop = "20px";
// // console.log(box.style.backgroundColor);  // Returns: "blue"
// console.log("Use: element.style.property = 'value'");
// console.log("CSS: background-color → JavaScript: backgroundColor (camelCase)");
// console.log("Examples: color, fontSize, display, border, padding, etc.");

// // Example 5: classList Methods
// console.log("\n--- classList METHODS ---");
// // HTML: <div id="box" class="active"></div>
// // const box = document.getElementById("box");
// // box.classList.add("highlight");         // Add class
// // box.classList.remove("active");         // Remove class
// // box.classList.toggle("disabled");       // Toggle class
// // console.log(box.classList.contains("highlight"));  // Check if has class
// console.log("Add class: element.classList.add('class-name')");
// console.log("Remove class: element.classList.remove('class-name')");
// console.log("Toggle class: element.classList.toggle('class-name')");
// console.log("Check class: element.classList.contains('class-name')");


// // ============================================================================
// // TOPIC EXPLANATION: CREATING & APPENDING NODES
// // ============================================================================

// // | Method | Purpose | Syntax |
// // | --- | --- | --- |
// // | createElement() | Create new element | document.createElement("tag") |
// // | appendChild() | Add child to element | parent.appendChild(child) |
// // | insertBefore() | Insert before specific position | parent.insertBefore(new, existing) |
// // | append() | Add multiple children | parent.append(child1, child2, ...) |
// // | prepend() | Add at beginning | parent.prepend(child) |

// console.log("\n--- CREATING NEW ELEMENTS ---");

// // Example 1: createElement() - Create New Element
// console.log("\n--- createElement() EXAMPLE ---");
// // const newParagraph = document.createElement("p");
// // newParagraph.textContent = "This is a new paragraph";
// // newParagraph.id = "new-para";
// // newParagraph.className = "text-primary";
// console.log("Use: document.createElement('tag-name')");
// console.log("Creates: New element (not yet in DOM)");
// console.log("Modify: Set properties like textContent, id, class");

// // Example 2: appendChild() - Add Child Element
// console.log("\n--- appendChild() EXAMPLE ---");
// // HTML: <div id="container"></div>
// // const container = document.getElementById("container");
// // const paragraph = document.createElement("p");
// // paragraph.textContent = "New paragraph";
// // container.appendChild(paragraph);  // Adds paragraph to container
// console.log("Use: parent.appendChild(child)");
// console.log("Effect: Adds child as last element in parent");
// console.log("Returns: The appended node");

// // Example 3: Creating Multiple Elements
// console.log("\n--- CREATING MULTIPLE ELEMENTS ---");
// // HTML: <ul id="list"></ul>
// // const list = document.getElementById("list");
// // const items = ["Apple", "Banana", "Cherry"];
// // items.forEach(item => {
// //   const li = document.createElement("li");
// //   li.textContent = item;
// //   list.appendChild(li);
// // });
// console.log("Pattern: Loop through data");
// console.log("1. Create element");
// console.log("2. Set content");
// console.log("3. Append to parent");

// // Example 4: insertBefore() - Insert at Specific Position
// console.log("\n--- insertBefore() EXAMPLE ---");
// // HTML: <div id="container">
// //   <p id="first">First</p>
// //   <p id="third">Third</p>
// // </div>
// // const container = document.getElementById("container");
// // const first = document.getElementById("first");
// // const newP = document.createElement("p");
// // newP.textContent = "Second";
// // container.insertBefore(newP, first.nextSibling);
// console.log("Use: parent.insertBefore(newElement, referenceElement)");
// console.log("Effect: Inserts newElement before referenceElement");

// // Example 5: append() - Add Multiple Children
// console.log("\n--- append() EXAMPLE ---");
// // HTML: <div id="container"></div>
// // const container = document.getElementById("container");
// // const p = document.createElement("p");
// // p.textContent = "Paragraph";
// // const span = document.createElement("span");
// // span.textContent = "Span";
// // container.append(p, span, "Text");  // Add multiple at once
// console.log("Use: parent.append(child1, child2, ...)");
// console.log("Effect: Adds multiple children (elements and text)");


// // ============================================================================
// // TOPIC EXPLANATION: DELETING NODES
// // ============================================================================

// // | Method | Purpose | Syntax |
// // | --- | --- | --- |
// // | removeChild() | Remove child from parent | parent.removeChild(child) |
// // | remove() | Remove element itself | element.remove() |
// // | replaceChild() | Replace one child with another | parent.replaceChild(new, old) |
// // | innerHTML = "" | Clear all content | element.innerHTML = "" |

// console.log("\n--- DELETING ELEMENTS ---");

// // Example 1: removeChild() - Remove Using Parent Reference
// console.log("\n--- removeChild() EXAMPLE ---");
// // HTML: <div id="container">
// //   <p id="to-remove">Remove me</p>
// // </div>
// // const container = document.getElementById("container");
// // const para = document.getElementById("to-remove");
// // container.removeChild(para);  // Remove paragraph from container
// console.log("Use: parent.removeChild(child)");
// console.log("Effect: Removes child from DOM");
// console.log("Note: Need reference to parent element");

// // Example 2: remove() - Direct Removal
// console.log("\n--- remove() EXAMPLE ---");
// // HTML: <div id="target">Remove me</div>
// // const target = document.getElementById("target");
// // target.remove();  // Directly removes the element
// console.log("Use: element.remove()");
// console.log("Effect: Removes element from DOM");
// console.log("Note: Works directly without parent reference");

// // Example 3: replaceChild() - Replace Element
// console.log("\n--- replaceChild() EXAMPLE ---");
// // HTML: <div id="container">
// //   <p id="old">Old text</p>
// // </div>
// // const container = document.getElementById("container");
// // const oldElement = document.getElementById("old");
// // const newElement = document.createElement("span");
// // newElement.textContent = "New content";
// // container.replaceChild(newElement, oldElement);
// console.log("Use: parent.replaceChild(newElement, oldElement)");
// console.log("Effect: Replaces oldElement with newElement");

// // Example 4: Clear Element Content
// console.log("\n--- CLEARING ELEMENT CONTENT ---");
// // HTML: <div id="box"><p>Content 1</p><p>Content 2</p></div>
// // Method 1:
// // const box = document.getElementById("box");
// // box.innerHTML = "";  // Clear all content
// // Method 2:
// // while (box.firstChild) {
// //   box.removeChild(box.firstChild);
// // }
// console.log("Method 1: element.innerHTML = ''");
// console.log("Method 2: Remove all children in loop");
// console.log("Method 3: element.textContent = ''");

// // Example 5: Remove Multiple Elements
// console.log("\n--- REMOVE MULTIPLE ELEMENTS ---");
// // HTML: <ul id="list">
// //   <li class="remove-me">Item 1</li>
// //   <li>Item 2</li>
// //   <li class="remove-me">Item 3</li>
// // </ul>
// // const items = document.querySelectorAll(".remove-me");
// // items.forEach(item => item.remove());
// console.log("Use: document.querySelectorAll('selector')");
// console.log("Then: Loop and call remove() on each");
// console.log("Or: Use forEach with arrow function");


// // ============================================================================
// // PRACTICAL EXAMPLES COMBINING CONCEPTS
// // ============================================================================

// console.log("\n\n=== PRACTICAL COMPLETE EXAMPLE ===");
// console.log(`
// // HTML:
// <div id="todo-container">
//   <input type="text" id="todo-input" placeholder="Enter task">
//   <button id="add-btn">Add</button>
//   <ul id="todo-list"></ul>
// </div>

// // JavaScript:
// const input = document.getElementById("todo-input");
// const btn = document.getElementById("add-btn");
// const list = document.getElementById("todo-list");

// btn.addEventListener("click", () => {
//   if (input.value.trim() === "") return;
  
//   // Create new list item
//   const li = document.createElement("li");
//   li.textContent = input.value;
  
//   // Add delete button
//   const delBtn = document.createElement("button");
//   delBtn.textContent = "Delete";
//   delBtn.onclick = () => li.remove();
  
//   // Append to list
//   li.appendChild(delBtn);
//   list.appendChild(li);
  
//   // Clear input
//   input.value = "";
// })`);

// console.log("\nAll topics explained with examples!");
