## Instructions
The function `printGrade` in *Example 6-13* is written as a `void` function to compute and output the course grade. The course score is passed as a parameter to the function `printGrade`. Rewrite the function `printGrade` as a value-returning function so that it computes and returns the course grade. (The course grade must be output in the function `main`.) Also, change the name of the function to `calculateGrade`.

The function `printGrade` has been posted below for your convenience. 

```
void printGrade(int cScore)
{
cout << "The course grade is: ";

if (cScore >= 90)  {
     cout << "A." << endl; 
} else if (cScore >= 80) {
     cout << "B." << endl;
} else if(cScore >= 70) {
     cout << "C." << endl;
} else if (cScore >= 60) {
     cout << "D." << endl; 
} else {
     cout << "F." << endl; 
}
```

