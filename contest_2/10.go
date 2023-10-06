package main

import "fmt"

func shift(arr []int, steps int) {
	length := len(arr)

	steps = steps % length // Нормализуем steps, чтобы он был в пределах от 0 до length
	if steps < 0 {
		steps += length
	}

	temp := make([]int, length) // Создаем временный массив для хранения сдвинутых значений
	for i := 0; i < length; i++ {
		newIndex := (i + steps) % length
		temp[newIndex] = arr[i]
	}
	copy(arr, temp) // Копируем значения из временного массива обратно в исходный
}

func main() {
	var steps int
	fmt.Scan(&steps)

	var data [10]int
	for index := range data {
		fmt.Scan(&data[index])
	}

	shift(data[:], steps)
	for _, value := range data {
		fmt.Printf("%d ", value)
	}
}
