# 🎮 Rock Paper Scissors Game

Klasik Taş-Kağıt-Makas oyununun modern ve görsel olarak zengin C++ konsol uygulaması.

## ✨ Özellikler

- 🎨 Renkli ve modern konsol arayüzü
- 📊 Skor takibi
- 🤖 Rastgele bilgisayar seçimleri
- ✅ Gelişmiş hata kontrolü
- 🎭 Emoji destekli görsel tasarım

## 🛠️ Gereksinimler

- C++11 veya üzeri
- g++ derleyici (veya başka bir C++ derleyici)
- Terminal/Konsol desteği

## 📦 Derleme ve Çalıştırma

### g++ ile Derleme (Mac/Linux)
```bash
g++ -std=c++11 src/main.cpp -o rock-paper-scissors
./rock-paper-scissors

###Windows (MinGW)

g++ -std=c++11 src/main.cpp -o rock-paper-scissors.exe
rock-paper-scissors.exe

###CMake ile Derleme

mkdir build
cd build
cmake ..
make
./rock-paper-scissors
