package com.alphacorp.kotlinbasics


fun main() {
    //immutable variable
    val myName = "Azeem"

    //TODO: This is also like comments
    /*
    Multiline
     comment

     */
    println("Hello " + myName)

    var x: Int = 5
    print(x)

    var y = 344
    println(y)

    val string = "Noice"

    var newstring = string
    println()
    println(newstring)

    println("Hello $myName") //Alternative way to write above code, $ replaces the object
    println("The length of my name is ${myName.length}") // This method is called string interpolation or string template

    val a = 5.0
    val b = 3;
    val r = (a / b)
    println("Value of r is $r")

//if else
    if (a.toInt() > b)
        println("a is greater than b")
    else
        println("no equal")

    //when statements
    var u = 3
    when (u) {
        1 -> println(1)
        2 -> println(2)
        3 -> println(3)
        else -> println("Default switch case")

    }

    //In range
    var month = 2
    when (month) {
        in 3..5 -> println("Spring")
        in 6..8 -> println("Summer")
        in 9..11 -> println("Fall")
        12, 1, 2 -> println("Winter")//Also possible
    }
//example 2
    var e:Any=12.23 //Data could be of any type which is decided by compiler(Like Auto in C++)
    when(e)
    {
        is Int->println("$e is Int")
        is Double->println("$e is Double")
        is String->println("$e is String")
    }
//while loop
    e=9
    x=2
    while(e>x)
    {
        print("$e ")
        e--
    }
    println()

    // for loops
    for (y in 1..10)

    {

        print("$y ")
    }
    println()
    //another way
    for ( i in 1 until 10)

    {

        print("$i ")
    }
    println()

    for ( i in 10 downTo  1 step 2)

    {

        print("$i ")
    }
}