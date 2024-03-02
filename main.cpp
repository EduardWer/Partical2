#include <iostream>
#include <iostream>
#include <string>
#include <algorithm>
#include <random>

// Функция для вывода слова задом наперед
void reverseWord(const std::string& word) {
    std::string reversedWord = word;
    std::reverse(reversedWord.begin(), reversedWord.end());
    std::cout << "Слово задом наперед: " << reversedWord << std::endl;
}

// Функция для вывода слова без гласных
void removeVowels(const std::string& word) {
    std::string withoutVowels = "";
    for (char c : word) {
        if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
            withoutVowels += c;
        }
    }
    std::cout << "Слово без гласных: " << withoutVowels << std::endl;
}

// Функция для вывода слова без согласных
void removeConsonants(const std::string& word) {
    std::string withoutConsonants = "";
    for (char c : word) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            withoutConsonants += c;
        }
    }
    std::cout << "Слово без согласных: " << withoutConsonants << std::endl;
}

// Функция для рандомного раскидывания букв слова
void shuffleLetters(const std::string& word) {
    std::string shuffledWord = word;
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(shuffledWord.begin(), shuffledWord.end(), g);
    std::cout << "Рандомно раскиданные буквы: " << shuffledWord << std::endl;
}

int main() {
    while (true){
    std::string word;
    int choice;

    std::cout << "Введите слово: ";
    std::cin >> word;

    std::cout << "Меню:" << std::endl;
    std::cout << "1. Слово задом наперед" << std::endl;
    std::cout << "2. Вывести слово без гласных" << std::endl;
    std::cout << "3. Вывести слово без согласных" << std::endl;
    std::cout << "4. Рандомно раскидывать буквы заданного слова" << std::endl;
    std::cout << "Выберите действие (1-4): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            reverseWord(word);
            break;
        case 2:
            removeVowels(word);
            break;
        case 3:
            removeConsonants(word);
            break;
        case 4:
            shuffleLetters(word);
            break;
        default:
            std::cout << "Некорректный выбор" << std::endl;
            break;
    }


}}


