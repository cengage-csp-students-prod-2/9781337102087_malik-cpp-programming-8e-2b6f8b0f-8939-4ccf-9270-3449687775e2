<!-- practice -->

## Instructions

Using the `classes extDateType` (_Programming Exercise 8_) and `dayType` (_Chapter 10, Programming Exercise 5_), design the `class calendarType` so that, given the month and the year, we can print the calendar for that month. To print a monthly calendar, you must know the first day of the month and the number of days in that month. Thus, you must store the first day of the month, which is of the form `dayType`, and the month and the year of the calendar. Clearly, the month and the year can be stored in an object of the form `extDateType` by setting the day component of the date to **1** and the month and year as specified by the user. Thus, the `class calendarType` has two member variables: an object of the type `dayType` and an object of the type `extDateType`.

Design the `class calendarType` so that the program can print a calendar for any month starting January 1, 1500. Note that the day for January 1 of the year 1500 is a Monday. To calculate the first day of a month, you can add the appropriate days to Monday of January 1, 1500.

For the `class calendarType`, include the following operations:

1. Determine the first day of the month for which the calendar will be printed. Call this operation `firstDayOfMonth`.
2. Set the month.
3. Set the year.
4. Return the month.
5. Return the year.
6. Print the calendar for the particular month.
7. Add the appropriate constructors to initialize the member variables.
