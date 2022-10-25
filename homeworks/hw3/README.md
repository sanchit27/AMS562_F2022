# Homework 3

A short description about the homework3.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. 

Part 1 :
write a program that computes the derivative of the sin function at point x = π4 , i.e., compute y′|π4, where y = sin(x)
```
finite difference formula
y′(x) = f(x + h) − f(x) / h
```
```
center-difference
y′(x)= f(x+h)−f(x−h)/ 2h
```
Part 2 : 
write a program that determines the extreme arc lengths among a collection of random sample points on the unit sphere, i.e., x^2 + y^2 + z^2 = 1
The arc length can be computed by the inverse cosine function, i.e.,
```
l = cos^-1(n1 · n2)
```

## Usage

A few examples of useful commands and/or tasks.

Part 1:
```
$ g++ hw3.cpp
$ ./a.out <input h>
```
Part 2:
```
$ g++ hw3part2.cpp
$ ./a.out <input val>
```


### Dev Branch

* hw3:


## Additional imp  requirements for code

* Input: argv
* Variable: float
* Outputs: cout
* Others: argc and atof


## Key Features


# Part 1 


```
$ derivative using finite difference
$ derivative using centre difference
$ Output error using finite difference formula
$ Output error using centre difference formula 
```

```
$ Input:
Enter value of h
```

```
$ Output:
The value of h entered by the user is 1e-1
Error Value using derivative formula 0.0365038
Error Value using centreDifference formula 0.00117792

The value of h entered by the user is 1e-2
Error Value using derivative formula 0.00354726
Error Value using centreDifference formula 1.18138e-05

The value of h entered by the user is 1e-3
Error Value using derivative formula 0.000353646
Error Value using centreDifference formula 1.31311e-07

The value of h entered by the user is 1e-4
Error Value using derivative formula 3.53577e-05
Error Value using centreDifference formula 1.21016e-08

The value of h entered by the user is 1e-16
Error Value using derivative formula 0.403116
Error Value using centreDifference formula 0.151995
```

# Part 2




```
$ Input:
Enter value
```

```
$ Output:
The value of x[0] cooridnate
The value of y[0] cooridnate
The value of z[0] 


Minimum overall value
Minimum x
Minimum y
Mimimum z

Maximum Overall value
Maximum x
Maximum y
maximum z

Sample output:
x-0.376286
y-0.430593
x-0.820365
minimum 0
minimum x -0.376286
minimum y -0.430593
minimum z -0.820365
maximum 2.69624
maximum x 0.411202
maximum y -0.000159481
maximum z 0.911544
```



