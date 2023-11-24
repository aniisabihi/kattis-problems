const readline = require('readline');

const userInput = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

userInput.question("", (input) => {
  console.log(input.length);

  userInput.close();
});