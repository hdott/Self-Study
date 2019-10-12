## Chapter 3

- [Ex_1](./Ex_1.cpp)
    > Write a short program that asks or your height in integer inches and then converts your height to feet and inches. Have the program use the underscore character to indicate where to type the response. Also use a const symbolic constant to represent the conversion factor.
- [Ex_2](./Ex_2.cpp)
    > Write a short program that asks for your height in feet and inches and your weight in pounds. Have the program report your body mass index (BMI). To calculate the BMI, first convert your height in feet and inches to your height in inches (1 foot = 12 inches). Then convert your height in inches to your height in meters by multiplying by (0.0254). Then conver your weight in pounds into your mass in kg by dividing by 2.2. Finally, compute your BMI by dividing your mass in kg by the square of your height in meters. Use symbolic constants to represent  the various conversion factors.
- [Ex_3](./Ex_3.cpp)
    > Write a program that asks the user to enter a latitude in degrees, minutes, and seconds and that then displays the latitude in decimal format. There are 60 seconds of arc to minute and 60 minutes of arc to a degree; represent these values with symbolic constants. You should use a separate variable for each input value. A sample should look like this: 
    ```
        Enter a latitude in degrees, minutes, and seconds:
        First, enter the degrees: 37
        Next, enter the minutes of arc: 51
        Finally, enter the seconds of arc: 19
        37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
    ```
- [Ex_4](./Ex_4.cpp)
    > Write a program that asks the user to enter the number of seconds as an integer         value (user type long, or long long) and that then displays the equivalent time in das, hours, minutes, and seconds. Use symbolic constants to represent the number of hours in the day, the number of minutes in an hour, and the number of seconds in a minute. The output should look like this:
    ```
        Enter the number of seconds: 31600000
        31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
    ```
- [Ex_5](./Ex_5.cpp)
    > Write a program that requests the user to enter the current world population and the current population of the U.S.. Store the information variables of type long long. Have the program display the percent that the U.S. population is of the world's population. The output should looke something like this:
    ```
        Enter the world's population: 6898758899
        Enter the population of the US: 310783781
        The population of the US is 4.50492% of the world population.
    ```
- [Ex_6](./Ex_6.cpp)
    > Write a program that asks how many minles you have driven and how many gallons of gasoline you have used and then reports the miles per gallon your car has gotten. Or, if you prefer, the program can request distance in km and petrol in liters and then report the result European style, in liters per 100 km.
- [Ex_7](./Ex_7.cpp)
    > Write a program that asks you to enter an automobile gasoline consumption figure in the European style (l/100km) and converts to the U.S. style of miles per gallon. Note that in addition to using different units of measurement, the U.S. approach (distance / fuel) is the inverse of the European approach (fuel / distance). Note that 100km is 62.14 miles, and 1 gallon is 3.875 liters. Thus, 19mpg is about 12.4 l/100km, and 27mpg is about 8.7 l/100km.