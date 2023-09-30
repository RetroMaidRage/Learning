object Main extends App {


  val numbers = List(1, 2, 3, 4, 5, 6, 7, 8, 9)
  val maxNumber = numbers.max
  val minNumber = numbers.min

  // парні числа
  val filteredNumbers = numbers.filter(_ % 2 == 0)
  val findNumber = numbers.find(_ == 5)

  val existsFive = numbers.exists(_ == 5)   // Перевірка, чи існує елемент, який задовольняє умову

  // Перевірка, чи список пустий
  val isEmptyList = numbers.isEmpty

  val firstElement = numbers.head  // Перший елемент
  val tailElements = numbers.tail   // Решта списку без першого елемента
  val numbersArray = Array(1, 2, 3, 4, 5)  // AVG


  val average = numbersArray.sum.toDouble / numbersArray.length   // Середнє арифметичне AVG


  val product = numbersArray.reduce(_ * _) 


  numbers.foreach(println)


  val searchValue = 6
  if (numbers.contains(searchValue)) {
    println(s"Знайдено значення $searchValue у списку.")
  } else {
    println(s"Значення $searchValue не знайдено у списку.")
  }


  println(s"Максимальне значення: $maxNumber")
  println(s"Мінімальне значення: $minNumber")
  println(s"Фільтрований список: $filteredNumbers")
  println(s"Знайдене число: $findNumber")
  println(s"Чи існує число 5: $existsFive")
  println(s"Чи список пустий: $isEmptyList")
  println(s"Перший елемент списку: $firstElement")
  println(s"Решта елементів списку: $tailElements")
  println(s"Середнє арифметичне: $average")
  println(s"Добуток масиву: $product")
}
