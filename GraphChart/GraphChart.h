#pragma once

namespace GraphChart {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� GraphChart
	/// </summary>
	public ref class GraphChart : public System::Windows::Forms::Form
	{
	public:
		GraphChart(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Data::DataTable^ ������� ;




	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->������� = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->�������))->BeginInit();
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
			this->dataColumn1->Caption = L"������";
			this->dataColumn1->ColumnName = L"1";
			// 
			// dataColumn2
			// 
			this->dataColumn2->Caption = L"�������";
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->�������))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Boolean ����������������������;
	private: System::Void GraphChart_Load(System::Object^ sender, System::EventArgs^ e) {
		���������������������� = false;
		this->Text = "�������� �� �������";
		
		// � ���� ������� ���������� ��� ������� "�����" � "����� ������":
		�������->Columns->Add("�����", String::typeid);
		// �������� �� ������ ������� ��������� ���� long:
		�������->Columns->Add("����� ������", long::typeid);
		// ��������� ������ ������ (���) � �������:
		DataRow^ ��� = �������->NewRow();
		���["�����"] = "���"; ���["����� ������"] = 15;
		�������->Rows->Add(���);
		// ��������� ������ ������ � �������:
		��� = �������->NewRow();
		���["�����"] = "����"; ���["����� ������"] = 35;
		�������->Rows->Add(���);
		// ��������� ������ ������:

		��� = �������->NewRow();
		���["�����"] = "����"; ���["����� ������"] = 65;
		�������->Rows->Add(���);
		// ��������� ��������� ������:
		��� = �������->NewRow();
		���["�����"] = "���"; ���["����� ������"] = 85;
		�������->Rows->Add(���);
		// ��������� ����� ������:
		��� = �������->NewRow();
		���["�����"] = "����"; ���["����� ������"] = 71;
		�������->Rows->Add(���);
		// ������������ ������� ��������� � �������� ��������� ������:
		chart1->DataSource = �������;
		// �� ����� ������� ����� ���������� ��������� ������������.
		// ��������, ������ ����������� - ������ ������ �� ���������
		// ������� � 2009 ����, � ������ ����������� - ������� �� ��� �� ������� � 2010 ����.
		// � ������ ������� �� ������� ������ ���� �����������, ������
		// ��� ����������� ���� ����������� ������� "Series1"
		// �� �������������� ��� ����������� �������� �������:
		chart1->Series["Series1"]->XValueMember = "�����";
		// � �� ������������ ��� ����������� ������ ������:
		chart1->Series["Series1"]->YValueMembers = "����� ������";
		// �������� ������� (���������):
		chart1->Titles->Add("������ ������ �� �������");
		// ������ ��� ��������� - ����������� �����������:
		chart1->Series["Series1"]->ChartType = System::Windows::Forms::
			DataVisualization::Charting::SeriesChartType::Spline;
		//����� ���� ����� ���������
		chart1->Series["Series1"]->Color = Color::Aqua;
		// ������� �� ������� �� ����������:
		chart1->Series["Series1"]->IsVisibleInLegend = false;
		// �������� ������� � ��������� ������:
		chart1->DataBind();
		// ��� ����� ������ ��������� �������� ������
		dataGridView1->DataSource = �������;
		
	}


	
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	���������������������� = !����������������������;
	// ����������� ��������� ����������� � ���� ��������:
	if (���������������������� == true)
		chart1->Series["Series1"]->ChartType = DataVisualization::Charting::SeriesChartType::Line;
	else
		chart1->Series["Series1"]->ChartType = DataVisualization::Charting::SeriesChartType::Radar;
}
};
}
