# LCD Status Display using 8051

## Description

This project demonstrates interfacing a 16×2 LCD with the AT89C51 (8051) microcontroller. A push button is connected to the microcontroller, and the LCD displays the switch status in real time.

- When the switch is **pressed**, the LCD displays **ON**.
- When the switch is **released**, the LCD displays **OFF**.

This project is useful for learning LCD interfacing and digital input reading using the 8051.

---

## Components Used

- AT89C51 / 8051 Microcontroller
- 16×2 LCD (LM016L)
- Push Button Switch
- Proteus Professional
- Keil uVision

---

## Circuit Diagram

![Circuit](LCD%20Status%20Circuit.png)

---

## Program File

- `lcd status.c`

---

## Output

### Switch OFF

![Switch OFF](LCD%20Satus%20output%20OFF.png)

### Switch ON

![Switch ON](LCD%20Status%20output%20ON.png)

---

## Working

1. The microcontroller continuously reads the switch input.
2. If the switch is pressed, the LCD displays **ON**.
3. If the switch is not pressed, the LCD displays **OFF**.
4. The LCD updates immediately whenever the switch state changes.

---

## Applications

- Switch status monitoring
- Digital input demonstration
- LCD interfacing practice
- Embedded systems learning

---

## Author

**Thirishika M**
