package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func isLucky(number string) bool {
	first, second := 0 , 0
	for _, s := range number[:3]{
		temp, _ := strconv.Atoi(string(s))
		first += temp
	}
	for _, s := range number[3:]{
		temp,_ := strconv.Atoi(string(s))
		second += temp
	}
	return first == second
}

func main() {
	number, _ := bufio.NewReader(os.Stdin).ReadString('\n')
	if isLucky(number[:len(number)-1]) { // Обрезаем \n в конце строки
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
