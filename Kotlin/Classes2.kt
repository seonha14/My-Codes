package com.alphacorp.kotlinbasics

fun main()
{
    var a= Car()
    println(a.owner)

    println(a.brand)
    println(a.model)
    a.brand= "Mercedes Benz"
//    a.model="S500"  //Cannot assign because of private setter
    println(a.brand)
    println(a.maxSpeed)
    a.maxSpeed=50
    println(a.maxSpeed)
    a.maxSpeed=390
}

class Car()
{
    lateinit var owner:String // It lets you declare thing which can be initialized later on.

    var brand:String = "BMW"

        get()  //Custom getter and provides value when Brand is called
        {
            return field.lowercase()
        }

    var maxSpeed:Int= 240
        set(value) //value is the keyword for the data received and field is for the data to be set
        {
            if(value<300)
            {
                field=value
            }
            else
                println("Speed cannot be more than 300kmph")
        }


    var model:String="540d"
    private set  //Making the setter private
    get()
    {
        return field.uppercase()
    }
    init {
        owner="OEM"
        model= "S500" //Private : Can be edited in class itself but not outside
    }




}
