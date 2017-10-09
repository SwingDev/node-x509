node-x509
=========

Simple X509 certificate parser.

## Note

Fork of https://github.com/Southern/node-x509 - please use the original repository, it's fine. This fork is made just to adhere to our procedures - have an own copy + disable falling back to treating the passed string as a filename in parseCert method, which is the only one we're using currently.

#### x509.parseCert(`string`)
Parse subject, issuer, valid before and after date, and alternate names from certificate.

```js
const x509 = require('x509');
var cert = x509.parseCert(__dirname + '/certs/nodejitsu.com.crt');
/*
cert = { subject:
   { countryName: 'US',
     postalCode: '10010',
     stateOrProvinceName: 'NY',
     localityName: 'New York',
     streetAddress: '902 Broadway, 4th Floor',
     organizationName: 'Nodejitsu',
     organizationalUnitName: 'PremiumSSL Wildcard',
     commonName: '*.nodejitsu.com' },
  issuer:
   { countryName: 'GB',
     stateOrProvinceName: 'Greater Manchester',
     localityName: 'Salford',
     organizationName: 'COMODO CA Limited',
     commonName: 'COMODO High-Assurance Secure Server CA' },
  notBefore: Sun Oct 28 2012 20:00:00 GMT-0400 (EDT),
  notAfter: Wed Nov 26 2014 18:59:59 GMT-0500 (EST),
  altNames: [ '*.nodejitsu.com', 'nodejitsu.com' ],
  signatureAlgorithm: 'sha1WithRSAEncryption',
  fingerPrint: 'E4:7E:24:8E:86:D2:BE:55:C0:4D:41:A1:C2:0E:06:96:56:B9:8E:EC',
  publicKey: {
    algorithm: 'rsaEncryption',
    e: '65537',
    n: '.......' } }
*/
```

## License

MIT

#### Alternative implementation / build issues
If you are suffering from hard to fix build issues, there is an alternative (pure javascript) implementation using emscripten: https://github.com/encharm/x509.js (based on node-x509, slightly different API)
