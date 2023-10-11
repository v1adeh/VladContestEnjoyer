package main

import (
	"fmt"
)

func findSingle(nums []int) int {
	result := 0
	for _, num := range nums {
		result ^= num           // ^= оператор побитового исключающего ИЛИ
	}
	return result
}

func main() {
	var a int
	fmt.Scan(&a)

	nums := make([]int, a)  // создаём срез целых чисел размером а
	for i := 0; i < a; i++ {
		fmt.Scan(&nums[i])
	}
	word := findSingle(nums)
	fmt.Println(word)
}
