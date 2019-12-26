#pragma once
^ - NET ссылка на экземпляр класса
ref - ссылочный класс,
Microsoft Access Database - используемая база данных
gcnew - это аналог указателя, который выделяет для управляемого типа память, которую после не нужно удалять


namespace Z {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
    //бИБЛИОТЕКА для обработки базы данных

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^  tabPage2;
	protected:



	private: System::Windows::Forms::TabControl^  tabControl1;
             //^Указатель для net объектов
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Title;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Author;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  YearPublishing;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Телефон;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel4;


	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::DataGridView^  dataGridView3;


	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Телефон = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Title = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Author = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->YearPublishing = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel4->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->panel1);
			this->tabPage2->Controls->Add(this->panel4);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(779, 298);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Читатели";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Enter += gcnew System::EventHandler(this, &MyForm::tabPage2_Enter);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->Телефон
			});
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->Location = System::Drawing::Point(3, 3);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView2->Size = System::Drawing::Size(584, 235);
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			this->dataGridView2->CellEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellEnter);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Номер читательского билета";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Фамилия";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Имя";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Отчество";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// Телефон
			// 
			this->Телефон->HeaderText = L"Телефон";
			this->Телефон->Name = L"Телефон";
			this->Телефон->ReadOnly = true;
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(3, 238);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(584, 57);
			this->panel1->TabIndex = 5;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->textBox7);
			this->panel4->Controls->Add(this->button6);
			this->panel4->Controls->Add(this->button7);
			this->panel4->Controls->Add(this->button8);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->textBox4);
			this->panel4->Controls->Add(this->textBox5);
			this->panel4->Controls->Add(this->textBox6);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel4->Location = System::Drawing::Point(587, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(189, 292);
			this->panel4->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 89);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Отчество";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 128);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Телефон";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(9, 144);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(175, 20);
			this->textBox7->TabIndex = 4;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(109, 170);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Добавить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(109, 228);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Удалить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(109, 199);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 6;
			this->button8->Text = L"Обновить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Фамилия";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 50);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Имя";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(9, 27);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(175, 20);
			this->textBox4->TabIndex = 1;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(9, 66);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(175, 20);
			this->textBox5->TabIndex = 2;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(9, 105);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(175, 20);
			this->textBox6->TabIndex = 3;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(787, 324);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->panel3);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(779, 298);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Книги";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Enter += gcnew System::EventHandler(this, &MyForm::tabPage1_Enter);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ID, this->Title,
					this->Author, this->YearPublishing
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->Size = System::Drawing::Size(584, 235);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEnter);
			// 
			// ID
			// 
			this->ID->HeaderText = L"Код книги";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			// 
			// Title
			// 
			this->Title->HeaderText = L"Название";
			this->Title->Name = L"Title";
			this->Title->ReadOnly = true;
			// 
			// Author
			// 
			this->Author->HeaderText = L"Автор";
			this->Author->Name = L"Author";
			this->Author->ReadOnly = true;
			// 
			// YearPublishing
			// 
			this->YearPublishing->HeaderText = L"Год издания";
			this->YearPublishing->Name = L"YearPublishing";
			this->YearPublishing->ReadOnly = true;
			// 
			// panel3
			// 
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(3, 238);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(584, 57);
			this->panel3->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->checkBox2);
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(587, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(189, 292);
			this->panel2->TabIndex = 1;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(9, 189);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Найти";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(9, 164);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(75, 17);
			this->checkBox2->TabIndex = 5;
			this->checkBox2->Text = L"по автору";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(9, 135);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(91, 17);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"по названию";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(109, 131);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Добавить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(109, 189);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Удалить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(109, 160);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Обновить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Год издания";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Автор";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Название книги";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(9, 105);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(175, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(9, 66);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(175, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(9, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 20);
			this->textBox1->TabIndex = 1;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Controls->Add(this->panel5);
			this->tabPage3->Controls->Add(this->panel6);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(779, 298);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Выдача";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Enter += gcnew System::EventHandler(this, &MyForm::tabPage3_Enter);
			// 
			// dataGridView3
            //отрисовка окна view3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->Column1, this->Column2
			});
			this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView3->Location = System::Drawing::Point(0, 0);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dataGridView3->RowsDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView3->Size = System::Drawing::Size(590, 241);
			this->dataGridView3->TabIndex = 0;
			this->dataGridView3->CellEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellEnter);
			// 
			// dataGridViewTextBoxColumn5
            // установка заголовочных полей далее
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Название книги";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Читатель";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn7
			// 
			dataGridViewCellStyle6->Format = L"D";
			dataGridViewCellStyle6->NullValue = nullptr;
			this->dataGridViewTextBoxColumn7->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridViewTextBoxColumn7->HeaderText = L"Дата выдачи";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn8
			// 
			dataGridViewCellStyle7->Format = L"d";
			dataGridViewCellStyle7->NullValue = nullptr;
			this->dataGridViewTextBoxColumn8->DefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridViewTextBoxColumn8->HeaderText = L"Дата возврата";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Код книги";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Visible = false;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Код читателя";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Visible = false;
			// 
			// panel5
			// 
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->Location = System::Drawing::Point(0, 241);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(590, 57);
			this->panel5->TabIndex = 5;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->dateTimePicker2);
			this->panel6->Controls->Add(this->dateTimePicker1);
			this->panel6->Controls->Add(this->comboBox2);
			this->panel6->Controls->Add(this->comboBox1);
			this->panel6->Controls->Add(this->label11);
			this->panel6->Controls->Add(this->button5);
			this->panel6->Controls->Add(this->checkBox3);
			this->panel6->Controls->Add(this->checkBox4);
			this->panel6->Controls->Add(this->button9);
			this->panel6->Controls->Add(this->button10);
			this->panel6->Controls->Add(this->button11);
			this->panel6->Controls->Add(this->label8);
			this->panel6->Controls->Add(this->label9);
			this->panel6->Controls->Add(this->label10);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel6->Location = System::Drawing::Point(590, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(189, 298);
			this->panel6->TabIndex = 4;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(11, 144);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(170, 20);
			this->dateTimePicker2->TabIndex = 4;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(11, 105);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(170, 20);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(11, 66);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(170, 21);
			this->comboBox2->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(11, 26);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(170, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(8, 128);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(83, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Дата возврата";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(9, 228);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Найти";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(9, 176);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(88, 17);
			this->checkBox3->TabIndex = 6;
			this->checkBox3->Text = L"по читателю";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(9, 205);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(91, 17);
			this->checkBox4->TabIndex = 5;
			this->checkBox4->Text = L"по названию";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(106, 170);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Добавить";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(106, 228);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 10;
			this->button10->Text = L"Удалить";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(106, 199);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 9;
			this->button11->Text = L"Обновить";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(8, 11);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 13);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Название книги";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 50);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 13);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Читатель";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(8, 89);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(73, 13);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Дата выдачи";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(787, 324);
			this->Controls->Add(this->tabControl1);
			this->MinimumSize = System::Drawing::Size(622, 363);
			this->Name = L"MyForm";
			this->Text = L"Библиотека";
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	String ^conn = gcnew String("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + Application::StartupPath + "/Data/Library.mdb");
	OleDbConnection ^oledb = gcnew OleDbConnection(conn);
	OleDbDataReader ^reader;
	OleDbCommand ^command = gcnew OleDbCommand();
	int SelectBookID = -1;
	int SelectReaderID = -1;
	int SelectDeliveruBookID = -1;
	int SelectDeliveruReaderID = -1;
	int* Books;
	int* Readers;

	void DrawTableBooks() {
		try
		{
			if (oledb) {				
				oledb->Open();
				
				command->Connection = oledb;
				command->CommandText = "Select ID, Title,  Author, YearPublishing From Books;";				
				reader = command->ExecuteReader();
				
				dataGridView1->Rows->Clear();
				
				while (reader->Read())
				{
					dataGridView1->Rows->Add(reader["ID"]->ToString(), reader["Title"]->ToString(),
						reader["Author"]->ToString(), reader["YearPublishing"]->ToString());
				}
				reader->Close();
			}
		}		
		catch (Exception ^ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			try
			{				
				oledb->Close();
			}
			catch (Exception ^ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}	

	void DrawTableReaders() {
		try
		{
			if (oledb) {
				oledb->Open();

				command->Connection = oledb;
				command->CommandText = "Select Number, Surname,  Name_, Patronymic, Phone From Readers;";
				reader = command->ExecuteReader();

				dataGridView2->Rows->Clear();

				while (reader->Read())
				{
					dataGridView2->Rows->Add(reader["Number"]->ToString(), reader["Surname"]->ToString(),
						reader["Name_"]->ToString(), reader["Patronymic"]->ToString(), reader["Phone"]->ToString());
				}
				reader->Close();
			}
		}
		catch (Exception ^ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			try
			{
				oledb->Close();
			}
			catch (Exception ^ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}

	void DrawTableDelivery() {
		try
		{
			if (oledb) {
				oledb->Open();

				command->Connection = oledb;				
				
				command->CommandText = "SELECT Delivery.Reader, Delivery.Book, Readers.Surname, Readers.Name_, Readers.Patronymic, Books.Title, Delivery.DateDelivery, Delivery.DateReturn FROM Readers INNER JOIN(Books INNER JOIN Delivery ON Books.ID = Delivery.Book) ON Readers.Number = Delivery.Reader;";
				reader = command->ExecuteReader();

				dataGridView3->Rows->Clear();

				int i = 0;
				while (reader->Read())
				{
					dataGridView3->Rows->Add(reader["Title"]->ToString(), reader["Surname"]->ToString() + " " + reader["Name_"]->ToString() + " " + reader["Patronymic"]->ToString(), String::Format("{0:d}", reader["DateDelivery"]), String::Format("{0:d}", reader["DateReturn"]), reader["Book"], reader["Reader"]);
				}
				reader->Close();

				command->CommandText = "SELECT Count(Number) AS C FROM Readers";
				reader = command->ExecuteReader();

				if (reader->Read()) {
					delete[] Readers;
					Readers = new int[Convert::ToInt32(reader["C"])];
					reader->Close();

					command->CommandText = "Select Number, Surname,  Name_, Patronymic, Phone From Readers;";
					reader = command->ExecuteReader();					

					comboBox2->Items->Clear();					

					i = 0;
					while (reader->Read())
					{
						comboBox2->Items->Add(reader["Surname"]->ToString() + " " + reader["Name_"]->ToString() + " " + reader["Patronymic"]->ToString());
						Readers[i++] = Convert::ToInt32(reader["Number"]);						
					}
				}
				reader->Close();

				command->CommandText = "SELECT Count(ID) AS C FROM Books";
				
				reader = command->ExecuteReader();

				if (reader->Read()) {
					delete[] Books;
					Books = new int[Convert::ToInt32(reader["C"])];
					reader->Close();

					command->CommandText = "Select ID, Title,  Author, YearPublishing From Books;";
					reader = command->ExecuteReader();

					comboBox1->Items->Clear();

					i = 0;
					while (reader->Read())
					{
						comboBox1->Items->Add(reader["Title"]->ToString());
						Books[i++] = Convert::ToInt32(reader["ID"]);
					}
				}
				reader->Close();				
			}
		}
		catch (Exception ^ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			try
			{
				oledb->Close();
			}
			catch (Exception ^ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (oledb) {
				if (!String::IsNullOrEmpty(textBox1->Text)) {
					if (!String::IsNullOrEmpty(textBox2->Text)) {
						if (!String::IsNullOrEmpty(textBox3->Text) && Convert::ToInt32(textBox3->Text) > 0) {
							oledb->Open();
							command->Connection = oledb;
							command->CommandText = "select max([ID]) from Books";
							int newId = 0;
							if (DBNull::Value != command->ExecuteScalar()) {
								newId = Convert::ToInt32(command->ExecuteScalar());
							}
							command->CommandText = "insert into Books values (" + (newId + 1) + ", '" + textBox1->Text + "','" + textBox2->Text + "'," + textBox3->Text + ")";
							command->ExecuteNonQuery();
						}						
						else {
							MessageBox::Show("Введите корректное значение в поле 'Год'.");
							textBox2->Focus();
						}
					}
					else {
						MessageBox::Show("Поле 'Автор' обезательное. Заполните это поле!");
						textBox2->Focus();
					}
				}
				else {
					MessageBox::Show("Поле 'Название книги' обезательное. Заполните это поле!");
					textBox1->Focus();
				}
			}
		}		
		catch (Exception ^ex) {
			MessageBox::Show(ex->Message);
		}
		finally{
			try {		
			 oledb->Close();
			 DrawTableBooks();
			}
			catch (Exception ^ex) {
				MessageBox::Show(ex->Message);
			}
		}
	}

private: System::Void dataGridView1_CellEnter(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0) {		
		SelectBookID = Convert::ToInt32(dataGridView1->CurrentRow->Cells[0]->Value->ToString());
		textBox1->Text = dataGridView1->CurrentRow->Cells[1]->Value->ToString();
		textBox2->Text = dataGridView1->CurrentRow->Cells[2]->Value->ToString();
		textBox3->Text = dataGridView1->CurrentRow->Cells[3]->Value->ToString();
	}
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		if (oledb && SelectBookID >= 0) {
			if (!String::IsNullOrEmpty(textBox1->Text)) {
				if (!String::IsNullOrEmpty(textBox2->Text)) {					
					if (!String::IsNullOrEmpty(textBox3->Text) && Convert::ToInt32(textBox3->Text) > 0) {
						oledb->Open();
						command->Connection = oledb;
						command->CommandText = "update Books set Title = '" + textBox1->Text + "', Author = '" + textBox2->Text + "', YearPublishing = " + textBox3->Text + " where ID = " + SelectBookID.ToString();
						command->ExecuteNonQuery();
					}
					else {
						MessageBox::Show("Введите корректное значение в поле 'Год'.");
						textBox2->Focus();
					}
				}
				else {
					MessageBox::Show("Поле 'Автор' обезательное. Заполните это поле!");
					textBox2->Focus();
				}
			}
			else {				
				MessageBox::Show("Поле 'Название книги' обезательное. Заполните это поле!");		      		        		   
				textBox1->Focus();
			}
		}
	}
	catch (Exception ^ex) {
		MessageBox::Show(ex->Message);
	}
	finally{
		try {
		 oledb->Close();
		 DrawTableBooks();
		}
		catch (Exception ^ex) {
			MessageBox::Show(ex->Message);
		}
	}
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		if (oledb && SelectBookID >= 0) {
			oledb->Open();
			command->Connection = oledb;
			command->CommandText = "delete from Books where ID = " + SelectBookID.ToString();
			command->ExecuteNonQuery();
		}
	}
	catch (Exception ^ex) {
		MessageBox::Show(ex->Message);
	}
	finally{
		try {
		 oledb->Close();
		 DrawTableBooks();
		}
		catch (Exception ^ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		if (oledb) {
			oledb->Open();

			command->Connection = oledb;						

			if (checkBox1->Checked && checkBox2->Checked) {
				command->CommandText = "Select ID, Title,  Author, YearPublishing From Books Where (Title Like '%" + textBox1->Text + "%') and (Author Like '%" + textBox2->Text + "%')";
			}
			else
				if (checkBox1->Checked) {
					command->CommandText = "Select ID, Title,  Author, YearPublishing From Books Where (Title Like '%" + textBox1->Text + "%')";
				}
				else
					if (checkBox2->Checked) {
						command->CommandText = "Select ID, Title,  Author, YearPublishing From Books Where (Author Like '%" + textBox2->Text + "%')";
					}
					else {
						command->CommandText = "Select ID, Title,  Author, YearPublishing From Books";
					}
			
			reader = command->ExecuteReader();

			dataGridView1->Rows->Clear();

			while (reader->Read())
			{
				dataGridView1->Rows->Add(reader["ID"]->ToString(), reader["Title"]->ToString(),
					reader["Author"]->ToString(), reader["YearPublishing"]->ToString());
			}
		}
	}
	catch (Exception ^ex)
	{
		MessageBox::Show(ex->Message);
	}
	finally
	{
		try
		{
			oledb->Close();
		}
		catch (Exception ^ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		if (oledb) {
			if (!String::IsNullOrEmpty(textBox4->Text)) {
				if (!String::IsNullOrEmpty(textBox5->Text)) {
					if (!String::IsNullOrEmpty(textBox6->Text)) {
						oledb->Open();
						command->Connection = oledb;
						command->CommandText = "select max([Number]) from Readers";
						int newId = 0;
						if (DBNull::Value != command->ExecuteScalar()) {
							newId = Convert::ToInt32(command->ExecuteScalar());
						}
						command->CommandText = "insert into Readers values (" + (newId + 1) + ", '" + textBox4->Text + "','" + textBox5->Text + "','" + textBox6->Text + "','" + textBox7->Text + "')";
						command->ExecuteNonQuery();
					}
					else {
						MessageBox::Show("Поле 'Отчество' обезательное. Заполните это поле!");
						textBox2->Focus();
					}
				}
				else {
					MessageBox::Show("Поле 'Имя' обезательное. Заполните это поле!");
					textBox2->Focus();
				}
			}
			else {
				MessageBox::Show("Поле 'Фамилия' обезательное. Заполните это поле!");
				textBox1->Focus();
			}
		}
	}
	catch (Exception ^ex) {
		MessageBox::Show(ex->Message);
	}
	finally{
		try {
		 oledb->Close();
		 DrawTableReaders();
		}
		catch (Exception ^ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		if (oledb && SelectReaderID >= 0) {
			if (!String::IsNullOrEmpty(textBox4->Text)) {
				if (!String::IsNullOrEmpty(textBox5->Text)) {
					if (!String::IsNullOrEmpty(textBox6->Text)) {
						oledb->Open();
						command->Connection = oledb;						
						command->CommandText = "update Readers set Surname = '" + textBox4->Text + "', Name_ = '" + textBox5->Text + "', Patronymic = '" + textBox6->Text + "', Phone = '" + textBox7->Text + "' where Number = " + SelectReaderID.ToString();
						command->ExecuteNonQuery();
					}
					else {
						MessageBox::Show("Поле 'Отчество' обезательное. Заполните это поле!");
						textBox2->Focus();
					}
				}
				else {
					MessageBox::Show("Поле 'Имя' обезательное. Заполните это поле!");
					textBox2->Focus();
				}
			}
			else {
				MessageBox::Show("Поле 'Фамилия' обезательное. Заполните это поле!");
				textBox1->Focus();
			}
		}
	}
	catch (Exception ^ex) {
		MessageBox::Show(ex->Message);
	}
	finally{
		try {
		 oledb->Close();
		 DrawTableReaders();
		}
		catch (Exception ^ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		if (oledb && SelectReaderID >= 0) {
			oledb->Open();
			command->Connection = oledb;
			command->CommandText = "delete from Readers where Number = " + SelectReaderID.ToString();
			command->ExecuteNonQuery();
		}
	}
	catch (Exception ^ex) {
		MessageBox::Show(ex->Message);
	}
	finally{
		try {
		 oledb->Close();
		 DrawTableReaders();
		}
		catch (Exception ^ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void dataGridView2_CellEnter(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0) {
		SelectReaderID = Convert::ToInt32(dataGridView2->CurrentRow->Cells[0]->Value->ToString());
		textBox4->Text = dataGridView2->CurrentRow->Cells[1]->Value->ToString();
		textBox5->Text = dataGridView2->CurrentRow->Cells[2]->Value->ToString();
		textBox6->Text = dataGridView2->CurrentRow->Cells[3]->Value->ToString();
		textBox7->Text = dataGridView2->CurrentRow->Cells[4]->Value->ToString();
	}
}
private: System::Void tabPage2_Enter(System::Object^  sender, System::EventArgs^  e) {
	DrawTableReaders();
}
private: System::Void tabPage1_Enter(System::Object^  sender, System::EventArgs^  e) {
	DrawTableBooks();
}
private: System::Void tabPage3_Enter(System::Object^  sender, System::EventArgs^  e) {
	DrawTableDelivery();
}
private: System::Void dataGridView3_CellEnter(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0) {	
		for (int i = 0; i < comboBox1->Items->Count; i++) {
			if (comboBox1->Items[i]->Equals(dataGridView3->CurrentRow->Cells[0]->Value->ToString())) {
				comboBox1->SelectedIndex = i;					
				break;								
			}
		}
		for (int i = 0; i < comboBox2->Items->Count; i++) {
			if (comboBox2->Items[i]->Equals(dataGridView3->CurrentRow->Cells[1]->Value->ToString())) {
				comboBox2->SelectedIndex = i;												
				break;
			}
		}						
		dateTimePicker1->Value = Convert::ToDateTime(dataGridView3->CurrentRow->Cells[2]->Value);
		dateTimePicker2->Value = Convert::ToDateTime(dataGridView3->CurrentRow->Cells[3]->Value);
		SelectDeliveruBookID = Convert::ToInt32(dataGridView3->CurrentRow->Cells[4]->Value);
		SelectDeliveruReaderID = Convert::ToInt32(dataGridView3->CurrentRow->Cells[5]->Value);
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		if (oledb) {
			if (comboBox1->SelectedIndex >= 0) {
				if (comboBox2->SelectedIndex >= 0) {
					if (dateTimePicker1->Value <= dateTimePicker2->Value) {
						oledb->Open();
						command->Connection = oledb;												
						
						int b = comboBox1->SelectedIndex;
						int r = comboBox2->SelectedIndex;

						command->CommandText = "insert into Delivery values (" + Books[b].ToString() + ", " + Readers[r].ToString() + ",'" + dateTimePicker1->Value.ToString() + "','" + dateTimePicker2->Value.ToString() + "')";
						command->ExecuteNonQuery();
					}
					else {
						MessageBox::Show("Дата выдачи, не может быть позже даты возврата. Измените дату");
						dateTimePicker2->Focus();
					}
				}
				else {
					MessageBox::Show("Вы не выбрали читателя. Выберите читателя!");
					comboBox2->Focus();
				}
			}
			else {
				MessageBox::Show("Вы не выбрали книгу. Выберите книгу!");
				comboBox1->Focus();
			}
		}
	}
	catch (Exception ^ex) {
		MessageBox::Show(ex->Message);
	}
	finally{
		try {
		 oledb->Close();
		 DrawTableDelivery();
		}
		catch (Exception ^ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		if (oledb) {
			if (SelectDeliveruBookID >= 0) {
				if (SelectDeliveruReaderID >= 0) {
					if (dateTimePicker1->Value <= dateTimePicker2->Value) {
						oledb->Open();
						command->Connection = oledb;						

						command->CommandText = "update Delivery set DateDelivery = '" + dateTimePicker1->Value.ToString() + "', DateReturn = '" + dateTimePicker2->Value.ToString() + "' where Book = " + SelectDeliveruBookID.ToString() + " and Reader = " + SelectDeliveruReaderID.ToString() + ";";
						command->ExecuteNonQuery();
					}
					else {
						MessageBox::Show("Дата выдачи, не может быть позже даты возврата. Измените дату");
						dateTimePicker2->Focus();
					}
				}
				else {
					MessageBox::Show("Вы не выбрали читателя. Выберите читателя!");
					comboBox2->Focus();
				}
			}
			else {
				MessageBox::Show("Вы не выбрали книгу. Выберите книгу!");
				comboBox1->Focus();
			}
		}
	}
	catch (Exception ^ex) {
		MessageBox::Show(ex->Message);
	}
	finally{
		try {
		 oledb->Close();
		 DrawTableDelivery();
		}
		catch (Exception ^ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		if (oledb && SelectDeliveruBookID >= 0 && SelectDeliveruReaderID >= 0) {
			oledb->Open();
			command->Connection = oledb;			

			command->CommandText = "delete from Delivery where Book = " + SelectDeliveruBookID.ToString() + " and Reader = " + SelectDeliveruReaderID.ToString() + ";";
			command->ExecuteNonQuery();
		}
	}
	catch (Exception ^ex) {
		MessageBox::Show(ex->Message);
	}
	finally{
		try {
		 oledb->Close();
		 DrawTableDelivery();
		}
		catch (Exception ^ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		if (oledb) {
			oledb->Open();

			command->Connection = oledb;

			if (checkBox3->Checked && checkBox4->Checked) {
				command->CommandText = "SELECT Books.Title, [Surname]+' '+[Name_]+' '+[Patronymic] AS Reader, Delivery.DateDelivery, Delivery.DateReturn FROM Readers INNER JOIN(Books INNER JOIN Delivery ON Books.ID = Delivery.Book) ON Readers.Number = Delivery.Reader WHERE (([Surname] + ' ' + [Name_] + ' ' + [Patronymic]) Like '%" + comboBox2->Text + "%') and (Title Like '%" + comboBox1->Text + "%')";
			}
			else
				if (checkBox3->Checked) {
					command->CommandText = "SELECT Books.Title, [Surname]+' '+[Name_]+' '+[Patronymic] AS Reader, Delivery.DateDelivery, Delivery.DateReturn FROM Readers INNER JOIN(Books INNER JOIN Delivery ON Books.ID = Delivery.Book) ON Readers.Number = Delivery.Reader WHERE (([Surname] + ' ' + [Name_] + ' ' + [Patronymic]) Like '%" + comboBox2->Text + "%')";
				}
				else
					if (checkBox4->Checked) {
						command->CommandText = "SELECT Books.Title, [Surname]+' '+[Name_]+' '+[Patronymic] AS Reader, Delivery.DateDelivery, Delivery.DateReturn FROM Readers INNER JOIN(Books INNER JOIN Delivery ON Books.ID = Delivery.Book) ON Readers.Number = Delivery.Reader WHERE (Title Like '%" + comboBox1->Text + "%')";
					}
					else {
						command->CommandText = "SELECT Books.Title, [Surname]+' '+[Name_]+' '+[Patronymic] AS Reader, Delivery.DateDelivery, Delivery.DateReturn FROM Readers INNER JOIN(Books INNER JOIN Delivery ON Books.ID = Delivery.Book) ON Readers.Number = Delivery.Reader";
					}

			reader = command->ExecuteReader();

			dataGridView3->Rows->Clear();

			while (reader->Read())
			{
				dataGridView3->Rows->Add(reader["Title"]->ToString(), reader["Reader"]->ToString(),
					String::Format("{0:d}", reader["DateDelivery"]), String::Format("{0:d}", reader["DateReturn"]));
			}
		}
	}
	catch (Exception ^ex)
	{
		MessageBox::Show(ex->Message);
	}
	finally
	{
		try
		{
			oledb->Close();
		}
		catch (Exception ^ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
};
}
