#pragma once
#include "Funciones.h"
#include <cctype> // para usar las funciones isdigit() e isalpha()

namespace Proyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: 
		Funciones* funcion = new Funciones();
		short cont = 0; //contador de elementos de conjunto A

	private: System::Windows::Forms::Button^ btn_Ingresar;
	private: System::Windows::Forms::TextBox^ txt_elementos;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ Mostrar1;


	private: System::Windows::Forms::TextBox^ valorA;
	private: System::Windows::Forms::TextBox^ valorB;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ buttonParOrdenado;
	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Label^ RelacionR;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ Propiedades;
	private: System::Windows::Forms::Label^ DiagramaHasse;




	private:
		   Graphics^ g;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			g = this->CreateGraphics();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
				
			}
			delete g;
			
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_N;

	private: System::Windows::Forms::Button^ btn_Validar;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_N = (gcnew System::Windows::Forms::TextBox());
			this->btn_Validar = (gcnew System::Windows::Forms::Button());
			this->btn_Ingresar = (gcnew System::Windows::Forms::Button());
			this->txt_elementos = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Mostrar1 = (gcnew System::Windows::Forms::Button());
			this->valorA = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->valorB = (gcnew System::Windows::Forms::TextBox());
			this->buttonParOrdenado = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->RelacionR = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Propiedades = (gcnew System::Windows::Forms::Label());
			this->DiagramaHasse = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gold;
			this->label1->Location = System::Drawing::Point(108, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(489, 79);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingresar \"n\" elementos del \nconjunto A (3<n<8) ";
			// 
			// txt_N
			// 
			this->txt_N->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_N->Location = System::Drawing::Point(429, 27);
			this->txt_N->Multiline = true;
			this->txt_N->Name = L"txt_N";
			this->txt_N->Size = System::Drawing::Size(151, 28);
			this->txt_N->TabIndex = 1;
			// 
			// btn_Validar
			// 
			this->btn_Validar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Validar->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Validar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_Validar->Location = System::Drawing::Point(442, 57);
			this->btn_Validar->Name = L"btn_Validar";
			this->btn_Validar->Size = System::Drawing::Size(122, 36);
			this->btn_Validar->TabIndex = 2;
			this->btn_Validar->Text = L"Validar dato";
			this->btn_Validar->UseVisualStyleBackColor = false;
			this->btn_Validar->Click += gcnew System::EventHandler(this, &MyForm::btn_Validar_Click);
			// 
			// btn_Ingresar
			// 
			this->btn_Ingresar->BackColor = System::Drawing::Color::Crimson;
			this->btn_Ingresar->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn_Ingresar->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Ingresar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_Ingresar->Location = System::Drawing::Point(458, 169);
			this->btn_Ingresar->Name = L"btn_Ingresar";
			this->btn_Ingresar->Size = System::Drawing::Size(122, 36);
			this->btn_Ingresar->TabIndex = 5;
			this->btn_Ingresar->Text = L"Ingresar";
			this->btn_Ingresar->UseVisualStyleBackColor = false;
			this->btn_Ingresar->Visible = false;
			this->btn_Ingresar->Click += gcnew System::EventHandler(this, &MyForm::btn_Ingresar_Click);
			// 
			// txt_elementos
			// 
			this->txt_elementos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_elementos->Location = System::Drawing::Point(347, 169);
			this->txt_elementos->Multiline = true;
			this->txt_elementos->Name = L"txt_elementos";
			this->txt_elementos->Size = System::Drawing::Size(105, 28);
			this->txt_elementos->TabIndex = 4;
			this->txt_elementos->Visible = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Moccasin;
			this->label2->Location = System::Drawing::Point(108, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(489, 45);
			this->label2->TabIndex = 3;
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MV Boli", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label3->Location = System::Drawing::Point(189, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(159, 331);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 21);
			this->label4->TabIndex = 7;
			// 
			// Mostrar1
			// 
			this->Mostrar1->BackColor = System::Drawing::Color::Red;
			this->Mostrar1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mostrar1->ForeColor = System::Drawing::Color::Yellow;
			this->Mostrar1->Location = System::Drawing::Point(34, 316);
			this->Mostrar1->Name = L"Mostrar1";
			this->Mostrar1->Size = System::Drawing::Size(99, 50);
			this->Mostrar1->TabIndex = 8;
			this->Mostrar1->Text = L"Mostrar Producto Cartesiano";
			this->Mostrar1->UseVisualStyleBackColor = false;
			this->Mostrar1->Visible = false;
			this->Mostrar1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// valorA
			// 
			this->valorA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->valorA->Location = System::Drawing::Point(976, 63);
			this->valorA->Multiline = true;
			this->valorA->Name = L"valorA";
			this->valorA->Size = System::Drawing::Size(64, 28);
			this->valorA->TabIndex = 10;
			this->valorA->Visible = false;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Goldenrod;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(654, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(500, 82);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Ingresar pares ordenados: ";
			this->label5->Visible = false;
			// 
			// valorB
			// 
			this->valorB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->valorB->Location = System::Drawing::Point(1060, 63);
			this->valorB->Multiline = true;
			this->valorB->Name = L"valorB";
			this->valorB->Size = System::Drawing::Size(64, 28);
			this->valorB->TabIndex = 12;
			this->valorB->Visible = false;
			// 
			// buttonParOrdenado
			// 
			this->buttonParOrdenado->BackColor = System::Drawing::Color::SandyBrown;
			this->buttonParOrdenado->Location = System::Drawing::Point(976, 97);
			this->buttonParOrdenado->Name = L"buttonParOrdenado";
			this->buttonParOrdenado->Size = System::Drawing::Size(148, 26);
			this->buttonParOrdenado->TabIndex = 13;
			this->buttonParOrdenado->Text = L"Ingresar Par ordenado";
			this->buttonParOrdenado->UseVisualStyleBackColor = false;
			this->buttonParOrdenado->Visible = false;
			this->buttonParOrdenado->Click += gcnew System::EventHandler(this, &MyForm::buttonParOrdenado_Click);
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(0, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 23);
			this->label6->TabIndex = 0;
			// 
			// RelacionR
			// 
			this->RelacionR->AutoSize = true;
			this->RelacionR->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RelacionR->ForeColor = System::Drawing::Color::Red;
			this->RelacionR->Location = System::Drawing::Point(959, 189);
			this->RelacionR->Name = L"RelacionR";
			this->RelacionR->Size = System::Drawing::Size(0, 25);
			this->RelacionR->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(679, 212);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 40);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Mostrar Relacion R";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// Propiedades
			// 
			this->Propiedades->AutoSize = true;
			this->Propiedades->Font = (gcnew System::Drawing::Font(L"Algerian", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Propiedades->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Propiedades->Location = System::Drawing::Point(627, 272);
			this->Propiedades->Name = L"Propiedades";
			this->Propiedades->Size = System::Drawing::Size(0, 16);
			this->Propiedades->TabIndex = 17;
			// 
			// DiagramaHasse
			// 
			this->DiagramaHasse->AutoSize = true;
			this->DiagramaHasse->Location = System::Drawing::Point(936, 461);
			this->DiagramaHasse->Name = L"DiagramaHasse";
			this->DiagramaHasse->Size = System::Drawing::Size(0, 13);
			this->DiagramaHasse->TabIndex = 18;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1218, 566);
			this->Controls->Add(this->DiagramaHasse);
			this->Controls->Add(this->Propiedades);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->RelacionR);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->buttonParOrdenado);
			this->Controls->Add(this->valorB);
			this->Controls->Add(this->valorA);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Mostrar1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_Ingresar);
			this->Controls->Add(this->txt_elementos);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn_Validar);
			this->Controls->Add(this->txt_N);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Manejo de Eventos	
	private: System::Void btn_Validar_Click(System::Object^ sender, System::EventArgs^ e) {
		Drawing::Font^ miFuente = gcnew Drawing::Font("Arial Black", 24);
		double num = 0;
		if (txt_N->Text != "")	//Si la cadena no está vacía
		{
			num = Convert::ToInt16(txt_N->Text);
			if (funcion->validarDato(num)) {
				g->Clear(Color::LightGray);
				g->DrawString("El dato ingresado es correcto!!", miFuente, Brushes::Green, 90, 100);
				funcion->setN(num); //Se establece el valor de N
				txt_elementos->Visible = true;
				btn_Ingresar->Visible = true;
				label2->Text = "Ingrese " + num + " elementos";
				label2->Visible = true;
				
			}
			else {
				g->Clear(Color::LightGray);
				g->DrawString("El dato ingresado es inválido!!", miFuente, Brushes::Red, 90, 100);
				txt_elementos->Visible = false;
				btn_Ingresar->Visible = false;
				label2->Visible = false;
				label3->Text = "";
			}
		}
	}
	private: System::Void btn_Ingresar_Click(System::Object^ sender, System::EventArgs^ e) {
		funcion->conjuntoCompleto(false);
		cont += 1;
		if (txt_elementos->Text != "") {
			if (cont != funcion->getN() + 1) {
				char elemento = '\0'; //inicializando
				elemento = Convert::ToChar(txt_elementos->Text);
				funcion->IngresarDatos(elemento);
				label3->Text = "Elemento '" + Convert::ToChar(elemento) + "' fue ingresado exitosamente";
			} 
			else {
				funcion->conjuntoCompleto(true);
				Mostrar1->Visible = true;
				valorA->Visible = true;
				valorB->Visible = true;
				buttonParOrdenado->Visible = true;
				label5->Visible = true;
			}
		}		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<char> aux = funcion->retornarConjunto();
		label4->Text += "A = { ";
		if (funcion->getCompleto()) {
			for (short i = 0; i < funcion->getN(); i++) {
				for (short j = 0; j < funcion->getN(); j++) {
					label4->Text += "(" + Convert::ToChar(aux.at(i)) + "," + Convert::ToChar(aux.at(j)) + "),";
				}
				label4->Text += "\n";
			};
		}
		label4->Text += " }";
	}

	private: System::Void buttonParOrdenado_Click(System::Object^ sender, System::EventArgs^ e) {
		Drawing::Font^ miFuente2 = gcnew Drawing::Font("Arial Black", 12);
		if (txt_elementos->Text != "") {
			char a = '\0'; //inicializando
			char b = '\0';
			a = Convert::ToChar(valorA->Text);
			b = Convert::ToChar(valorB->Text);
			funcion->IngresarParOrdenado(a, b);
			g->Clear(Color::LightGray);
			g->DrawString("Par ordenado (" + Convert::ToChar(a) + ", " + Convert::ToChar(b) + ") ingresado correctamente en la relacion R", miFuente2, Brushes::Green, 636, 155);
			button1->Visible = true;
		}
	}
	

	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
		RelacionR->Text = ""; //Para borrar la matriz anterior
		Propiedades->Text = ""; //Para borrar las propiedades anteriores
		//Se imprime la matriz booleana de la relacion R
		RelacionR->Text += "  Matriz R\n";
		if (funcion->getCompleto()) {
			switch (funcion->getN()) {
			case 4:			
				RelacionR->Text += " +--+--+--+--+\n"; break;
			case 5:
				RelacionR->Text += " +--+--+--+--+--+\n"; break;
			case 6:
				RelacionR->Text += " +--+--+--+--+--+--+\n"; break;
			case 7:
				RelacionR->Text += " +--+--+--+--+--+--+--+\n"; break;
			}
			for (short i = 0; i < funcion->getN(); i++) {
				RelacionR->Text += "| ";
				for (short j = 0; j < funcion->getN(); j++) {
					RelacionR->Text += Convert::ToChar(funcion->ImprimirMatriz(i, j)) + " |";
				}
				RelacionR->Text += "\n";
				switch (funcion->getN()) {
				case 4:
					RelacionR->Text += " +--+--+--+--+\n"; break;
				case 5:
					RelacionR->Text += " +--+--+--+--+--+\n"; break;
				case 6:
					RelacionR->Text += " +--+--+--+--+--+--+\n"; break;
				case 7:
					RelacionR->Text += " +--+--+--+--+--+--+--+\n"; break;
				}
			}

			if (funcion->evaluarReflexividad()) {
				Propiedades->Text +=  "|-|Es una relacion relexiva|-|\n";
			}
			if (funcion->evaluarIrreflexividad()) {
				Propiedades->Text += "|-|Es una relacion irrelexiva|-|\n";
			}
			if (funcion->evaluarSimetria()) {
				Propiedades->Text += "|-|Es una relacion simetrica|-|\n";
			}
			if (funcion->evaluarAsimetria()) {
				Propiedades->Text += "|-|Es una relacion asimetrica|-|\n";
			}
			if (funcion->evaluarAntisimetria()) {
				Propiedades->Text += "|-|Es una relacion antisimetrica|-|\n";
			}
			if (funcion->evaluarTransitividad()) {
				Propiedades->Text += "|-|Es una relacion Transitiva|-|\n";
			}
			if (funcion->evaluarRelacionEquivalencia()) {
				Propiedades->Text += "|-|Es una relacion de EQUIVALENCIA|-|\n";
				funcion->elevarCuadradoMatriz();
				//funcion->EliminarUnos();

				switch (funcion->getN()) {
				case 4:
					DiagramaHasse->Text += " +--+--+--+--+\n"; break;
				case 5:
					DiagramaHasse->Text += " +--+--+--+--+--+\n"; break;
				case 6:
					DiagramaHasse->Text += " +--+--+--+--+--+--+\n"; break;
				case 7:
					DiagramaHasse->Text += " +--+--+--+--+--+--+--+\n"; break;
				}
				for (short i = 0; i < funcion->getN(); i++) {
					DiagramaHasse->Text += "| ";
					for (short j = 0; j < funcion->getN(); j++) {
						DiagramaHasse->Text += Convert::ToChar(funcion->ImprimirMatriz(i, j)) + " |";
					}
					DiagramaHasse->Text += "\n";
					switch (funcion->getN()) {
					case 4:
						DiagramaHasse->Text += " +--+--+--+--+\n"; break;
					case 5:
						DiagramaHasse->Text += " +--+--+--+--+--+\n"; break;
					case 6:
						DiagramaHasse->Text += " +--+--+--+--+--+--+\n"; break;
					case 7:
						DiagramaHasse->Text += " +--+--+--+--+--+--+--+\n"; break;
					}
				}
			}
			if (funcion->evaluarRelacionOrdenParcial()) {
				Propiedades->Text += "|-|Es una relacion de ORDEN PARCIAL|-|\n";
			}
		}
	}

};
}
