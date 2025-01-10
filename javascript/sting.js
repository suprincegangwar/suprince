let singleQuote = 'Hello, World!';
let doubleQuote = "JavaScript is fun!";
let templateLiteral = `Welcome, ${singleQuote}`;
console.log(singleQuote);
console.log(doubleQuote);
console.log(templateLiteral);

let text = "JavaScript";
console.log(text.length);
console.log(text.toUpperCase());
console.log(text.toLowerCase());
console.log(text.includes("Script"));
console.log(text.startsWith("Java"));
console.log(text.endsWith("Script"));

let firstName = "Suprince";
let lastName = "Gangwar";
let fullName = firstName + " " + lastName;
console.log(fullName);
(n == 1 || n == 0)

let str = "Hello!";
console.log(str[0]);
console.log(str.charAt(1));
console.log(str[str.length - 1]);

let phrase = "JavaScript is amazing!";
console.log(phrase.substring(0, 10));
console.log(phrase.slice(-8));

let greeting = "   Hello, World!   ";
console.log(greeting.trim());
console.log(greeting.replace("World", "JavaScript"));

let sentence = "Learning JavaScript is fun";
let words = sentence.split(" ");
console.log(words);
let newSentence = words.join(" - ");
console.log(newSentence);

let exclamation = "Wow! ";
console.log(exclamation.repeat(3));
