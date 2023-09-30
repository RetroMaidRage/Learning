 
class Address(val city: String, val street: String) {
  override def toString: String = s"$street, $city"
}


class Human(val name: String, val age: Int, val address: Address) {

  def displayInfo(): Unit = {
    println(s"Ім'я: $name")
    println(s"Вік: $age років")
    println(s"Адреса: ${address.toString}")
  }


  def changeAddress(newAddress: Address): Unit = {
    println(s"$name змінив(ла) адресу на ${newAddress.toString}")
    address = newAddress
  }
}


object Main extends App {
  val address1 = new Address("Київ", "вул. Головна")
  val address2 = new Address("Львів", "вул. Паркова")

  val person = new Human("Микита", 18, address1)

  println("Інформація про першу людину:")
  person.displayInfo()

  person.changeAddress(address2)
  println("Інформація про першу людину після зміни адреси:")
  person.displayInfo()
}
