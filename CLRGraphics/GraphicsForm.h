#pragma once

namespace CLRGraphics {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// —водка дл€ GraphicsForm
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
		/// ќсвободить все используемые ресурсы.
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

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->picBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
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
			this->button1->Location = System::Drawing::Point(121, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
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
			// GraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1593, 820);
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
	};
}
