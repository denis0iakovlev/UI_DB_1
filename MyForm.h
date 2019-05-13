#pragma once
#include "MyForm1.h"
namespace UIdb {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		void ShowMyPicture(String^ fileToDisplay, int x_size, int y_size) {
			// Если указатель не пустой то его удалить 
			if (myImage != nullptr) {
				delete myImage;
			}
			pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
			myImage = gcnew Bitmap(fileToDisplay);
			pictureBox1->ClientSize = System::Drawing::Size(x_size, y_size);
			pictureBox1->Image = dynamic_cast<Image^>(myImage);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  author_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  author_familie;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name_book;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  series;
	private: System::Windows::Forms::Button^  button1;
	private: StreamWriter^ sw;











	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	String^ connectionString = "provider = Microsoft.ACE.OLEDB.12.0; Data Source = C:\\BD\\sample_bd.accdb";
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button4;
			 // Указатель на файл jpg
	Bitmap^ myImage;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->author_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->author_familie = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name_book = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->series = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::Color::AntiqueWhite;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->author_name,
					this->author_familie, this->name_book, this->series
			});
			this->dataGridView1->Location = System::Drawing::Point(150, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(444, 321);
			this->dataGridView1->TabIndex = 0;
			// 
			// author_name
			// 
			this->author_name->HeaderText = L"Автор(имя)";
			this->author_name->Name = L"author_name";
			// 
			// author_familie
			// 
			this->author_familie->HeaderText = L"Автор (Фамилия)";
			this->author_familie->Name = L"author_familie";
			// 
			// name_book
			// 
			this->name_book->HeaderText = L"Имя книги";
			this->name_book->Name = L"name_book";
			// 
			// series
			// 
			this->series->HeaderText = L"Серия (Издательство)";
			this->series->Name = L"series";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Location = System::Drawing::Point(12, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Получить данные";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::get_dannii);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(3, 107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Добавить запись";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 339);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(449, 141);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(5, 171);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Показать изображение";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(5, 219);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 32);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Выбрать из-ние";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(664, 518);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_Click(System::Object^  sender, System::EventArgs^  e) {
		OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
		String^ querystring = "SELECT * FROM Table1";
		OleDbCommand^ command = gcnew OleDbCommand(querystring, conn);
		conn->Open();
		OleDbDataReader^ dataReader = command->ExecuteReader();
		while (dataReader->Read()) {
			dataGridView1->Rows->Add(dataReader["id"], dataReader["number"]);
			//grid->Rows->Add(dataReader["id"], dataReader["Author"]);
		}
		dataReader->Close();
		conn->Close();
	}

	private: System::Void get_dannii(System::Object^  sender, System::EventArgs^  e) {
		dataGridView1->Rows->Clear();
		String^ connectionString = "provider = Microsoft.ACE.OLEDB.12.0; Data Source = C:\\BD\\sample_bd.accdb";
		OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
		String^ querystring = "SELECT * FROM Table1";
		try {
			OleDbCommand^ command = gcnew OleDbCommand(querystring, conn);
			conn->Open();
			OleDbDataReader^ dataReader = command->ExecuteReader();
		while (dataReader->Read()) {
			dataGridView1->Rows->Add(dataReader["Автор(имя)"], dataReader["Автор(Фамилия)"]);
			//grid->Rows->Add(dataReader["id"], dataReader["Author"]);
		}
		dataReader->Close();
		conn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}



	}
			 private: 

			 //Обработчик для кнопки внести данные
	//private: System::Void insert_zapis(System::Object^  sender, System::EventArgs^  e) {

	//	String^ con_str = "provider = Microsoft.ACE.OLEDB.12.0; Data Source = C:\\BD\\sample_bd.accdb";

	//	OleDbConnection^ conn = gcnew OleDbConnection(con_str);
	//	
	//	String^ author = textBox2->Text;
	//


	//	String^ command_isbn = "INSERT INTO table1(id, [number]) VALUES (12545644, 'Яковлев')";

	//		OleDbCommand^ command_ = conn->CreateCommand();
	//		command_->CommandText= "INSERT INTO table1(id, [number]) VALUES(8, 'Shilov')";

	//		//OleDbCommand^ command_2 = gcnew OleDbCommand(command_number, conn);
	//		conn->Open();
	//		command_->ExecuteNonQuery();
	//		//command_2->ExecuteNonQuery();
	//		conn->Close();
	//}


//	private: System::Void clear_all(System::Object^  sender, System::EventArgs^  e) {
//		dataGridView1->Rows->Clear();
//	}
//private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
//}
//private: System::Void vstavit_zapis(System::Object^  sender, System::EventArgs^  e) {
//
//	String^ con_str = "provider = Microsoft.ACE.OLEDB.12.0; Data Source = C:\\BD\\sample_bd.accdb";
//
//	OleDbConnection^ conn = gcnew OleDbConnection(con_str);
//
//	String^ author = textBox1->Text;
//	Int32^ id = Convert::ToInt32(author);
//	String^ number = textBox2->Text;
//
//	String^ comm = "INSERT INTO table1(id, [number]) VALUES (" + id + "," + "'" + number + "'" + ")";
//
//	OleDbCommand^ command = conn->CreateCommand();
//
//	command->CommandText = comm;
//
//	conn->Open();
//	
//	command->ExecuteNonQuery();
//
//	conn->Close();
//
//	textBox1->Clear();
//	textBox2->Clear();
//	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	this->Hide();
	MyForm1^ f1 = gcnew MyForm1();
	f1->ShowDialog();
	this->Show();

}

private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ path = "C:\\Users\\1\\Desktop\\Фото_для_сайта\\20161002_171504.jpg";
	int x_size = 250;
	int y_size = 150;
	ShowMyPicture(path, x_size, y_size);

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ path = "C:\\Users\\1\\Desktop\\Фото_для_сайта\\20161002_171504.jpg";
	int x_size = 250;
	int y_size = 150;
	ShowMyPicture(path, x_size, y_size);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Stream^ my_stream;
	String^ path_2;
	
	//pictureBox1-

	OpenFileDialog^ new_fileDialog = gcnew OpenFileDialog;
	new_fileDialog->InitialDirectory = "C:\\Users\\1\\Desktop\\Фото_для_сайта";
	new_fileDialog->Filter = "jpg, bmp fiels (*.jpg)|*.bmp|All fils(*.*)|*.*";
	new_fileDialog->FilterIndex = 2;
	new_fileDialog->RestoreDirectory = true;

	if (new_fileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if ((my_stream = new_fileDialog->OpenFile())) {
			path_2 = new_fileDialog->FileName;
			my_stream->Close();
		}
	}
	ShowMyPicture(path_2, 250, 100);



}
}

	;
}