#ifndef __GUIMyFrame1__
#define __GUIMyFrame1__

/**
@file
Subclass of MyFrame1, which is generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include

/** Implementing MyFrame1 */
class GUIMyFrame1 : public MyFrame1
{
	protected:
		// Handlers for MyFrame1 events.
		void m_button_save_click( wxCommandEvent& event );
		void m_button_method_A_click( wxCommandEvent& event );
	public:
		/** Constructor */
		ModalnyDlg* dialog_modalny;
		ModalnyDlg* dialog_modalny1;
		GUIMyFrame1( wxWindow* parent );
		void Repaint();
		void setImage(wxImage imageToSet);
		wxImage imageMain;
	//// end generated class members

};

#endif // __GUIMyFrame1__
