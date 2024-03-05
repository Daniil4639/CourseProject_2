#include "Cell.h"
#include "CycleSearcher.h"

Cell::Cell() {
	this->id = -1;
	nextPoint = System::Drawing::Point(-200, -200);
}

Cell::Cell(long long id) {
	this->id = id;
	hasNext = false;
	hasPrev = false;
	nextPoint = System::Drawing::Point(-200, -200);
}

void Cell::setLabel(System::Windows::Forms::Label^ label) {
	this->label = label;
}

void Cell::setNext(Cell^ next) {
	this->next = next;
}

void Cell::setId(long long id) {
	this->id = id;
	this->label->Text = id.ToString();
}

long long Cell::getId() {
	return id;
}

Cell^ Cell::getNext() {
	return next;
}

Cell::~Cell() {
	delete next;
}

void Cell::setPrev(Cell^ prev) {
	this->prev = prev;
}

Cell^ Cell::getPrev() {
	return prev;
}