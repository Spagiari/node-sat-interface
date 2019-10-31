'use strict'

const addon = require('./build/Release/addon.node')

console.log(`native addon whoami: ${addon.WhoAmI()}`)

addon.ConsultarSAT(12344);

for (let i = 0; i < 6; i++) {
  console.log(`native addon increment: ${addon.Increment(i)}`)
}
