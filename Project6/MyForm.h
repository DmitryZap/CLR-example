#pragma once

#include "MyForm1.h"
#include "MyForm2.h"

namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public struct Student
	{
	public: 
		
		int id;
		int age;
		int mark1;
		int mark2;
		int mark3;


		Student(int id = 0, int age = 0, int mark1 = 0, int mark2 = 0, int mark3 = 0) {
			this->id = id;
			this->age = age;
			this->mark1 = mark1;
			this->mark2 = mark2;
			this->mark3 = mark3;
		}
	};
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Student* arr;
		Int32 size;
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Name1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Mark1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Mark2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Mark3;




	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Mark1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Mark2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Mark3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(593, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 70);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(593, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Вывести всех";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 41);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(593, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->Id, this->Age, 
				this->Mark1, this->Mark2, this->Mark3});
			this->dataGridView1->Location = System::Drawing::Point(12, 99);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(951, 150);
			this->dataGridView1->TabIndex = 3;
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			// 
			// Age
			// 
			this->Age->HeaderText = L"Age";
			this->Age->Name = L"Age";
			// 
			// Mark1
			// 
			this->Mark1->HeaderText = L"Mark1";
			this->Mark1->Name = L"Mark1";
			// 
			// Mark2
			// 
			this->Mark2->HeaderText = L"Mark2";
			this->Mark2->Name = L"Mark2";
			// 
			// Mark3
			// 
			this->Mark3->HeaderText = L"Mark3";
			this->Mark3->Name = L"Mark3";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1105, 357);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				MyForm1^ myForm1 = gcnew MyForm1();
				
				myForm1->ShowDialog();

				size = *myForm1->data;
				for (Int32 i = 0; i < size; ++i) {
					  MyForm2^ myForm2 = gcnew MyForm2();
					  myForm2->ShowDialog();
					  arr = new Student[size];
					  arr[i].id = *myForm2->id;
					  arr[i].age = *myForm2->id;
					  arr[i].mark1 = *myForm2->id;
					  arr[i].mark2 = *myForm2->id;
					  arr[i].mark3 = *myForm2->id;
				}
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			for (int i = 0; i < size; ++i) {
				dataGridView1->Rows->Add(arr[i].id , arr[i].age, arr[i].mark1, arr[i].mark2, arr[i].mark3);	
			}
		 }
};
}
