#include <iostream>
#include <string>

int main() {
    std::string playerName;
    int score = 0;

    std::cout << "Quiz Oyununa Hoş Geldiniz!" << std::endl;
    std::cout << "Lütfen adınızı girin: ";
    std::cin >> playerName;
    std::cout << "Merhaba, " << playerName << "! Oyuna başlayalım." << std::endl;

    std::cout << std::endl;

    // Soru 1
    std::cout << "Soru 1: Başkentleri hangi ülke paylaşır?" << std::endl;
    std::cout << "a) Türkiye ve Yunanistan\n";
    std::cout << "b) Fransa ve Almanya\n";
    std::cout << "c) İngiltere ve İspanya\n";
    std::cout << "Cevabınızı girin (a, b veya c): ";

    char answer1;
    std::cin >> answer1;

    if (answer1 == 'b' || answer1 == 'B') {
        std::cout << "Tebrikler! Doğru cevap." << std::endl;
        score++;
    }
    else {
        std::cout << "Maalesef, yanlış cevap." << std::endl;
    }

    std::cout << std::endl;

    // Soru 2
    std::cout << "Soru 2: Dünyanın en uzun nehri hangisidir?" << std::endl;
    std::cout << "a) Nil Nehri\n";
    std::cout << "b) Amazon Nehri\n";
    std::cout << "c) Mississippi Nehri\n";
    std::cout << "Cevabınızı girin (a, b veya c): ";

    char answer2;
    std::cin >> answer2;

    if (answer2 == 'a' || answer2 == 'A') {
        std::cout << "Tebrikler! Doğru cevap." << std::endl;
        score++;
    }
    else {
        std::cout << "Maalesef, yanlış cevap." << std::endl;
    }

    std::cout << std::endl;

    // Sonuçları göster
    std::cout << "Quiz oyunu tamamlandı!" << std::endl;
    std::cout << "Toplam puanınız: " << score << "/" << 2 << std::endl;

    return 0;
}
