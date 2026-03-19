// const obj = {
//   name: 'John',
//   age: 30,
//   city: 'New York'
// };
// const jsonString = JSON.stringify(obj);
// console.log(jsonString);
// const parsedObj = JSON.parse(jsonString);
// console.log(parsedObj.name);


// const user = {id : 1, name: 'Alice', email: 'asdfasdf'};
// const jsonString = JSON.stringify(user,['id', 'name'],1);
// console.log(jsonString);



// shallow copy of an object
// copies only the shared level properties,

// deep copy of an object
// creates a new object with all properties, including nested objects


// let obj1 = {a: 1, b: {c: 2}};
// let obj2 = JSON.parse(JSON.stringify(obj1));
// obj2.b.c = 3;
// console.log(obj1.b.c);
// console.log(obj2.b.c);  

// let obj1 = {a:1, b: {c: 2 ,d:3 ,e:4 }};
// let obj2 = JSON.parse(JSON.stringify(obj1));
// obj2.b.d = 10;
// console.log(obj1.b.d);
// console.log(obj2.b.d);

// let obj1 = {
//     name: 'John',
//     age: 30,
//     address: {
//         city: 'New York',
//         zip: '10001'
//     }
// };

// let obj2 = {...obj1};
// obj2.address.city = 'Los Angeles';
// console.log(obj1.address.city);
// console.log(obj2.address.city);

// kernal is the core of an operating system, responsible for managing system resources and facilitating communication between hardware and software. It handles tasks such as memory management, process scheduling, and device input/output operations. The kernel operates in a privileged mode, allowing it to access and control hardware directly, ensuring efficient and secure operation of the system.
// shell is the interface that allows users to interact with the operating system. It provides a command-line or graphical interface for users to execute commands, run applications, and manage files. The shell acts as an intermediary between the user and the kernel, translating user commands into actions that the kernel can execute. It also provides features such as scripting capabilities and command history, enhancing user productivity and system control.


// change subject of python to C 

// let obj1 = {name : "abhay" , email : "asdfasdf@dsa",rollno : 67, subjects : ["FAA","FEE0","python"]};
// let obj2 = JSON.stringify(obj1);
// obj2 = JSON.parse(obj2);
// obj2.subjects[2] = "C";
// console.log(obj1.subjects);
// console.log(obj2.subjects[2]);


let obj1 = {
    name: "jaskirat",
    email: {
        personal: "asd@asd",
        chitkara: "asda@chitkara"
    },
    perdetails: {
        "12th": { phy: 87, chem: 78, maths: 87 },
        "10th": { phy: 87, chem: 76, maths: 86 }
    }
};
console.log(obj1.name);
console.log(obj1.email.chitkara);
console.log(obj1.perdetails["12th"].maths);