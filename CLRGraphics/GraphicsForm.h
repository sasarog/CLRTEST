#pragma once
#include "Car.h"
namespace CLRGraphics {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Сводка для GraphicsForm
	/// </summary>
	public ref class GraphicsForm : public System::Windows::Forms::Form
	{
	public:
		GraphicsForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~GraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ picBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->picBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// picBox1
			// 
			this->picBox1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->picBox1->Location = System::Drawing::Point(121, 62);
			this->picBox1->Name = L"picBox1";
			this->picBox1->Size = System::Drawing::Size(1460, 746);
			this->picBox1->TabIndex = 0;
			this->picBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(45, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 22);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Рисование Домика";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GraphicsForm::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(260, 13);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(422, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(197, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Рисование Функции";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GraphicsForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(649, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(239, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Вывести картинку";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GraphicsForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(933, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(159, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Крутить колесо";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &GraphicsForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1119, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Т118";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &GraphicsForm::button5_Click);
			// 
			// GraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1593, 820);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->picBox1);
			this->Name = L"GraphicsForm";
			this->Text = L"GraphicsForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void drawdom(int mashtab) {
			//picBox1->BackColor
			//object for painting
			Graphics^ g = picBox1->CreateGraphics();
			//Clear Window
			g->Clear(Color::DarkCyan);
			//перо
			Pen^ pen = gcnew Pen(Color::Red);
			pen->Width = 3.0;

			//Points for house
			Point A(2 * mashtab, 6 * mashtab);
			Point B(10 * mashtab, 1 * mashtab);
			Point C(18 * mashtab, 6 * mashtab);
			Point D(10 * mashtab, 2 * mashtab);
			Point E(10 * mashtab, 5 * mashtab);
			Point F(9 * mashtab, 3 * mashtab);
			Point G(11 * mashtab, 3 * mashtab);
			Point H(3 * mashtab, 17 * mashtab);
			Point I(9 * mashtab, 17 * mashtab);
			Point J(12 * mashtab, 9 * mashtab);
			Point K(17 * mashtab, 17 * mashtab);
			Point P(9 * mashtab, 8 * mashtab);

			//Roof
			g->DrawLine(pen, A, B);
			g->DrawLine(pen, B, C);
			g->DrawLine(pen, C, A);
			//KREST!
			g->DrawLine(pen, D, E);
			g->DrawLine(pen, F, G);
			//Walls
			g->DrawLine(pen, A, H);
			g->DrawLine(pen, H, K);
			g->DrawLine(pen, K, C);
			//Door
			g->DrawRectangle(pen, 9 * mashtab, 8 * mashtab, 3 * mashtab, 9 * mashtab);
		}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < numericUpDown1->Value; i++) {
			Thread::Sleep(100);
			drawdom(i);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = picBox1->CreateGraphics();
		g->Clear(Color::DarkTurquoise);
		double xkon = 10;
		Point a(0, 0);
		Pen^ pen = gcnew Pen(Color::Red);
		//pen->Color = Color::HotPink;
		//pen->Width = 2;
		for (double x = -1; x <= xkon; x += 0.01)
		{
			double y = Math::Sin(x);
			Point b(Convert::ToInt32(x * 100), Convert::ToInt32(y * 100) + 250);
			g->DrawLine(pen, a, b);
			a = b;
		}
	}

		   Point linia(Graphics^ g, Pen^ pen, Point nacalo, int x, int y) {
			   int mashtab = Convert::ToInt16(numericUpDown1->Value);
			   Point konec(nacalo.X + x*mashtab, nacalo.Y + y*mashtab);
			   g->DrawLine(pen, nacalo, konec);
			   return konec;
		   }
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = picBox1->CreateGraphics();
		g->Clear(Color::LightSalmon);
		//перо
		Pen^ pen = gcnew Pen(Color::Red);
		pen->Width = 3.0;
		
		Point p(9* Convert::ToInt16(numericUpDown1->Value), 
			5* Convert::ToInt16(numericUpDown1->Value));

		p = linia(g, pen, p, 1, 1);
		p = linia(g, pen, p, -2, -2);
		p = linia(g, pen, p, 2, 0);
		p = linia(g, pen, p, 2, 2);
		p = linia(g, pen, p, -1, 0);
		p = linia(g, pen, p, 0, -1);
		p = linia(g, pen, p, -1, -1);
		p = linia(g, pen, p, 1, 0);
		p = linia(g, pen, p, 1, 1);
		p = linia(g, pen, p, 0, -2);
		p = linia(g, pen, p, -1, -1);
		p = linia(g, pen, p, 1, -1);
		p = linia(g, pen, p, -1, 0);
		p = linia(g, pen, p, 0, -1);
		p = linia(g, pen, p, -2, 0);
		p = linia(g, pen, p, 0, 2);
		p = linia(g, pen, p, 1, 1);
		p = linia(g, pen, p, -4, 0);
		p = linia(g, pen, p, 1, 1);
		p = linia(g, pen, p, 1, 1);
		p = linia(g, pen, p, 0, 1);
		p = linia(g, pen, p, 1, 1);
		p = linia(g, pen, p, 0, -2);
		p = linia(g, pen, p, 2, 0);
		p = linia(g, pen, p, -1, 1);
		p = linia(g, pen, p, 0, -1);
		p = linia(g, pen, p, -1, 1);
		
		
		


	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Graphics^ g = picBox1->CreateGraphics();
		g->Clear(Color::LightSalmon);
		wheel w(g,Color::Black, 6, 100,Point(500,500));
		//перо
		Pen^ pen = gcnew Pen(Color::Red);
		pen->Width = 3.0;
		for (int i = 0; i < 100; i++) {
			g->Clear(Color::LightSalmon);
			w.update(0.15);
			Thread::Sleep(41);
		}

	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ g = picBox1->CreateGraphics();
	int mashtab = Convert::ToInt16(numericUpDown1->Value);
	g->Clear(Color::Lavender);
	Pen^ pen = gcnew Pen(Color::Fuchsia);
	Point A(2*mashtab, 5 * mashtab);
	Point B(2 * mashtab,11 * mashtab);
	Point C(4 * mashtab,11 * mashtab);
	Point D(4 * mashtab,8 * mashtab);
	Point E(10 * mashtab,8 * mashtab);
	Point F(10 * mashtab,11 * mashtab);
	Point G(22 * mashtab,11 * mashtab);
	Point H(22 * mashtab,10 * mashtab);
	Point I(24 * mashtab,8 * mashtab);
	Point J(27 * mashtab,8 * mashtab);
	Point K(30 * mashtab,11 * mashtab);
	Point L(34 * mashtab,11 * mashtab);
	Point M(34 * mashtab,8 * mashtab);
	Point N(32 * mashtab,6 * mashtab);
	Point O(30 * mashtab,6 * mashtab);
	Point P(27 * mashtab,3 * mashtab);
	Point Q(10 * mashtab,3 * mashtab);
	Point R(7 * mashtab,6 * mashtab);
	Point S(3 * mashtab,6 * mashtab);
	Point kol(7 ,11 );
	Point kol2(26 ,11 );
	


	g->DrawLine(pen, A, B);
	g->DrawLine(pen, B, C);
	g->DrawLine(pen, C, D);
	g->DrawLine(pen, D, E);
	g->DrawLine(pen, E, F);
	g->DrawLine(pen, F, G);
	g->DrawLine(pen, G, H);
	g->DrawLine(pen, H, I);
	g->DrawLine(pen, I, J);
	g->DrawLine(pen, J, K);
	g->DrawLine(pen, K, L);
	g->DrawLine(pen, L, M);
	g->DrawLine(pen, M, N);
	g->DrawLine(pen, N, O);
	g->DrawLine(pen, O, P);
	g->DrawLine(pen, P, Q);
	g->DrawLine(pen, Q, R);
	g->DrawLine(pen, R, S);
	g->DrawLine(pen, S, A);

	g->DrawArc(pen, (kol.X - 2) * mashtab, (kol.Y - 2) * mashtab,
		4 * mashtab, 4 * mashtab, 0, 360);
	g->DrawArc(pen, (kol2.X - 2) * mashtab, (kol2.Y - 2) * mashtab,
		4 * mashtab, 4 * mashtab, 0, 360);
	
}
};
}
