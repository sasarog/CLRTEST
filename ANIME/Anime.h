#pragma once

namespace ANIME {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Anime
	/// </summary>
	public ref class Anime : public System::Windows::Forms::Form
	{
	public:
		Graphics^ gr;       //��������� ������ - �������, �� ������� ����� ��������
		Pen^ p;             //��������� ������ - ��������, ������� ����� �������� ������
		SolidBrush^ fon = gcnew SolidBrush(Color::HotPink);    //��������� ������ - �������, ��� ������� �������������� ����
		SolidBrush^ fig = gcnew SolidBrush(Color::Black);    //� ������������ �������� ������


		int rad = 49;          // ���������� ��� �������� ������� �������� ������
		Random rand;      // ������, ��� ��������� ��������� �����

		Anime(void)
		{
			InitializeComponent();
			p = gcnew Pen(Color::Red);
			gr = pictureBox1->CreateGraphics();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Anime()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1077, 579);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 599);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 49);
			this->button1->TabIndex = 1;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Anime::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Anime::timer1_Tick);
			// 
			// Anime
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1121, 660);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Anime";
			this->Text = L"Anime";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		void DrawCircle(int x, int y)
		{
			int xc, yc;
			xc = x - rad;
			yc = y - rad;
			gr->FillEllipse(fig, xc, yc, rad, rad);

			gr->DrawEllipse(p, xc, yc, rad, rad);

		}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		


		// ����� ����� ��������� ������� �������� ���������� ������� ������
		// � ������ �� ��� ������ ��������� ���� �������
		int x, y;

		for (int i = 0; i < 15; i++)
		{
			x = rand.Next(pictureBox1->Width);
			y = rand.Next(pictureBox1->Height);
			DrawCircle(x, y);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//������� ����� ������� ������� ��������� ������ ����
		gr->FillRectangle(fon, 0, 0, pictureBox1->Width, pictureBox1->Height);
		timer1->Enabled = true;
	}
};
}