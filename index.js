'use strict'

const sat = require('./build/Release/sat.node')

console.log(sat.getInfo(12344));
console.log(sat.sendSalesDsts(12344, 'teste', 'teste'));
