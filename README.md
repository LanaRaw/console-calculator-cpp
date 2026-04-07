# Console Calculator (C++)

![Status](https://img.shields.io/badge/status-stable-brightgreen)
![Version](https://img.shields.io/badge/version-1.0-blue)
![C++](https://img.shields.io/badge/C%2B%2B-17-orange)

Простой и надёжный консольный калькулятор на C++ с полной валидацией ввода.

## Возможности

- Сложение (`+`)
- Вычитание (`-`)
- Умножение (`*`)
- Деление (`/`) с проверкой деления на ноль
- Остаток от деления (`%`)
- Возможность выполнить несколько вычислений подряд
- **Защита от ввода букв и некорректных символов**
- **Повторный запрос при ошибке**

## Как запустить

### Требования

- Компилятор C++ (g++, MinGW, Visual Studio)

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

## Обработка ошибок

Программа корректно реагирует на некорректный ввод:

| Действие пользователя | Реакция программы |
|----------------------|-------------------|
| Ввод букв вместо числа | `Error: please enter a valid number!` → повторный запрос |
| Ввод недопустимого оператора | `Error: valid operations are: +, -, *, /, %` → повторный запрос |
| Деление на ноль | `Error: division by zero! Please enter a non-zero number.` → повторный ввод числа |

### Структура проекта
```
console-calculator-cpp/
├── README.md                    # документация
└── console-calculator-c++.cpp   # основной код программы
```

## Технологии

- C++17
- Стандартная библиотека `<cstdio>` (printf, scanf)

## Планы по улучшению

- [ ] Поддержка скобок и сложных выражений
- [ ] Сохранение истории вычислений в файл
- [ ] Графический интерфейс (Qt или ImGui)

## Автор

**Lana Raw**

- GitHub: [@LanaRaw](https://github.com/LanaRaw)

## Статус

✅ **Стабильная версия 1.0**
- Все базовые операции работают
- Добавлена полная валидация ввода
- Корректная обработка ошибок
