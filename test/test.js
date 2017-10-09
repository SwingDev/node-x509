var x509 = require('../index'),
    fs = require('fs'),
    path = require('path'),
    assert = require('assert');

// All cert files should read without throwing an error.
// Simple enough test, no?
fs.readdirSync(path.join(__dirname, 'certs')).forEach(function (file) {
  console.log("File: %s", file);
  console.log(x509.parseCert(fs.readFileSync(path.join(__dirname, 'certs', file)).toString('binary')));
  console.log();
});
