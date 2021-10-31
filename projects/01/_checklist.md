# Implemented Gates
- And
- Not
- Or
- And16
- Not16

## Notes
- AND can be implemented by inverting the signal from a Nand gate using NOT.
- NOT can be implemented by feeding the same two inputs to a Nand gate.

OR can be implemented by:
1. Inverting both inputs, so if we have (1, 0) we have (0, 1)
2. Feeding both of the inverted inputs into a Nand gate so:
   `Nand(1,1) = 0` or `Nand(1,0) = 1`
3. The output of the Nand gate is now an OR gate.