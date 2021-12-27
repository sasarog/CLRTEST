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

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->picBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// picBox1
			// 
			this->picBox1->Location = System::Drawing::Point(121, 62);
			this->picBox1->Name = L"picBox1";
			this->picBox1->Size = System::Drawing::Size(716, 353);
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
			// GraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1024, 495);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->picBox1);
			this->Name = L"GraphicsForm";
			this->Text = L"GraphicsForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = picBox1->CreateGraphics();
		Pen^ pen = gcnew Pen(Color::Red);
		g->DrawLine(pen,100, 0, 100, 100);
		Thread::Sleep(500);
		g->DrawLine(pen, 100, 100, 0, 100);
		Thread::Sleep(500);
		g->DrawLine(pen, 100, 100, 200, 100);
		Thread::Sleep(500);
		g->DrawLine(pen, 100, 100, 100, 500);
		Thread::Sleep(500);

	}
	};
}
