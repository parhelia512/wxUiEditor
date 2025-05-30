///////////////////////////////////////////////////////////////////////////////
// Code generated by wxUiEditor - see https://github.com/KeyWorksRW/wxUiEditor/
//
// Do not edit any code above the "End of generated code" comment block.
// Any changes before that block will be lost if it is re-generated!
///////////////////////////////////////////////////////////////////////////////

// clang-format off

#pragma once

#include <wx/aui/auibook.h>
#include <wx/bitmap.h>
#include <wx/colour.h>
#include <wx/event.h>
#include <wx/frame.h>
#include <wx/gdicmn.h>
#include <wx/hyperlink.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/stc/stc.h>
#include <wx/textctrl.h>
#include <wx/toolbar.h>

class MsgFrameBase : public wxFrame
{
public:
    enum
    {
        id_event_msgs = wxID_HIGHEST + 1,
        id_hide,
        id_warning_msgs
    };

    MsgFrameBase() {}
    MsgFrameBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = "wxUiEditor Messages",
        const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize,
        long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL, const wxString &name = wxFrameNameStr)
    {
        Create(parent, id, title, pos, size, style, name);
    }
    bool Create(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = "wxUiEditor Messages",
        const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize,
        long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL, const wxString &name = wxFrameNameStr);

protected:

    // Virtual event handlers -- override them in your derived class

    virtual void OnClear(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClose(wxCloseEvent& event) { event.Skip(); }
    virtual void OnEvents(wxCommandEvent& event) { event.Skip(); }
    virtual void OnHide(wxCommandEvent& event) { event.Skip(); }
    virtual void OnInfo(wxCommandEvent& event) { event.Skip(); }
    virtual void OnPageChanged(wxAuiNotebookEvent& event) { event.Skip(); }
    virtual void OnParent(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSaveAs(wxCommandEvent& event) { event.Skip(); }
    virtual void OnWarnings(wxCommandEvent& event) { event.Skip(); }

    // Class member variables

    wxAuiNotebook* m_aui_notebook;
    wxHyperlinkCtrl* m_hyperlink;
    wxMenuItem* m_menu_item_events;
    wxMenuItem* m_menu_item_info;
    wxMenuItem* m_menu_item_warnings;
    wxPanel* m_page_log;
    wxPanel* m_page_node;
    wxPanel* m_page_xrc;
    wxStaticText* m_txt_clipboard;
    wxStaticText* m_txt_generator;
    wxStaticText* m_txt_memory;
    wxStaticText* m_txt_project;
    wxStaticText* m_txt_type;
    wxStyledTextCtrl* m_scintilla;
    wxTextCtrl* m_textCtrl;
    wxToolBar* m_tool_bar;
};

// ************* End of generated code ***********
// DO NOT EDIT THIS COMMENT BLOCK!
//
// Code below this comment block will be preserved
// if the code for this class is re-generated.
//
// clang-format on
// ***********************************************
