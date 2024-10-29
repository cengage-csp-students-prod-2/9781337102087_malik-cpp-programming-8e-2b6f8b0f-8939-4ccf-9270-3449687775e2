## Summary
In this exercise, you will design various classes and write a program to computerize the billing system of a hospital.
## Instructions
1. Design the `class doctorType`, inherited from the `class personType`, defined in _Chapter 10_, with an additional data member to store a doctor’s specialty. Add appropriate constructors and member functions to initialize, access, and manipulate the data members.
2. Design the `class billType` with data members to store a patient’s ID and a patient’s hospital charges, such as pharmacy charges for medicine, doctor’s fee, and room charges. Add appropriate constructors and member functions to initialize, access, and manipulate the data members. If no value is provided for a charge, it should default to **0**. 
3. Design the `class patientType`, inherited from the `class personType`, defined in Chapter 10, with additional data members to store a patient’s ID, age, date of birth, attending physician’s name, the date when the patient was admitted in the hospital, and the date when the patient was discharged from the hospital. (Use the `class dateType` to store the date of birth, admit date, discharge date, and the `class doctorType` to store the attending physician’s name.) Add appropriate constructors and member functions to initialize, access, and manipulate the data members.

> Be careful! The `dateType` object and the `patientType` object might accept different date formats. 

4. Write a program to test your classes. 

