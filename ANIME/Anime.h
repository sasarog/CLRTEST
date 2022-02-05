#pragma once

namespace ANIME {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// —водка дл€ Anime
	/// </summary>
	public ref class Anime : public System::Windows::Forms::Form
	{
	public:
		

		Point^ objectPosition = gcnew Point(100, 100);
		Graphics^ gr;       //объ€вл€ем объект - графику, на которой будем рисовать
		Pen^ p;             //объ€вл€ем объект - карандаш, которым будем рисовать контур
		SolidBrush^ fon = gcnew SolidBrush(Color::HotPink);    //объ€вл€ем объект - заливки, дл€ заливки соответственно фона
		SolidBrush^ fig = gcnew SolidBrush(Color::Black);    //и внутренности рисуемой фигуры
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::Button^ button4;
	public:
	public:
		int rad = 49;          // переменна€ дл€ хранени€ радиуса рисуемых кругов
		Random rand;      // объект, дл€ получени€ случайных чисел

		Anime(void)
		{
			InitializeComponent();
			p = gcnew Pen(Color::Red);
			gr = pictureBox1->CreateGraphics();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
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
	private:System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
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
			this->button1->Text = L" ружочки";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Anime::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Anime::timer1_Tick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(240, 599);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(179, 49);
			this->button2->TabIndex = 2;
			this->button2->Text = L"” самура€ нет цели, только путь";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Anime::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(426, 599);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(218, 49);
			this->button3->TabIndex = 3;
			this->button3->Text = L"ƒвигающийс€ объект";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Anime::button3_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 10;
			this->timer2->Tick += gcnew System::EventHandler(this, &Anime::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 600;
			this->timer3->Tick += gcnew System::EventHandler(this, &Anime::timer3_Tick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(650, 599);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(218, 49);
			this->button4->TabIndex = 4;
			this->button4->Text = L"—ложные фигуры";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Anime::button4_Click);
			// 
			// Anime
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1121, 660);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
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

		gr->Clear(Color::Lavender);

		// затем оп€ть случайным образом выбираем координаты центров кругов
		// и рисуем их при помощи описанной нами функции
		int x, y;

		for (int i = 0; i < 15; i++)
		{
			x = rand.Next(pictureBox1->Width);
			y = rand.Next(pictureBox1->Height);
			DrawCircle(x, y);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		//включаем таймер
		timer1->Enabled = true;
	}
	private: Void AddText(FileStream^ fs, String^ value)
	{
		array<unsigned char>^ info =
			(gcnew  System::Text::UTF8Encoding(true))->GetBytes(value);
		fs->Write(info, 0, info->Length);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog ofd;
		if (ofd.ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
			return;
		}
		MessageBox::Show(ofd.FileName);
		FileStream^ fStream;





		//Ёто дл€ записи в файл
		/*System::IO::FileStream^ fStream;
		fStream = File::OpenWrite(ofd.FileName);
		AddText(fStream, "ksfjkjdsf");
		fStream->Close();*/


	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = false;
		timer2->Enabled = true;
	}
	private: System::Void Anime_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		gr->Clear(Color::MediumBlue);
		gr->FillEllipse(fig, objectPosition->X, objectPosition->Y, rad, rad);
		gr->DrawEllipse(p, objectPosition->X, objectPosition->Y, rad, rad);
		objectPosition->X--;
		objectPosition->Y--;
		rad++;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		timer3->Enabled = true;
	}
	private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
		gr->Clear(Color::Lavender);

		// затем оп€ть случайным образом выбираем координаты центров кругов
		// и рисуем их при помощи описанной нами функции
		int x, y;

		//points = gcnew (System::Drawing::Point );
		for (int i = 0; i < 15; i++)
		{
			x = rand.Next(pictureBox1->Width);
			y = rand.Next(pictureBox1->Height);
			//массив дл€ рисовани€ объектов
			array<System::Drawing::Point>^ points = gcnew array<Point>(3);
			for (int i = 0; i < 3; i++) {
				points[i].X = x + rand.Next(50);
				points[i].Y = y + rand.Next(50);
			}
			
			gr->FillPolygon(fig, points);
		}

	}
	};
}
