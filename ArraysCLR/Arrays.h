#pragma once

namespace ArraysCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Arrays
	/// </summary>
	public ref class Arrays : public System::Windows::Forms::Form
	{
	public:
		Arrays(void)
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
		~Arrays()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dgvTabl;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numUpDownStolb;


	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dgvTabl = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numUpDownStolb = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTabl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUpDownStolb))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(28, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Arrays::button1_Click);
			// 
			// dgvTabl
			// 
			this->dgvTabl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTabl->Location = System::Drawing::Point(12, 102);
			this->dgvTabl->Name = L"dgvTabl";
			this->dgvTabl->RowHeadersWidth = 51;
			this->dgvTabl->RowTemplate->Height = 24;
			this->dgvTabl->Size = System::Drawing::Size(1052, 263);
			this->dgvTabl->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(159, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Столбцы";
			// 
			// numUpDownStolb
			// 
			this->numUpDownStolb->Location = System::Drawing::Point(162, 47);
			this->numUpDownStolb->Name = L"numUpDownStolb";
			this->numUpDownStolb->Size = System::Drawing::Size(120, 22);
			this->numUpDownStolb->TabIndex = 5;
			this->numUpDownStolb->ValueChanged += gcnew System::EventHandler(this, &Arrays::numUpDownStolb_ValueChanged);
			// 
			// Arrays
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1092, 423);
			this->Controls->Add(this->numUpDownStolb);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dgvTabl);
			this->Controls->Add(this->button1);
			this->Name = L"Arrays";
			this->Text = L"Arrays";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTabl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUpDownStolb))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//количество строк
		int kolStrok = dgvTabl->RowCount - 1;
		//Количество столбцов
		int kolStolb = Convert::ToInt32(numUpDownStolb->Value);

		//создание массива
		int** mas = new int* [kolStrok];
		//Заполнение массива
		for (int i = 0; i < kolStrok; i++)
		{
			mas[i] = new int[kolStolb];
			for (int j = 0; j < kolStolb; j++)
			{
				mas[i][j] = Convert::ToInt32(dgvTabl->Rows[i]->Cells[j]->Value);
			}
		}
		//Обработка массива
		for (int i = 0; i < kolStrok; i++)
		{
			
			for (int j = 0; j < kolStolb; j++) {
				mas[i][j] /= 2;
			}
		}
		//Запиь массива на форму
		for (int i = 0; i < kolStrok; i++)
		{
			
			for (int j = 0; j < kolStolb; j++) {
				dgvTabl->Rows[i]->Cells[j]->Value = mas[i][j];
			}
		}
		dgvTabl->Columns->Remove("0");
	}

	private: System::Void numUpDownStolb_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		//Очистка всех столбцов
		dgvTabl->Columns->Clear();
		//узнаём количество столбцов
		int kolStolb = Convert::ToInt32(numUpDownStolb->Value);
		//добавляем столбцы
		for (int i = 0; i < kolStolb; i++)
		{
			dgvTabl->Columns->Add(i.ToString(), (i + 1).ToString());
		}
	}
	};
}
