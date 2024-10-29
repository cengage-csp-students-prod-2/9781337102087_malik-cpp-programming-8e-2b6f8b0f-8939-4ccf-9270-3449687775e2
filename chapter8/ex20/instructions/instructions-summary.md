## Instructions
The program in _Example 8-7_ outputs the average speed over the intervals of length 10. Modify the program so that the user can store the distance traveled at the desired times, such as times 0, 10, 16, 20, 30, 38, and 45. The program then computes and outputs the average speed of the object over the successive time intervals specified by the time when the distance was recorded. For example, for the previous list of times, the average speed is computed over the time intervals 0 to 10, 16 to 20, 20 to 30, 30 to 38, and 38 to 45. 

Instructions for *Example 8-7* have been included for your convenience. 

### Example 8-7 ###
Suppose that the distance traveled by an object at time t = a<sub>1</sub> is d<sup>1</sup> and at time t = a<sub>2</sub> is d<sup>2</sup>, where a<sub>1</sub> < a<sub>2</sub>. Then the average speed of the object from time a<sub>1</sub> to a<sub>2</sub>, that is, over the interval [a<sub>1</sub>, a<sub>2</sub>] is (d<sub>2</sub> - d<sub>1</sub>)(a<sub>2</sub> - a<sub>1</sub>). Suppose that the distance traveled by an object at certain times is given by the following table:

Time | Distance |
---|---|
0|0|
10|18|
20|27|
30|38|
40|52|
50|64|

Then the average speed over the interval [0, 10] is (18 - 0)/(10 - 0) = 1.8, over the interval [10, 20] is (27 - 18)/(20 - 10) = 0.9, and so on.

An example of the program is shown below: 
```text
Enter time and the distance traveled at that time 0 
0
Enter time and the distance traveled at that time 10
18
Enter time and the distance traveled at that time 20
27
Enter time and the distance traveled at that time 30
38
Enter time and the distance traveled at that time 40
52
Enter time and the distance traveled at that time 50
64

0  0.00
10  18.00
20  27.00
30  38.00
40  52.00
50  64.00
  Time  Distance Traveled  Average Speed / Time Interval
    0          0.00               0  [0, 0] 
   10         18.00            1.80  [0, 10]
   20         27.00            0.90  [10, 20]
   30         38.00            1.10  [20, 30]
   40         52.00            1.40  [30, 40]
   50         64.00            1.20  [40, 50]
```

