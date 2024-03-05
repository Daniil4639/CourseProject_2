#pragma once
#include "LinkedList.h"
#include <msclr\marshal_cppstd.h>

namespace CycleSearcher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для CycleSearcher
	/// </summary>
	public ref class CycleSearcher : public System::Windows::Forms::Form
	{
	public:
		CycleSearcher(void)
		{
			InitializeComponent();
		}

		LinkedList^ list;
		bool isPanelMove;
		bool makeConnection;
		Point mousePoint;
		Label^ activelabel;
		Graphics^ g;
	private: System::Windows::Forms::Label^ shiftLabel;

	public:

	private: System::Windows::Forms::PictureBox^ lineBox;
	public:

	public:

	public:
		bool hasActiveLabel;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CycleSearcher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ checkButton;
	protected:


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ answerLabel;

	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Button^ clearButton;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->answerLabel = (gcnew System::Windows::Forms::Label());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->lineBox = (gcnew System::Windows::Forms::PictureBox());
			this->shiftLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lineBox))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(-3, 515);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(792, 56);
			this->label1->TabIndex = 0;
			// 
			// checkButton
			// 
			this->checkButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->checkButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkButton->Location = System::Drawing::Point(398, 525);
			this->checkButton->Name = L"checkButton";
			this->checkButton->Size = System::Drawing::Size(126, 27);
			this->checkButton->TabIndex = 2;
			this->checkButton->Text = L"Проверить";
			this->checkButton->UseVisualStyleBackColor = false;
			this->checkButton->Click += gcnew System::EventHandler(this, &CycleSearcher::checkButton_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(530, 530);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(242, 23);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Результат:";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(-3, 515);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(792, 1);
			this->label4->TabIndex = 4;
			// 
			// answerLabel
			// 
			this->answerLabel->AutoSize = true;
			this->answerLabel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->answerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->answerLabel->ForeColor = System::Drawing::Color::Black;
			this->answerLabel->Location = System::Drawing::Point(611, 530);
			this->answerLabel->Name = L"answerLabel";
			this->answerLabel->Size = System::Drawing::Size(11, 16);
			this->answerLabel->TabIndex = 5;
			this->answerLabel->Text = L"-";
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->addButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addButton->Location = System::Drawing::Point(12, 526);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(147, 27);
			this->addButton->TabIndex = 6;
			this->addButton->Text = L"Добавить элемент";
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &CycleSearcher::addButton_Click);
			// 
			// clearButton
			// 
			this->clearButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clearButton->Location = System::Drawing::Point(201, 525);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(147, 27);
			this->clearButton->TabIndex = 7;
			this->clearButton->Text = L"Очистить";
			this->clearButton->UseVisualStyleBackColor = false;
			this->clearButton->Click += gcnew System::EventHandler(this, &CycleSearcher::clearButton_Click);
			// 
			// lineBox
			// 
			this->lineBox->Location = System::Drawing::Point(0, 0);
			this->lineBox->Name = L"lineBox";
			this->lineBox->Size = System::Drawing::Size(789, 527);
			this->lineBox->TabIndex = 8;
			this->lineBox->TabStop = false;
			// 
			// shiftLabel
			// 
			this->shiftLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->shiftLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->shiftLabel->Location = System::Drawing::Point(0, 489);
			this->shiftLabel->Name = L"shiftLabel";
			this->shiftLabel->Size = System::Drawing::Size(79, 26);
			this->shiftLabel->TabIndex = 9;
			this->shiftLabel->Text = L"Shift";
			this->shiftLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->shiftLabel->Visible = false;
			// 
			// CycleSearcher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->shiftLabel);
			this->Controls->Add(this->clearButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->answerLabel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lineBox);
			this->KeyPreview = true;
			this->Name = L"CycleSearcher";
			this->Text = L"CycleSearcher";
			this->Load += gcnew System::EventHandler(this, &CycleSearcher::CycleSearcher_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CycleSearcher::CycleSearcher_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &CycleSearcher::CycleSearcher_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lineBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::Label^ label = gcnew System::Windows::Forms::Label();
		label->AutoSize = false;
		label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		label->Size = System::Drawing::Size(40, 40);
		label->Location = System::Drawing::Point(100, 100);
		label->Text = System::Convert::ToString(list->getSize());
		label->BackColor = System::Drawing::SystemColors::ControlLight;
		label->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

		if (hasActiveLabel) {
			activelabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		}

		activelabel = label;
		hasActiveLabel = true;

		label->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &CycleSearcher::customLabel_MouseDown);
		label->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &CycleSearcher::customLabel_MouseUp);
		label->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &CycleSearcher::customLabel_MouseMove);

		this->Controls->Add(label);
		label->BringToFront();
		bringGeneralControllersToFront();

		Cell^ cell = gcnew Cell(list->getSize());
		cell->setLabel(label);

		this->list->addElem(cell);
	}

