package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func isPalindrome(s string) bool {
	var cleaned string
	for _, char := range s {
		if (char >= 'a' && char <= 'z') || (char >= 'A' && char <= 'Z') || (char >= '0' && char <= '9') { // Убираем пробелы и спецсимволы, переводим все в нижний регистр
			cleaned += strings.ToLower(string(char))
		}
	}
	for i := 0; i < len(cleaned)/2; i++ {
		if cleaned[i] != cleaned[len(cleaned)-i-1] { // Проверяем, является ли cleaned палиндромом
			return false
		}
	}
	return true
}

func main() {
	line, _ := bufio.NewReader(os.Stdin).ReadString('\n')
	if isPalindrome(line[:len(line)-1]) {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
