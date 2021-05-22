#pragma once
#include "FigureArray.h"
#include <ctime>

namespace FiguresReview {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmMain
	/// </summary>
	public ref class FrmMain : public System::Windows::Forms::Form
	{
	public:
		FrmMain(void)
		{
			srand(time(NULL));
			InitializeComponent();
			figureArray = new FigureArray();
			g = pnlCanvas->CreateGraphics();
		}

	private:
		FigureArray* figureArray;
		Graphics^ g;

	protected:
		~FrmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlCanvas;
	protected:
	private: System::Windows::Forms::Timer^ tmrMain;
	private: System::ComponentModel::IContainer^ components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pnlCanvas = (gcnew System::Windows::Forms::Panel());
			this->tmrMain = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// pnlCanvas
			// 
			this->pnlCanvas->Location = System::Drawing::Point(3, 0);
			this->pnlCanvas->Name = L"pnlCanvas";
			this->pnlCanvas->Size = System::Drawing::Size(1030, 549);
			this->pnlCanvas->TabIndex = 0;
			// 
			// tmrMain
			// 
			this->tmrMain->Enabled = true;
			this->tmrMain->Tick += gcnew System::EventHandler(this, &FrmMain::tmrMain_Tick);
			// 
			// FrmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1034, 550);
			this->Controls->Add(this->pnlCanvas);
			this->Name = L"FrmMain";
			this->Text = L"FrmMain";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmMain::FrmMain_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tmrMain_Tick(System::Object^ sender, System::EventArgs^ e) {
		//Clear
		g->Clear(Color::WhiteSmoke);
		//Move
		figureArray->moveEverything(g);
		//Draw
		figureArray->drawEverything(g);
	}
	private: System::Void FrmMain_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode)
		{
		case Keys::R:
			figureArray->addMyRectangle(); break;
		case Keys::E:
			figureArray->addMyEllipse(); break;
		case Keys::T:
			figureArray->addMyTriangle(); break;
		}
	}
	
	};
}
