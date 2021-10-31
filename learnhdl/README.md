# HDL
Every HDL "program" has two parts: a header and a body.

## Structure of a program

```verilog
CHIP Xor {
    IN a, b; // a and b are input pins
    OUT out; // out is an output pin

    // our gate is made up of this
    PARTS:
    Not(in=a, out=nota);
    Not(in=b, out=notb);
    And(a=a, b=notb, out=w1);
    And(a=nota, b=b, out=w2);
    Or(a=w1, b=w2, out=out);
}
```

The header specifies the inputs and output pins of the chips, and the body contains a list
of `PARTS` which are the chips/gates that make up the chip.

Inside each part is specified as a gate which has one or more input connections
and results in a single output. Complex gates are just many simple gates chained together

> Tutorial for the Hardware Simulator: https://phoenix.goucher.edu/~kelliher/f2021/cs220/hardwareSimulatorTutorial