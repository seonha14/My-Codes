package com.alphacorp.kotlinbasics

//An Interface is like abstract class and if a class inherits from an Interface then it must
//implement all the non implemented members of the Interface
//Interface is used to force other classes to implement functions

interface Name {
    var num: Int
    fun notImplemented()
    fun Implemented() {
        println("Called Implemented")
    }
}

class inherited() : Name {
    override var num = 5 //Implemented num
    override fun notImplemented() {  //Implemented this function
        println("Not Implemented is now Implemented")
    }
}

fun main() {
    var a = inherited()
    println(a.num)
    a.notImplemented()
    a.Implemented() // This method is available because it was implemented in the Interface itself and class is inheriting from it
}
