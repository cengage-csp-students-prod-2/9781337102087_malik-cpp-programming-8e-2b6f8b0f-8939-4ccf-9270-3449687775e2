## Instructions
Write a program that prompts the user to input an integer between **0** and **35**.  The prompt should say **Enter an integer between 0 and 35:**.

If the number is less than or equal to **9**, the program should output the number; otherwise, it should output:
* **A** for **10**
* **B** for **11**
* ** C** for **12**
*  . . . 
* and **Z** for **35**. 

(Hint: For numbers >= **10**, calculate the ACSII value for the corresponding letter and convert it to a `char` using the cast operator, `static_cast<char>()`.)

