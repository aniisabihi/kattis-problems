const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

const start = 2022;

rl.question('', function(n) {
  rl.question('', function(k) {
    var years = parseInt(n) / parseInt(k);
    console.log(start + years);
    
    rl.close();
  });
});