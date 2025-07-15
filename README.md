# 🕌 Zakat Calculator

## 💡 Overview

This is a **console-based Zakat Calculator** built using C++. It helps you calculate your net assets and determine whether Zakat (Islamic charitable obligation) is due, and if so, how much you need to pay.

---

## ⚙️ Features

- Takes detailed input for different types of **assets and liabilities**
- Uses **dynamic gold price** to calculate Nisab threshold
- Calculates Zakat amount at **2.5%** of net assets (if applicable)
- Displays net worth before and after paying Zakat
- User-friendly text-based interface

---

## 📋 How It Works

1. **Enter asset details**, such as cash, loans, investments, gold, silver, and business stock.
2. **Enter liabilities**, including debts, wages, and immediate bills.
3. **Provide the current gold price per gram**.
4. The calculator checks if your net wealth meets the **Nisab threshold** (value of 87.48 grams of gold).
5. If Zakat is due, it computes and shows the amount.

---

## 💻 Technologies Used

- C++
- Console I/O (cin, cout)
- Basic arithmetic and conditional logic
- Functions for modular structure

---

## 🚀 How to Run

1. Clone the repository or download the files.
2. Compile the code using a C++ compiler:

```bash
g++ zakat_calculator.cpp -o zakat_calculator
