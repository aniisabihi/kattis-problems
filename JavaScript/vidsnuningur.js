const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});


rl.question('', function(str) {
    const reversedString = str.split("").reduce((acc, char) => char + acc, "");
    console.log(reversedString);
    
    rl.close();
});