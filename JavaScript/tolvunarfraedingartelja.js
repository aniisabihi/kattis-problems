const readline = require('readline');

const userInput = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

userInput.question("", (inputNumber) => {
  let nth = inputNumber - 1;
  console.log(nth);

  userInput.close();
});