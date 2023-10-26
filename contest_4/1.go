package main

import (
	"encoding/json"
	"fmt"
	"os"
)

type Task struct {
	UserID    int  `json:"user_id"`
	Completed bool `json:"completed"`
}

type Project struct {
	Tasks []Task `json:"tasks"`
}

func main() {
	var n int
	fmt.Scanln(&n)
	data, _ := os.ReadFile("data.json") // Чтение данных из файла data.json
	var projects []Project              // переменная для хранения данных о проектах
	json.Unmarshal(data, &projects)     // Разбираем JSON в структуры Go
	count := 0
	for _, project := range projects { // итерация по проектам
		for _, task := range project.Tasks { // Итерация по задачам в проекте
			if task.UserID == n && task.Completed { // Проверяем, что userID совпадает и задача завершена
				count++
			}
		}
	}
	fmt.Println(count)
}
