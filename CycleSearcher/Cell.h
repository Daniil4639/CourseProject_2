#pragma once

ref class Cell {
private:
	long long id;
	Cell^ next;
	Cell^ prev;
protected:
public:
	bool hasNext;
	bool hasPrev;
	bool intoCycle;
	System::Windows::Forms::Label^ nextLabel;
	System::Windows::Forms::Label^ label;

	Cell();
	Cell(long long);
	void setNext(Cell^);
	void setLabel(System::Windows::Forms::Label^);
	void setId(long long);
	long long getId();
	Cell^ getNext();
	void setPrev(Cell^);
	Cell^ getPrev();
	~Cell();
};