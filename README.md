# 📖 English Janala

English Janala is an **interactive vocabulary learning platform** that helps users improve their English through lesson-based word lists, detailed word meanings, and pronunciation support.  
It is designed with a clean and modern UI, making English learning simple, engaging, and accessible for everyone.

---

## ✨ Features

- 📚 **Dynamic Lessons** – Lessons are fetched from a public API in real time.
- 🔎 **Search Functionality** – Quickly search and filter words from all lessons.
- 🗣 **Pronunciation Support** – Listen to word pronunciation with Speech Synthesis API.
- 🧾 **Detailed Word Info** – View meaning, pronunciation, example sentences, and synonyms in a modal.
- 🎨 **Modern Responsive UI** – TailwindCSS + DaisyUI provide a smooth and professional look.
- 🖱 **Interactive Buttons** – Active lesson buttons are visually highlighted for better navigation.
- ⏳ **Loading Spinner** – Shows when fetching data for a smooth user experience.

---

## 🛠️ Tech Stack

- **HTML5** – Clean and semantic markup  
- **CSS3** – Custom styles with Google Fonts (Poppins + Hind Siliguri)  
- **TailwindCSS + DaisyUI** – Modern UI design system  
- **JavaScript (ES6)** – API integration, DOM manipulation, event handling  
- **Font Awesome** – Icons for a more engaging interface  
- **SpeechSynthesis API** – To pronounce words out loud  

---

## 📂 Project Structure

```plaintext
.
├── index.html          # Main HTML page
├── style.css           # Custom styling (fonts, active states)
├── script/
│   └── index.js        # Core logic: API calls, rendering, event handling
└── assets/
    ├── logo.png        # Website logo
    ├── hero-student.png # Hero section image
    └── alert-error.png  # Empty state illustration
