#pragma once

namespace GraphChart {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для GraphChart
	/// </summary>
	public ref class GraphChart : public System::Windows::Forms::Form
	{
	public:
		GraphChart(void)
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
		~GraphChart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Data::DataTable^ dataTable1;
	private: System::Data::DataColumn^ dataColumn1;
	private: System::Data::DataColumn^ dataColumn2;
	private: System::Data::DataTable^ Таблица ;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->Таблица = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Таблица))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(469, 39);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(652, 374);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &GraphChart::chart1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(25, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(438, 391);
			this->dataGridView1->TabIndex = 1;
			// 
			// dataColumn1
			// 
			this->dataColumn1->Caption = L"Январь";
			this->dataColumn1->ColumnName = L"1";
			// 
			// dataColumn2
			// 
			this->dataColumn2->Caption = L"Февраль";
			this->dataColumn2->ColumnName = L"2";
			// 
			// GraphChart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1180, 581);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->chart1);
			this->Name = L"GraphChart";
			this->Text = L"GraphChart";
			this->Load += gcnew System::EventHandler(this, &GraphChart::GraphChart_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Таблица))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Boolean ПереключательДиаграммы;
	private: System::Void GraphChart_Load(System::Object^ sender, System::EventArgs^ e) {
		ПереключательДиаграммы = false;
		this->Text = "Щелкните на графике";
		
		// В этой таблице заказываем две колонки "Месяц" и "Объем продаж":
		Таблица->Columns->Add("Месяц", String::typeid);
		// Значения во второй колонке назначаем типа long:
		Таблица->Columns->Add("Объем продаж", long::typeid);
		// Заполняем первую строку (ряд) в таблице:
		DataRow^ Ряд = Таблица->NewRow();
		Ряд["Месяц"] = "Май"; Ряд["Объем продаж"] = 15;
		Таблица->Rows->Add(Ряд);
		// Добавляем вторую строку в таблице:
		Ряд = Таблица->NewRow();
		Ряд["Месяц"] = "Июнь"; Ряд["Объем продаж"] = 35;
		Таблица->Rows->Add(Ряд);
		// Добавляем третью строку:

		Ряд = Таблица->NewRow();
		Ряд["Месяц"] = "Июль"; Ряд["Объем продаж"] = 65;
		Таблица->Rows->Add(Ряд);
		// Добавляем четвертую строку:
		Ряд = Таблица->NewRow();
		Ряд["Месяц"] = "Авг"; Ряд["Объем продаж"] = 85;
		Таблица->Rows->Add(Ряд);
		// Добавляем пятую строку:
		Ряд = Таблица->NewRow();
		Ряд["Месяц"] = "Сент"; Ряд["Объем продаж"] = 71;
		Таблица->Rows->Add(Ряд);
		// Составленную таблицу указываем в качестве источника данных:
		chart1->DataSource = Таблица;
		// На одном графике можно изобразить несколько зависимостей.
		// Например, первая зависимость - объемы продаж по указанным
		// месяцам в 2009 году, и вторая зависимость - продажи по тем же месяцам в 2010 году.
		// В данном графике мы покажем только одну зависимость, данные
		// для отображения этой зависимости назовем "Series1"
		// По горизонтальной оси откладываем названия месяцев:
		chart1->Series["Series1"]->XValueMember = "Месяц";
		// А по вертикальной оси откладываем объемы продаж:
		chart1->Series["Series1"]->YValueMembers = "Объем продаж";
		// Название графика (диаграммы):
		chart1->Titles->Add("Объемы продаж по месяцам");
		// Задаем тип диаграммы - столбиковая гистограмма:
		chart1->Series["Series1"]->ChartType = System::Windows::Forms::
			DataVisualization::Charting::SeriesChartType::Spline;
		//Задаём цвет линий диаграммы
		chart1->Series["Series1"]->Color = Color::Aqua;
		// Легенду на графике не отображаем:
		chart1->Series["Series1"]->IsVisibleInLegend = false;
		// Привязка графика к источнику данных:
		chart1->DataBind();
		// Для сетки данных указываем источник данных
		dataGridView1->DataSource = Таблица;
		
	}


	
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	ПереключательДиаграммы = !ПереключательДиаграммы;
	// Изображение столбиков гистограммы в виде цилиндра:
	if (ПереключательДиаграммы == true)
		chart1->Series["Series1"]->ChartType = DataVisualization::Charting::SeriesChartType::Line;
	else
		chart1->Series["Series1"]->ChartType = DataVisualization::Charting::SeriesChartType::Radar;
}
};
}
