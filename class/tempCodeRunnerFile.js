
let obj1 = {a:1, b: {c: 2 ,d:3 ,e:4 }};
let obj2 = JSON.parse(JSON.stringify(obj1));
obj2.b.d = 10;
console.log(obj1.b.d);
console.log(obj2.b.d);