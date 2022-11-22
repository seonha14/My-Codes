package com.alphacorp.kotlinbasics

fun main() {
    var a = Person("Azeem", "Idrisi")
    var b = Person()
    var c = Person(lastname = "OG")

    c.showHobby()
    c.hobby= "Nothing"
    c.showHobby()



}

//class with default constructor Alpha Corp and init (initializer) that executes when object is created
class Person(firstname: String = "Alpha", lastname: String = "Corp") {

    //Member Variables
    var age:Int?=null
    var hobby:String="No Hobby"

    // Initializer
    init {

        println("Person Name : $firstname $lastname")
    }

    //Member Functions
    fun showHobby()
    {
        println("Hobby: $hobby")
    }

}
