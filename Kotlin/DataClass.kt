package com.alphacorp.kotlinbasics

//Data class hold data only No Functions {Like Structures in C}
data class User(var name: String, var age: Int)

fun main() {
    var azeem = User("Mohd Azeem", 20)
    var user2 = User("Azeem Idrisi", 20)

    println(azeem) //Print can be directly called upon Data class object
    println("User's Name is ${azeem.name}")
    println("User's Name is ${azeem.age}")

    if (azeem == user2)
        println("Both users are equal")
    else
        println("Not equal")


    azeem.name = "Azeem Idrisi"
    println(azeem)


    if (azeem == user2)
        println("Both users are equal")
    else
        println("Not equal")

    //Copy user with diff parameter

    var User3 = azeem.copy(name="Prince")//Only name is diff else same
    println(User3)

    //Component wise Printing
    println(azeem.component1())
    println(azeem.component2())

    // Simultaneous initialization
    var (NewName,NewAge)= User3 //same as NewName = User3.name, NewAge- User3.age
    println(NewName)
    println(NewAge)
}
