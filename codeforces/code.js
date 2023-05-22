// // const count=new Array(10).fill(0);
// var arr=[-4,4,-4,4,-5];
// var ans=[];
// function solve(arr) {
//     for(let i=0;i<arr.length;i++){
//         if(arr[i] >= 0)
//             ans.push(arr[i]);
//     }
//     for(let i=0;i<arr.length;i++){
//         if(arr[i] < 0)
//             ans.push(arr[i]);
//     }
//     return ans;
// }
// console.log(solve(arr));


// var createCounter = function(n) {
//   return function() {
//       return n++;
//   };
// };


// const counter = createCounter(10)
// counter() // 10
// counter() // 11
// counter() // 12


function outerFunction(n) {
  // var outerVariable = 10;

  return function() {
    console.log(n++);
    // return n++;
  };

  // return innerFunction;
};

var inner = outerFunction(10);
inner(); // Output: 10
inner(); // Output: 10
inner(); // Output: 10
