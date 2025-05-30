///////////////////////////////////////////////////////////////////////////////
// Code generated by wxUiEditor - see https://github.com/KeyWorksRW/wxUiEditor/
//
// Do not edit any code above the "End of generated code" comment block.
// Any changes before that block will be lost if it is re-generated!
///////////////////////////////////////////////////////////////////////////////

// clang-format off

#pragma once

#include <wx/bitmap.h>
#include <wx/button.h>
#include <wx/collpane.h>
#include <wx/dialog.h>
#include <wx/event.h>
#include <wx/gdicmn.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/srchctrl.h>
#include <wx/stattext.h>
#include <wx/stc/stc.h>

class Node;

class XrcPreview : public wxDialog
{
public:
    XrcPreview() {}
    XrcPreview(wxWindow *parent, wxWindowID id = wxID_ANY, const wxString& title = "Test XRC", const wxPoint& pos =
        wxDefaultPosition, const wxSize& size = wxDefaultSize,
        long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER, const wxString &name = wxDialogNameStr)
    {
        Create(parent, id, title, pos, size, style, name);
    }
    bool Create(wxWindow *parent, wxWindowID id = wxID_ANY, const wxString& title = "Test XRC", const wxPoint& pos =
        wxDefaultPosition, const wxSize& size = wxDefaultSize,
        long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER, const wxString &name = wxDialogNameStr);

    void Generate(Node* form_node = nullptr);

protected:

    // Event handlers

    void OnClear(wxCommandEvent& event);
    void OnCompare(wxCommandEvent& event);
    void OnDuplicate(wxCommandEvent& event);
    void OnExport(wxCommandEvent& event);
    void OnGenerate(wxCommandEvent& event);
    void OnInit(wxInitDialogEvent& event);
    void OnPreview(wxCommandEvent& event);
    void OnSearch(wxCommandEvent& event);
    void OnVerify(wxCommandEvent& event);

    // Class member variables

    wxButton* m_btnCompare;
    wxButton* m_btn__export;
    wxButton* m_btn_import;
    wxButton* m_btn_preview;
    wxCollapsiblePane* m_collapsible_pane;
    wxSearchCtrl* m_searchCtrl;
    wxStaticText* m_contents;
    wxStaticText* m_staticText;
    wxStyledTextCtrl* m_scintilla;

    Node* m_form_node;
};

// ************* End of generated code ***********
// DO NOT EDIT THIS COMMENT BLOCK!
//
// Code below this comment block will be preserved
// if the code for this class is re-generated.
//
// clang-format on
// ***********************************************
