// Problem Statement: If 3 consecutive items have price >= 1000, the cheapest among them becomes FREE.
// Function Name: finalCartPrice(arr, n)
// Input: 508 1200 1500 1180 700 1300
// Expected Output: 3908
// How to Solve:
// • Store prices in an array.
// • Find 3 consecutive prices >= 1000.
// • Find minimum among those 3.
// • Subtract minimum from total.


// function finalcartprice(arr,n){
//     let total=0;
//     for (let i=0;i<n;i++){
//         total+=arr[i];
        
//     }
//     let newarr=arr.filter(x=>x>=1000);
//     console.log(newarr);
//     let sortedarr=newarr.sort((a,b)=>a-b);
//     console.log(sortedarr);
//     let sum=sortedarr[0]

//     let finalprice=total-sum;
//     console.log(finalprice);
// }
// arr=[508, 1200, 1500, 1180, 700, 1300];
// finalcartprice(arr,6);


// Problem Statement: Check whether 3 or more consecutive absences ('A') exist.
// Function Name: checkAttendance(str)
// Input: PPAAAPPP
// Expected Output: Detained
// How to Solve:
// • Traverse attendance string.
// • Count consecutive A characters.
// • If count reaches 3, print Detained.

// function checkAttendance(str){
//     let count=0;
//     for (let i=0;i<str.length;i++){
//         if (str[i]=='A'){
//             count++;
//         }
//         else{
//             count=0;
//         }
//         if (count>=3){
//             console.log("Detained");
//             return;
//         }
//     }
//     console.log("Not Detained");
// }
// checkAttendance("PPAA=APPP");



// Problem Statement: Calculate bill using slab system.
// Function Name: calculateBill(units)
// Input: 250
// Expected Output: 1700
// How to Solve:
// • First 100 units at 5/unit.
// • Next 100 units at 7/unit.
// • Remaining units at 10/unit.

// function calculateBill(units){
//     let bill=0;
//     if (units<=100){
//         bill=units*5;
//     }
//     else if (units<=200){
//         bill=100*5+(units-100)*7;
//     }
//     else{
//         bill=100*5+100*7+(units-200)*10;
//     }
//     return bill;
// }
// console.log(calculateBill(250));


// Problem Statement: Password must contain minimum 8 characters, 1 uppercase letter, and 1 number.
// Function Name: checkPassword(str)
// Input: JsCode123
// Expected Output: Strong Password
// How to Solve:
// • Check string length.
// • Check uppercase letters.
// • Check numeric digits

// function checkPassword(str){
//     if (str.length < 8) {
//         return "Weak Password";
//     }
//     let hasUppercase = false;
//     let hasNumber = false;
//     for (let i = 0; i < str.length; i++) {
//         if (str[i] >= 'A' && str[i] <= 'Z') {
//             hasUppercase = true;
//         }
//         if (str[i] >= '0' && str[i] <= '9') {
//             hasNumber = true;
//         }
//     }
//     if (hasUppercase && hasNumber) {
//         return "Strong Password";
//     } else {
//         return "Weak Password";
//     }
// }
// console.log(checkPassword("JsCode123"));                                            



// Problem Statement: Count vote frequency using objects.
// Function Name: countVotes(arr)
// Input: ["A","B","A","C","B","A"]
// Expected Output: {A:3, B:2, C:1}
// How to Solve:
// • Create empty object.
// • Traverse votes array.
// • Increase count for each candidate.

// function countVotes(arr){
//     let Count={};
//     for (let i=0;i<arr.length;i++){
//         let vote=arr[i];
//         if (Count[vote]){
//             Count[vote]++;
//         }
//         else{
//             Count[vote]=1;
//         }
//     }
//     return Count;
// }
// console.log(countVotes(["A","B","A","C","B","A"]));


// Problem Statement: Find max, min, and average distance.
// Function Name: analyzeDistance(arr)
// Input: [20, 50, 35, 60, 40]
// Expected Output: Max=60, Min=20, Average=41
// How to Solve:
// • Find maximum value.
// • Find minimum value.
// • Compute total and average.

// function analyzeDistance(arr){
//     let max=Math.max(...arr);
//     let min=Math.min(...arr);
//     let total=0;

//     for (let i=0;i<arr.length;i++){
      
//         total+=arr[i];
    
//         }
//             let average=total/arr.length;
//     console.log("Max="+max+", Min="+min+", Average="+average);
// }
// analyzeDistance([20, 50, 35, 60, 40]);


// 3. Find Second Largest Element
// Concept Used: Arrays, Conditions
// Function Name: secondLargest(arr, n)
// Problem Statement: Find second largest element in array.
// Sample Input: [10,50,20,80,60]
// Expected Output: 60
// How to Solve:
// • Find largest element.
// • Find largest excluding maximum.

// function secondLargest(arr, n){
//     let max=Math.max(...arr);
//     let secondMax=arr[0];
//     for (let i=0;i<n;i++){
//         if (arr[i]>secondMax && arr[i]<max){
//             secondMax=arr[i];
//         }
//     }
//     return secondMax;
// }
// console.log(secondLargest([10,50,20,80,60],5));


// 4. Reverse Array Using Function
// Concept Used: Arrays, Loops
// Function Name: reverseArray(arr, n)
// Problem Statement: Reverse array without using reverse().
// Sample Input: [1,2,3,4]
// Expected Output: [4,3,2,1]

// function reverseArray(arr, n){
//     let reversed=arr.reverse();
//     return reversed;
// }   
// console.log(reverseArray([1,2,3,4],4));


// 6. Remove Duplicate Elements
// Concept Used: Arrays, Nested Loops
// Function Name: removeDuplicates(arr, n)
// Problem Statement: Remove repeated values from array.
// Sample Input: [1,2,2,3,4,4,5]
// Expected Output: [1,2,3,4,5]

// function removeDuplicates(arr, n){  
//     let unique=[];
//     for (let i=0;i<n;i++){
//         if (!unique.includes(arr[i])){
//             unique.push(arr[i]);
//         }
//     }
//     return unique;
// }
// console.log(removeDuplicates([1,2,2,3,4,4,5],7));


// 13. Merge Two Arrays
// Function Name: mergeArrays(arr1, arr2)
// Sample Input: [1,2,3] and [4,5,6]
// Expected Output: [1,2,3,4,5,6]

// function mergeArrays(arr1, arr2){
//     let merged=arr1.concat(arr2);
//     return merged;
// }
// console.log(mergeArrays([1,2,3],[4,5,6]));


// 22. Array Palindrome Check
// Function Name: isPalindrome(arr, n)
// Sample Input: [1,2,3,2,1]
// Expected Output: Palindrome

// function isPalindrome(arr, n){
//     let left=0;
//     let right=n-1;
//     while (left<right){
//         if (arr[left]!==arr[right]){
//             return "Not Palindrome";
//         }
//         left++;
//         right--;
//     }
//     return "Palindrome";
// }
// console.log(isPalindrome([1,2,3,2,1],5));