private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < list->getSize(); i++) {
		Controls->Remove(list->getCell(i)->label);
	}

	list->clear();

	reDraw();
}

private: System::Void checkButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int num = stoi(msclr::interop::marshal_as<std::string>(activelabel->Text));

	if (!hasActiveLabel) {
		answerLabel->Text = "-";
		answerLabel->ForeColor = Color::Black;
		return;
	}

	if (findCycle(list->getCell(num), list->getCell(num))) {
		answerLabel->Text = "цикл присутствует!";
		answerLabel->ForeColor = Color::Green;
	}
	else {
		answerLabel->Text = "цикл отсутствует!";
		answerLabel->ForeColor = Color::Red;
	}
}

private: System::Void customLabel_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Label^ label = (Label^)sender;

	if (hasActiveLabel && !activelabel->Text->Equals(label->Text)) {
		activelabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;

		if (makeConnection) {
			addLine(label);

			reDraw();
		}

		activelabel = label;
		label->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	}
	else {
		hasActiveLabel = true;

		activelabel = label;
		label->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

		isPanelMove = true;
		mousePoint = e->Location;
	}
}

private: System::Void customLabel_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (isPanelMove) {
		isPanelMove = false;
	}
}
private: System::Void customLabel_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (isPanelMove) {
		Label^ label = (Label^)sender;
		Cell^ cell = list->getCell(stoi(msclr::interop::marshal_as<std::string>(label->Text)));

		label->Top = label->Top + (e->Y - mousePoint.Y);
		label->Left = label->Left + (e->X - mousePoint.X);

		if (cell->hasPrev) {

			Cell^ prevCell = cell->getPrev();
			prevCell->nextPoint.X += (e->X - mousePoint.X);
			prevCell->nextPoint.Y += (e->Y - mousePoint.Y);
		}

		reDraw();
	}
}
private: System::Void CycleSearcher_Load(System::Object^ sender, System::EventArgs^ e) {
	hasActiveLabel = false;
	makeConnection = false;
	list = gcnew LinkedList();
	g = lineBox->CreateGraphics();
}

private: System::Void CycleSearcher_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Delete && hasActiveLabel) {
		int num = stoi(msclr::interop::marshal_as<std::string>(activelabel->Text));

		Cell^ cell = list->getCell(num);

		if (cell->hasPrev) {
			Cell^ prevCell = cell->getPrev();

			prevCell->nextPoint = Point(-200, -200);
			prevCell->hasNext = false;
		}
		if (cell->hasNext) {
			Cell^ nextCell = cell->getNext();

			nextCell->hasPrev = false;
		}

		list->eraseElem(num);

		Controls->Remove(activelabel);

		list->renumerate();

		reDraw();

		hasActiveLabel = false;
	}
	if (e->KeyCode == Keys::ShiftKey) {
		makeConnection = true;
		shiftLabel->Visible = true;
	}
}

private: System::Void CycleSearcher_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::ShiftKey) {
		makeConnection = false;
		shiftLabel->Visible = false;
	}
}

private: void bringGeneralControllersToFront() {
	label1->BringToFront();
	label4->BringToFront();
	label3->BringToFront();
	answerLabel->BringToFront();
	addButton->BringToFront();
	clearButton->BringToFront();
	checkButton->BringToFront();
}

private: void addLine(Label^ endLabel) {
	makeConnection = false;
	shiftLabel->Visible = false;

	int numActive = stoi(msclr::interop::marshal_as<std::string>(activelabel->Text));
	int numNext = stoi(msclr::interop::marshal_as<std::string>(endLabel->Text));

	list->getCell(numActive)->nextPoint = Point(
		endLabel->Location.X, endLabel->Location.Y + 20);

	list->getCell(numActive)->setNext(list->getCell(numNext));
	list->getCell(numActive)->hasNext = true;

	list->getCell(numNext)->setPrev(list->getCell(numActive));
	list->getCell(numNext)->hasPrev = true;
}

private: void reDraw() {
	g->Clear(System::Drawing::SystemColors::Control);
	Pen^ pen = gcnew Pen(Color::Black);

	for (int i = 0; i < list->getSize(); i++) {
		Cell^ cell = list->getCell(i);

		if (cell->nextPoint.X != -200) {
			g->DrawLine(pen, Point(
				cell->label->Location.X + 40, cell->label->Location.Y + 20),
				cell->nextPoint);
		}
	}
}

private: bool findCycle(Cell^ slow, Cell^ fast) {
	while (true) {
		if (!fast->hasNext) {
			break;
		}
		fast = fast->getNext();

		if (!fast->hasNext) {
			break;
		}
		fast = fast->getNext();

		slow = slow->getNext();

		if (slow->getId() == fast->getId()) {
			return true;
		}
	}

	return false;
}
};
}
