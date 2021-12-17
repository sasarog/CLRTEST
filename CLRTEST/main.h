#pragma once

namespace CLRTEST {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
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
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ step;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ po;
	private: System::Windows::Forms::Button^ button2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->step = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->po = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->step, this->po });
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(669, 246);
			this->dataGridView1->TabIndex = 0;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(919, 50);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &main::numericUpDown1_ValueChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(919, 169);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &main::button1_Click);
			// 
			// step
			// 
			this->step->HeaderText = L"Степень";
			this->step->MinimumWidth = 6;
			this->step->Name = L"step";
			this->step->Width = 125;
			// 
			// po
			// 
			this->po->HeaderText = L"Число";
			this->po->MinimumWidth = 6;
			this->po->Name = L"po";
			this->po->Width = 125;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(919, 199);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &main::button2_Click);
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1136, 404);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"main";
			this->Text = L"main";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int strok, stolb;
		//Узнаём количество столбцов
		stolb = Convert::ToInt32(numericUpDown1->Value);
		//узнаём количество строк
		strok = dataGridView1->RowCount - 1;
		//двухмерный динамический массив
		int** mas = new int*[strok];
		//заполнение массива
		for (int i = 0; i < strok; i++)
		{
			//создаём строку массва
			mas[i] = new int[stolb];
			for (int j = 0; j < stolb; j++)
			{
				//заполняем один элемент массива под номером [i][j]
				mas[i][j] = Convert::ToInt32( dataGridView1->Rows[i]->Cells[j]->Value);
			}
		}
		//выводим массив в консоль
		for (int i = 0; i < strok; i++)
		{			
			for (int j = 0; j < stolb; j++)
			{
				Console::Write(mas[i][j] + " ");
			}
			Console::WriteLine();
		}
		//Обрабатываем массив
		for (int i = 0; i < strok; i++)
		{
			for (int j = 0; j < stolb; j++)
			{
				mas[i][j] /= 2;
			}
		}
		//записываем массив обратно в dataGridView1
		for (int i = 0; i < strok; i++)
		{
			for (int j = 0; j < stolb; j++)
			{
				dataGridView1->Rows[i]->Cells[j]->Value =
					mas[i][j];
			}
		}

	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Columns->Clear();
		int kol = Convert::ToInt32(numericUpDown1->Value);
		for (int i = 0; i < kol; i++)
		{
			dataGridView1->Columns->Add(i.ToString(), (i + 1).ToString());
		}
		int chislo = 15;
		for (int i = 0; i < chislo; i++)
		{
			dataGridView1->Rows->Add(Math::Pow(2, i).ToString(),i.ToString());
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Clear();
		int chislo = Convert::ToInt16( numericUpDown1->Value);
		for (int i = 1; i <= chislo; i++)
		{
			dataGridView1->Rows->Add( i.ToString(),Math::Pow(2, i).ToString());
		}
	}
};
}
