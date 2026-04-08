# JavaScript Mastery: Destructuring, JSON & DOM Manipulation
## Complete Learning Guide & Examples

---

## 📋 TABLE OF CONTENTS
1. [Overview](#overview)
2. [Module 1: Destructuring](#module-1-destructuring)
3. [Module 2: JSON Handling](#module-2-json-handling)
4. [Module 3: DOM Manipulation](#module-3-dom-manipulation)
5. [How to Use These Resources](#how-to-use-these-resources)

---

## OVERVIEW

This comprehensive guide covers three essential JavaScript concepts that every developer should master:

| Topic | Purpose | Key Methods |
|-------|---------|------------|
| **Destructuring** | Unpack array/object values into variables | Array/Object patterns |
| **JSON** | Data serialization & transmission | stringify(), parse() |
| **DOM** | Interact with web page elements | Query, Create, Modify, Delete |

---

## MODULE 1: DESTRUCTURING

### 1.1 Array Destructuring

**What is it?**
Breaking down an array and assigning its values to individual variables in one statement.

**Basic Syntax:**
```javascript
const [a, b, c] = [1, 2, 3];
```

**Key Features:**
- Skip elements: `const [first, , third] = arr`
- Rest operator: `const [head, ...tail] = arr`
- Default values: `const [a = 10, b = 20] = [5]`
- Function parameters: `function display([x, y]) { }`

**Real-world Use:**
```javascript
// API Response
const [id, name, email] = getUserData();

// Swap values
[x, y] = [y, x];

// Multiple returns
const [success, data, error] = fetchData();
```

### 1.2 Object Destructuring

**What is it?**
Extracting specific properties from an object into variables.

**Basic Syntax:**
```javascript
const {name, age} = {name: "Alice", age: 28};
```

**Key Features:**
- Select specific properties: `const {name} = obj`
- Rename properties: `const {name: fullName} = obj`
- Default values: `const {name = "John"} = obj`
- Nested destructuring: `const {user: {name}} = obj`
- Rest operator: `const {a, b, ...others} = obj`

**Real-world Use:**
```javascript
// Function parameters
function processUser({name, email, city = "Unknown"}) {
  console.log(`${name} from ${city}`);
}

// API data
const {status, data: {userId}} = response;

// Configuration
const {host, port, ssl = true} = config;
```

### 1.3 Shallow Copy vs Deep Copy

**Shallow Copy Problem:**
```javascript
const original = {nested: {value: 10}};
const shallow = {...original};
shallow.nested.value = 20;
console.log(original.nested.value);  // 20 - CHANGED!
```

**Deep Copy Solution:**
```javascript
const original = {nested: {value: 10}};
const deep = JSON.parse(JSON.stringify(original));
deep.nested.value = 20;
console.log(original.nested.value);  // 10 - SAFE!
```

**Comparison:**
| Method | Shallow | Deep |
|--------|---------|------|
| Spread `{...obj}` | ✓ | ✗ |
| Object.assign() | ✓ | ✗ |
| JSON method | ✗ | ✓ |
| Recursive function | ✗ | ✓ |

---

## MODULE 2: JSON HANDLING

### 2.1 What is JSON?

**JSON (JavaScript Object Notation)** is a lightweight, text-based data format used for:
- API communication (REST)
- Local storage
- Configuration files
- Data serialization

**Valid JSON Types:**
```json
{
  "object": {"key": "value"},
  "array": [1, 2, 3],
  "string": "hello",
  "number": 42,
  "boolean": true,
  "null": null
}
```

### 2.2 JSON.stringify() - Object to String

**Purpose:** Convert JavaScript objects to JSON strings for storage/transmission

**Syntax:**
```javascript
JSON.stringify(value, [replacer], [space])
```

**Parameters:**
- `value`: The object/array to convert
- `replacer`: Optional - filter properties (function or array)
- `space`: Optional - indentation (number or string)

**Examples:**

```javascript
// Basic
const obj = {name: "Alice", age: 28};
const json = JSON.stringify(obj);
// Result: {"name":"Alice","age":28}

// Formatted (Pretty Print)
const pretty = JSON.stringify(obj, null, 2);
// Result:
// {
//   "name": "Alice",
//   "age": 28
// }

// Filter properties
const filtered = JSON.stringify(obj, ["name"]);
// Result: {"name":"Alice"}

// With replacer function
const modified = JSON.stringify(obj, (key, value) => {
  return typeof value === "string" ? value.toUpperCase() : value;
});
// Result: {"name":"ALICE","age":28}
```

**Real-world Applications:**
```javascript
// Send to API
fetch('/api/users', {
  method: 'POST',
  body: JSON.stringify({name: "Bob", email: "bob@example.com"})
});

// Save to LocalStorage
localStorage.setItem('user', JSON.stringify(user));

// Remove sensitive data
const safe = JSON.stringify(obj, ["id", "name", "email"]);
```

### 2.3 JSON.parse() - String to Object

**Purpose:** Convert JSON strings back to JavaScript objects

**Syntax:**
```javascript
JSON.parse(text, [reviver])
```

**Parameters:**
- `text`: The JSON string to parse
- `reviver`: Optional - transform values during parsing

**Examples:**

```javascript
// Basic
const json = '{"name":"Bob","age":30}';
const obj = JSON.parse(json);
console.log(obj.name);  // "Bob"

// Array of objects
const json = '[{"id":1,"name":"Item1"},{"id":2,"name":"Item2"}]';
const arr = JSON.parse(json);
console.log(arr[0].name);  // "Item1"

// With reviver function
const json = '{"date":"2024-03-26"}';
const obj = JSON.parse(json, (key, value) => {
  if (key === "date") return new Date(value);
  return value;
});

// Error handling
try {
  const obj = JSON.parse(invalidJson);
} catch(error) {
  console.error("Invalid JSON:", error.message);
}
```

**Real-world Applications:**
```javascript
// Parse API response
fetch('/api/users/1')
  .then(response => response.json())  // JSON.parse() inside
  .then(data => console.log(data.name));

// Load from LocalStorage
const user = JSON.parse(localStorage.getItem('user'));

// Process server response
const message = JSON.parse(event.data);  // WebSocket
```

### 2.4 Deep Copy Using JSON

```javascript
const original = {
  user: "Alice",
  scores: [90, 85, 88],
  nested: {x: 1}
};

// Create independent copy
const copy = JSON.parse(JSON.stringify(original));

copy.scores[0] = 100;
copy.nested.x = 999;

console.log(original.scores[0]);  // 90 (unchanged)
console.log(original.nested.x);   // 1 (unchanged)
```

---

## MODULE 3: DOM MANIPULATION

### 3.1 DOM Tree & Structure

**What is DOM?**
Document Object Model - a tree representation of HTML elements that JavaScript can access and modify.

**Structure Example:**
```
document
├── html
│   ├── head
│   │   └── title
│   └── body
│       ├── header
│       ├── nav
│       ├── main
│       │   ├── h1
│       │   ├── p
│       │   └── button
│       └── footer
```

**Terminology:**
- **Parent:** Element containing others
- **Child:** Element inside another
- **Sibling:** Elements at same level
- **Ancestor:** Parent, grandparent, etc.

### 3.2 DOM Selectors

**Available Methods:**

| Method | Returns | Use Case |
|--------|---------|----------|
| `getElementById()` | Single element | When you know the ID |
| `querySelector()` | First match | Any CSS selector |
| `querySelectorAll()` | All matches (NodeList) | Multiple elements |
| `getElementsByClassName()` | HTMLCollection (live) | By class name |
| `getElementsByTagName()` | HTMLCollection (live) | By tag name |

**Examples:**

```javascript
// By ID
const header = document.getElementById("main-header");

// By CSS selector (first match)
const btn = document.querySelector(".btn-primary");
const input = document.querySelector("#search");
const firstP = document.querySelector("div > p");

// All matching elements
const items = document.querySelectorAll(".item");
const links = document.querySelectorAll("a");
const inputs = document.querySelectorAll("input[type='text']");

// Loop through results
document.querySelectorAll("li").forEach(item => {
  console.log(item.textContent);
});
```

### 3.3 Read/Write HTML & CSS

**Read/Write HTML Content:**
```javascript
// Get HTML
const html = element.innerHTML;  // Gets HTML tags
const text = element.textContent;  // Gets only text

// Set HTML
element.innerHTML = "<p>New HTML</p>";
element.textContent = "Plain text";
```

**Modify Styles:**
```javascript
// Inline styles (direct)
element.style.color = "blue";
element.style.backgroundColor = "#FF0000";
element.style.fontSize = "20px";

// CSS classes (recommended)
element.classList.add("active");
element.classList.remove("disabled");
element.classList.toggle("highlight");
element.classList.contains("active");  // Returns boolean

// Get computed styles
const styles = getComputedStyle(element);
console.log(styles.color);
```

**Get/Set Attributes:**
```javascript
// Get attribute
const id = element.getAttribute("id");
const data = element.getAttribute("data-value");

// Set attribute
element.setAttribute("disabled", "true");
element.setAttribute("data-status", "active");

// Direct properties
element.id = "new-id";
element.className = "active";
element.title = "Hover text";
```

### 3.4 Create & Append Elements

**Steps:**
1. Create element with `createElement()`
2. Configure (set properties, content)
3. Append to DOM with `appendChild()`

**Methods:**

```javascript
// Create element
const div = document.createElement("div");
const p = document.createElement("p");

// Set content
p.textContent = "Hello";
p.innerHTML = "<strong>Bold</strong>";

// Add to DOM
container.appendChild(p);      // Add as last child
container.prepend(p);          // Add as first child
container.append(p, p2, "text");  // Add multiple + text

// Insert at specific position
const firstChild = container.firstChild;
container.insertBefore(newElement, firstChild);

// Example: Create list
const list = document.getElementById("myList");
["Apple", "Banana", "Cherry"].forEach(fruit => {
  const li = document.createElement("li");
  li.textContent = fruit;
  list.appendChild(li);
});
```

### 3.5 Delete Elements

**Methods:**

```javascript
// Direct removal
element.remove();

// Remove through parent
parent.removeChild(child);

// Replace element
const newElem = document.createElement("span");
parent.replaceChild(newElem, oldElem);

// Clear all content
element.innerHTML = "";
element.textContent = "";

// Example: Remove items
document.querySelectorAll(".old-item").forEach(item => {
  item.remove();
});
```

---

## HOW TO USE THESE RESOURCES

### File Structure:
```
class/
├── DESTRUCTURING_JSON_DOM_GUIDE.txt  ← Complete reference guide
├── 01_DESTRUCTURING_EXAMPLES.js       ← Runnable destructuring examples
├── 02_JSON_EXAMPLES.js                ← Runnable JSON examples
├── 03_DOM_MANIPULATION_EXAMPLES.html  ← Interactive DOM examples
└── COMPLETE_GUIDE.md                  ← This file
```

### Running the Examples:

**JavaScript Examples (01_DESTRUCTURING_EXAMPLES.js, 02_JSON_EXAMPLES.js):**
```bash
# Option 1: Use VS Code Code Runner
# Right-click in file → Run Code

# Option 2: Use Node.js
node 01_DESTRUCTURING_EXAMPLES.js
node 02_JSON_EXAMPLES.js

# Option 3: Browser Console
# Copy & paste examples directly into browser console
```

**HTML Example (03_DOM_MANIPULATION_EXAMPLES.html):**
```bash
# Open in browser
1. Double-click the file, OR
2. Right-click → "Open with Live Server", OR
3. Copy the file path and open in browser
```

### Learning Path:

**Beginner:**
1. Read: DESTRUCTURING section in guide
2. Run: 01_DESTRUCTURING_EXAMPLES.js (read comments)
3. Try: Modify examples, add your own

**Intermediate:**
1. Read: JSON section in guide
2. Run: 02_JSON_EXAMPLES.js (view console output)
3. Try: Create API simulation with JSON

**Advanced:**
1. Read: DOM Manipulation section in guide
2. Open: 03_DOM_MANIPULATION_EXAMPLES.html in browser
3. Try: Build a complete app (Todo, Calculator, etc.)

---

## QUICK REFERENCE CHEATSHEET

### Destructuring
```javascript
// Array
const [a, b, ...rest] = array;
const [x, , z] = array;
const [a = 10] = array;

// Object
const {name, age} = object;
const {name: n, age: a} = object;
const {name = "John"} = object;
const {nested: {value}} = object;
```

### JSON
```javascript
// To String
JSON.stringify(obj);           // Compact
JSON.stringify(obj, null, 2);  // Formatted
JSON.stringify(obj, ["prop"]);  // Selected properties

// To Object
JSON.parse(jsonString);
JSON.parse(jsonString, (key, value) => {...});
```

### DOM
```javascript
// Select
document.getElementById("id");
document.querySelector(".class");
document.querySelectorAll("div");

// Read/Write
element.innerHTML = "...";
element.textContent = "...";
element.style.color = "blue";
element.classList.add("active");

// Create/Append
const elem = document.createElement("div");
container.appendChild(elem);

// Delete
element.remove();
parent.removeChild(child);
```

---

## COMMON MISTAKES TO AVOID

### Destructuring
❌ `const [a, b] = 5;`  ← Not iterable
✓ `const [a, b] = [1, 2];`

❌ `const {name} = "string";`  ← Wrong type
✓ `const {name} = {name: "John"};`

### JSON
❌ `JSON.stringify({name: undefined});`  ← undefined not supported
✓ `JSON.stringify({name: "value"});`

❌ Parsing invalid JSON without try-catch
✓ Wrap in try-catch block

### DOM
❌ `document.getElementById() === null`  ← Check before using
✓ `if (element) { element.innerHTML = "..."; }`

❌ Using deprecated methods
✓ `querySelector()` instead of `getElementsByClassName()`

---

## PRACTICE EXERCISES

### Exercise 1: Student Data Processing
```javascript
// Combine all three concepts:
// 1. Destructure student object
// 2. Create JSON string
// 3. Modify DOM with results
```

### Exercise 2: API Simulation
```javascript
// Create mock API response
// Parse JSON
// Display in DOM using createElement
```

### Exercise 3: Todo Application
```javascript
// Complete app using all three topics:
// - Destructure form data
// - Store with JSON
// - Manipulate DOM
```

---

## RESOURCES FOR FURTHER LEARNING

- MDN Web Docs: https://developer.mozilla.org/en-US/docs/Web/JavaScript
- JavaScript Info: https://javascript.info/
- W3Schools: https://www.w3schools.com/js/

---

## SUMMARY

| Topic | Key Concept | Main Use |
|-------|-------------|----------|
| **Destructuring** | Unpack values into variables | Clean code, parameter handling |
| **JSON** | Serialize/deserialize data | APIs, storage, transmission |
| **DOM** | Modify web pages dynamically | Interaction, responsiveness |

These three concepts form the foundation of modern JavaScript web development. Master them, and you'll be able to build dynamic, interactive web applications!

---

**Happy Learning! 🚀**
