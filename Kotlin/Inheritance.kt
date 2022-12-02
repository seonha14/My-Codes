open class Car(var brand: String, var model: String) {
    open var Speed = 0  //Open to allow overriding
    fun setterSpeed(userInput: Int) {
        Speed = userInput
    }

    open fun drive(distance: Int) {
        println("Drove $distance kms")
    }
}

class Jaguar(brand: String, model: String, var year: Int) : Car(brand, model) {
    override var Speed: Int = year + 10
    override fun drive(distance: Int) {
        println("Drove $brand $model $distance kms in year $year")


    }

    fun drive() {
        println("Drive with No parameter")
    }
}

fun main() {

    var NewCar = Car("BMW", "5-Series")
    println(NewCar.brand)
    println(NewCar.model)
    NewCar.setterSpeed(500)
    println(NewCar.Speed)
    NewCar.drive(290)


    println()
    var NewJaguar = Jaguar("JG", "XE", 2022)
    println(NewJaguar.year)
    println(NewJaguar.Speed) //Prints overrided speed
    NewJaguar.drive(500)
    NewJaguar.drive()
    NewJaguar.setterSpeed(1900)
    println(NewJaguar.Speed)


}