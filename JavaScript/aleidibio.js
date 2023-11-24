const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('', function (a) {
    rl.question('', function (b) {
      rl.question('', function(c) {
        var total = parseInt(c) - parseInt(b) - parseInt(a);
        console.log(total);
    
        rl.close();
    });
  });
});
