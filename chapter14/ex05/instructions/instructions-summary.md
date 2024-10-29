## Instructions

Write a program that prompts the user to enter a person's date of birth through the command line, gathering the year, month, and day sequentially in that specific order. The application must accurately convert and display 8-27-1980 in a long format, such as "August 27, 1980." To ensure robustness and reliability, your application must include at least two custom exception classes: `invalidDay` and `invalidMonth`, to handle erroneous day and month inputs respectively. 

### Requirements:
- **Sequential Input Collection:**
  - **Year:** Initially, prompt the user to enter the birth year. Validate this input to ensure it's a non-negative integer. Should the user enter an invalid year (e.g., a negative number), the program should not proceed or crash but instead prompt the user again until a valid year is entered.
  - **Month:** Next, request the month of birth as a numeric value (1 through 12). If the input falls outside this range, throw and catch an `invalidMonth` exception. This exception handling should guide the user back to entering a correct month number.
  - **Day:** Finally, prompt for the day of birth. The validity of the day depends on the entered month and year (considering leap years for February). If an incorrect day is provided, throw and catch an `invalidDay` exception, and inform the user of the acceptable day range for the specified month and year.

- **Custom Exception Handling:**
  - **`invalidDay` Exception:** This exception is triggered if the user inputs an invalid day based on the month and year (e.g., "February 30"). It should convey a clear error message to the user, indicating the valid day range.
  - **`invalidMonth` Exception:** Triggered by an out-of-range month input, this exception should prompt the user to input a valid month number (1-12).

- **Accurate Leap Year Calculation:** Implement logic to determine whether the specified year is a leap year, impacting the valid date range for February.

- **Verbose Date Output:** Upon validating all inputs (year, month, day), the application should display the date of birth in a clear, verbose format (e.g., converting "8-27-1980" into "August 27, 1980").

### Suggestions for Implementation:
Utilize `try-catch` blocks to manage input validation and to provide feedback for incorrect inputs, ensuring the program remains user-friendly and resilient against invalid data. Apply conditional logic (e.g., `switch` or `if-else` statements) to translate numeric month values into their corresponding month names. A year is a leap year if it is divisible by 4, except for years that are both divisible by 100 and not divisible by 400. This calculation is critical for accurately determining the number of days in February.


