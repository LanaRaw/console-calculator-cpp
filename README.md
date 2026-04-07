# Console Calculator (C++)

Простой консольный калькулятор на C++ для базовых арифметических операций.

## Возможности

- Сложение (`+`)
- Вычитание (`-`)
- Умножение (`*`)
- Деление (`/`) с проверкой деления на ноль
- Остаток от деления (`%`)
- Возможность выполнить несколько вычислений подряд

## Как запустить

### Требования

- Компилятор C++ (g++, MinGW, Visual Studio)
- Git (опционально)

### Компиляция и запуск

```bash
g++ calculator.cpp -o calculator
./calculator
```

### Запуск на Windows (Visual Studio)
Откройте .sln файл и нажмите Ctrl + F5

### Пример работы
```text
=== Console Calculator ===

Enter first number: 10
Enter operation (+, -, *, /, %): /
Enter second number: 3
Result: 3.33

Do another calculation? (y/n): y

Enter first number: 15
Enter operation (+, -, *, /, %): %
Enter second number: 4
Result: 3

Do another calculation? (y/n): n

Goodbye!
```

### Структура проекта
```
console-calculator-cpp/
├── calculator.cpp      # основной код программы
└── README.md           # документация
```

## Технологии

- C++17
- Стандартная библиотека `<cstdio>` (printf, scanf)

## Автор

**Lana Raw**

- GitHub: [@LanaRaw](https://github.com/LanaRaw)

## Статус

✅ Завершён (базовая версия)
