package com.alphacorp.kotlinbasics

fun main()
{
    var a:String="Hello"
//    a=null -> Compilation error
// It cannot be null
    //Solution - Nullables

    var b:String?="Hi"  //? is SafeCall operator
//    b=null
    println(b)

//    var l= b.length (l cannot get null length)
    var v=b?.length // Allowed bcz it means if b is not null then assign length else assign null to V
    println(v)


    //Elvis Operator
    var w:String?="Azeem"
    var name= w?:"Prince"  //If w is null then name = prince else w
    println(name)

    w=null
   name= w?:"Prince"  //If w is null then prince else w
    println(name)

    println(b!!.length) // use !! when it's 100% not null, else it'll not compile
}
