const http = require("https");
var a = 100;
var b = 100;


http.get("https://catfact.ninja/fact", (res) => {
    let data = '';

    // A chunk of data has been received.
    res.on('data', (chunk) => {
        data += chunk;
    });

    // The whole response has been received.
    res.on('end', () => {
        console.log(JSON.parse(data)); // parses and logs the JSON
    });
}).on("error", (err) => {
    console.error("Error: " + err.message);
});
function multiply(a,b){
    return a*b;
}

setInterval(() => {
    console.log("hello world")
},2000);

var c = multiply(a,b);
console.log(c);
