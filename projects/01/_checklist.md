# Gates
- [x] And16.hdl
- [x] And.hdl
- [ ] DMux4Way.hdl
- [ ] DMux8Way.hdl
- [ ] DMux.hdl
- [ ] Mux16.hdl
- [ ] Mux4Way16.hdl
- [ ] Mux8Way16.hdl
- [x] Mux.hdl
- [x] Not16.hdl
- [x] Not.hdl
- [x] Or16.hdl
- [x] Or8Way.hdl
- [x] Or.hdl
- [x] Xor.hdl


## Notes
- AND can be implemented by inverting the signal from a Nand gate using NOT.
- NOT can be implemented by feeding the same two inputs to a Nand gate.

OR can be implemented by:
1. Inverting both inputs, so if we have (1, 0) we have (0, 1)
2. Feeding both of the inverted inputs into a Nand gate so:
   `Nand(1,1) = 0` or `Nand(1,0) = 1`
3. The output of the Nand gate is now an OR gate.   

XOR can be implemented by:
1. Inverting both inputs like with OR
2. Feeding the non inverted A input and inverted B input into an AND gate like
   `And(a=a, b=notB, out=w1)`
3. Feeding the inverted A input and the non inverted B input into another AND gate
   `And(a=notA, b=b, out=w2)`
4. Feeding both of the AND gate outputs into an OR gate

### Truth Tables
`A=1, B=1`

**NOT Truth Table:**
`Not(a=1)=0, Not(b=0)=1`

| A | Out |
|---|-----|
| 0 |   1 |
| 1 |   0 |


**A AND B Truth Table:**
`a & Not(b)=1 & 1, 1 & 1=1`

| A | B | Out |
|---|---|-----|
| 0 | 1 |   0 |
| 1 | 0 |   0 |
| 1 | 1 |   1 |
| 0 | 0 |   0 |

`Not(a) & b=0 & 0, 0 & 0=0`

**A OR B Truth Table:**
`Or(w1,w2)=Or(1,0), Or(1,0)=1`

| A | B | Out |
|---|---|-----|
| 0 | 0 |   0 |
| 0 | 1 |   1 |
| 1 | 0 |   1 |
| 1 | 1 |   0 |