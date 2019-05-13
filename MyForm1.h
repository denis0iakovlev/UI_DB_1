#pragma once
namespace UIdb {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
		// Переменные 
		System::Drawing::Font^ font_for_all  = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
	private: System::Windows::Forms::Button^  add_bt;

	// 5 Lebel для окна соответсвующие полям БД 
		System::Windows::Forms::Label^  title;
		System::Windows::Forms::Label^  author_name;
		System::Windows::Forms::Label^  author_familie;
		System::Windows::Forms::Label^  series;
	private: System::Windows::Forms::TextBox^  author_nm_txtBx;

	private: System::Windows::Forms::TextBox^  author_fam_txtBx;






	private: System::Windows::Forms::Button^  back_bt;
	private: System::Windows::Forms::TextBox^  series_txtBx;

	private: System::Windows::Forms::TextBox^  name_book_txt_Bx;

	private: System::Windows::Forms::Label^  name_book;




	protected:

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
			this->add_bt = (gcnew System::Windows::Forms::Button());
			this->back_bt = (gcnew System::Windows::Forms::Button());
			this->title = (gcnew System::Windows::Forms::Label());
			this->author_name = (gcnew System::Windows::Forms::Label());
			this->series = (gcnew System::Windows::Forms::Label());
			this->author_familie = (gcnew System::Windows::Forms::Label());
			this->author_nm_txtBx = (gcnew System::Windows::Forms::TextBox());
			this->author_fam_txtBx = (gcnew System::Windows::Forms::TextBox());
			this->series_txtBx = (gcnew System::Windows::Forms::TextBox());
			this->name_book_txt_Bx = (gcnew System::Windows::Forms::TextBox());
			this->name_book = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// add_bt
			// 
			this->add_bt->Location = System::Drawing::Point(244, 336);
			this->add_bt->Name = L"add_bt";
			this->add_bt->Size = System::Drawing::Size(115, 23);
			this->add_bt->TabIndex = 0;
			this->add_bt->Text = L"Добавить запись";
			this->add_bt->UseVisualStyleBackColor = true;
			this->add_bt->Click += gcnew System::EventHandler(this, &MyForm1::add_bt_Click);
			// 
			// back_bt
			// 
			this->back_bt->Location = System::Drawing::Point(84, 336);
			this->back_bt->Name = L"back_bt";
			this->back_bt->Size = System::Drawing::Size(75, 23);
			this->back_bt->TabIndex = 6;
			this->back_bt->Text = L"отменить";
			this->back_bt->UseVisualStyleBackColor = true;
			this->back_bt->Click += gcnew System::EventHandler(this, &MyForm1::back_bt_Click);
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Location = System::Drawing::Point(10, 20);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(109, 13);
			this->title->TabIndex = 1;
			this->title->Text = L"Новая запись в БД ";
			// 
			// author_name
			// 
			this->author_name->AutoSize = true;
			this->author_name->Location = System::Drawing::Point(40, 53);
			this->author_name->Name = L"author_name";
			this->author_name->Size = System::Drawing::Size(68, 13);
			this->author_name->TabIndex = 2;
			this->author_name->Text = L"Автор (Имя)";
			// 
			// series
			// 
			this->series->AutoSize = true;
			this->series->Location = System::Drawing::Point(40, 184);
			this->series->Name = L"series";
			this->series->Size = System::Drawing::Size(119, 13);
			this->series->TabIndex = 3;
			this->series->Text = L"Серия (Издательство)";
			// 
			// author_familie
			// 
			this->author_familie->AutoSize = true;
			this->author_familie->Location = System::Drawing::Point(40, 93);
			this->author_familie->Name = L"author_familie";
			this->author_familie->Size = System::Drawing::Size(89, 13);
			this->author_familie->TabIndex = 5;
			this->author_familie->Text = L"Автор(фамилия)";
			// 
			// author_nm_txtBx
			// 
			this->author_nm_txtBx->Location = System::Drawing::Point(244, 46);
			this->author_nm_txtBx->Name = L"author_nm_txtBx";
			this->author_nm_txtBx->Size = System::Drawing::Size(100, 20);
			this->author_nm_txtBx->TabIndex = 3;
			// 
			// author_fam_txtBx
			// 
			this->author_fam_txtBx->Location = System::Drawing::Point(244, 86);
			this->author_fam_txtBx->Name = L"author_fam_txtBx";
			this->author_fam_txtBx->Size = System::Drawing::Size(100, 20);
			this->author_fam_txtBx->TabIndex = 4;
			// 
			// series_txtBx
			// 
			this->series_txtBx->Location = System::Drawing::Point(244, 177);
			this->series_txtBx->Name = L"series_txtBx";
			this->series_txtBx->Size = System::Drawing::Size(100, 20);
			this->series_txtBx->TabIndex = 10;
			this->series_txtBx->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged_1);
			// 
			// name_book_txt_Bx
			// 
			this->name_book_txt_Bx->Location = System::Drawing::Point(244, 130);
			this->name_book_txt_Bx->Name = L"name_book_txt_Bx";
			this->name_book_txt_Bx->Size = System::Drawing::Size(100, 20);
			this->name_book_txt_Bx->TabIndex = 9;
			// 
			// name_book
			// 
			this->name_book->AutoSize = true;
			this->name_book->Location = System::Drawing::Point(40, 137);
			this->name_book->Name = L"name_book";
			this->name_book->Size = System::Drawing::Size(61, 13);
			this->name_book->TabIndex = 11;
			this->name_book->Text = L"Имя книги";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(568, 382);
			this->Controls->Add(this->name_book);
			this->Controls->Add(this->series_txtBx);
			this->Controls->Add(this->name_book_txt_Bx);
			this->Controls->Add(this->series);
			this->Controls->Add(this->back_bt);
			this->Controls->Add(this->author_familie);
			this->Controls->Add(this->author_fam_txtBx);
			this->Controls->Add(this->author_nm_txtBx);
			this->Controls->Add(this->author_name);
			this->Controls->Add(this->title);
			this->Controls->Add(this->add_bt);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void add_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"provider = Microsoft.ACE.OLEDB.12.0; Data Source = C:\\BD\\sample_bd.accdb";
		//create connection
		OleDbConnection^ connDataBase = gcnew OleDbConnection(constring);
		// compare query to DB
		// получим значение первого поля ввода данных
		Int32^ id_insert = Convert::ToInt32(field_bd_1->Text);
		String^ querySQL = "insert into table1(id, [number]) values (" + id_insert + "," + "'" + field_bd_2->Text + "'" + ");";
		//create command for acess to data base
		OleDbCommand^ commandAddInsert = connDataBase->CreateCommand();

		commandAddInsert->CommandText = querySQL;

		try {
			connDataBase->Open();
			commandAddInsert->ExecuteNonQuery();
			connDataBase->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
private: System::Void back_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	

	this->Close();

}

private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
};
}
