const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('', function (a) { // Monnei
    rl.question('', function (b) { // Fjee
        rl.question('', function (c) { // Dolladollabilljoll

            var lowestFee = Math.min(a, b, c);

            if (lowestFee == a) {
                console.log('Monnei');
            } else if (lowestFee == b) {
                console.log('Fjee');
            } else {
                console.log('Dolladollabilljoll');
            }
            
            rl.close();
    });
  });
});
