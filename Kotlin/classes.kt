package com.alphacorp.kotlinbasics

fun main() {
    var a = Person("Azeem", "Idrisi") // Calling with parameter/arguments
    var b = Person() //Creating with default paramter
    var c = Person(lastname = "OG") //Creating with only few parameter

    c.showHobby()
    c.hobby = "Gaming"
    c.showHobby()

    var Az = Person("Azeem", "Idrisi", 20) //Calls constructor
    Az.age = 21
    println(Az.hobby)
    println(Az.age)
    Az.showHobby()

}

//class with default constructor Alpha Corp and init (initializer) that executes when object is created
class Person(firstname: String = "Alpha", lastname: String = "Corp") {

    //Member Variables
    var age: Int? = null
    var hobby: String = "No Hobby"

    // Initializer
    init {

        println("Person Name : $firstname $lastname")
    }

    //Member Secondary Constructor
    constructor(firstname: String, lastname: String, age: Int) : this(firstname, lastname) {
        this.age = age
        println("Initialized person : $firstname $lastname of age : $age")
    }

    //Member Functions - Methods
    fun showHobby() {
        println("Hobby: $hobby")
    }

}
