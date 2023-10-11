package main

import (
	"fmt"
	"sort"
)

func findPair(num []int, target int) (int, int) { //(int, int) показывает в каком виде возвращать переменные
	sort.Ints(num)
	left, right := 0,
		len(num)-1
	for left < right {
		sum := num[left] + num[right]
		if sum == target {
			return num[left], num[right]
		}
		if sum < target {
			left++
		} else {
			right--
		}
	}
	return 0, 0
}

func main() {
	var a, X int
	fmt.Scan(&a, &X)
	num := make([]int, a)
	for i := 0; i < a; i++ {
		fmt.Scan(&num[i])
	}
	first, second := findPair(num, X)
	fmt.Println(first, second)
}
