const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('', function (arnar) {
  rl.question('', function(hannes) {
    var total = parseInt(arnar) + parseInt(hannes);
    console.log(total);
    
    rl.close();
  });
});
