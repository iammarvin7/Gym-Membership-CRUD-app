//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

	Form1->GymUsersGrid->Columns[0]->Header = "Id";
   Form1->GymUsersGrid->Columns[1]->Header = "MembershipId";
	Form1->GymUsersGrid->Columns[2]->Header = "FirstName";
	Form1->GymUsersGrid->Columns[3]->Header = "LastName";

	Form1->MembershipTypesGrid->Columns[0]->Header = "IdNumber";
	Form1->MembershipTypesGrid->Columns[1]->Header = "Type of Membership";
}
//---------------------------------------------------------------------------
