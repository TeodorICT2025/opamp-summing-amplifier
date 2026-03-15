# Op-Amp Summing Amplifier with Arduino Measurement

This project implements a **summing amplifier using an LM358 op-amp**.  
Two input signals are combined and measured with the Arduino ADC.

### Features
- Breadboard hardware implementation
- LTSpice Schematic
- LTSpice simulation  
- Arduino ADC measurement  
- Serial monitor output

### Biasing

A **DC bias voltage**

**V_bias = 2.43 V**

is applied to the **non-inverting input** to shift the signal into the **Arduino ADC range (0–5 V)** and avoid negative voltages.

### Circuit Parameters

All resistors:

**R = 1 kΩ**

Output equation:

**V_out = 3V_bias − V1 − V2**

### Hardware

![Breadboard](Breadboard%20Hardware%20Implementation.jpg)

### LTSpice Simulation

![LTSpice](LT_spice_simulation_summing%20amplifier.png)

