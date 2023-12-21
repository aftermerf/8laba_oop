#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

public ref class MyForm : public Form {
public:
    MyForm() {
        // Ініціалізація елементів форми
        textBox1 = gcnew TextBox();
        label1 = gcnew Label();
        button1 = gcnew Button();
        button2 = gcnew Button();

        // Налаштування textBox1
        textBox1->Location = Point(10, 10);
        textBox1->Size = Drawing::Size(150, 20);

        // Налаштування label1
        label1->Location = Point(10, 40);
        label1->Size = Drawing::Size(200, 20);

        // Налаштування button1
        button1->Location = Point(10, 70);
        button1->Size = Drawing::Size(140, 23);
        button1->Text = "Вивести текст";
        button1->Click += gcnew EventHandler(this, &MyForm::button1_Click);

        // Налаштування button2
        button2->Location = Point(190, 230);
        button2->Size = Drawing::Size(75, 23);
        button2->Text = "Вийти";
        button2->Click += gcnew EventHandler(this, &MyForm::button2_Click);

        // Додавання елементів на форму
        Controls->Add(textBox1);
        Controls->Add(label1);
        Controls->Add(button1);
        Controls->Add(button2);
    }

private:
    // Обробник натискання кнопки 1
    void button1_Click(Object^ sender, EventArgs^ e) {
        // Виведення тексту з textBox1 в label1
        label1->Text = textBox1->Text;
    }

    // Обробник натискання кнопки 2
    void button2_Click(Object^ sender, EventArgs^ e) {
        // Закриття вікна
        this->Close();
    }

    TextBox^ textBox1;
    Label^ label1;
    Button^ button1;
    Button^ button2;
};

// Точка входу для додатка
[STAThread]
int main(array<System::String^>^ args) {
    // Запуск Windows Forms додатка
    Application::Run(gcnew MyForm());
    return 0;
}
