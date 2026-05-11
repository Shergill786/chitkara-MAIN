const obj = {
  name: 'John',
  age: 30,
  city: 'New York'
};
const jsonString = JSON.stringify(obj);
console.log(jsonString);
const parsedObj = JSON.parse(jsonString);
console.log(parsedObj.name);

