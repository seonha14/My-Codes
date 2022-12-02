package com.alphacorp.kotlinbasics

fun main() {
    var names: List<String> = listOf("Hello ", "World", "Coder")
    var mixed: List<Any> = listOf(5, "Hello", 6.5, "Mustang", 200, 534.3)

    for (i in names)
        println(i)

    for (i in mixed) {
        if (i is Int) // Here 'is' Keyword is used instead of ==
            println("Integer $i")
        else if (i is String)
            println("String $i of length ${i.length}")
        else if (i is Double)
            println("Double $i")
    }
    println()
    println("Using when statement\n")
    // Alternative way of doing the same
    for (i in mixed) {
        when (i) {
            is Int -> println("$i : It's Integer")
            is String -> println("$i: It's String of length ${i.length}")
            is Double -> println("$i: It's Double")

        }
    }
    //Smart Cast

    var a: Any = "Hello"
    if (a !is String)
        println("Not a string")
    else println("It's a string")

    //Explicit casting
    var obj = a as String //as is used to typecast
    println("The of value obj is: $obj")

    var b: Any = "String"
    var obj2 = b as? Int //Returns null if it's not possible
    println(obj2)

}
