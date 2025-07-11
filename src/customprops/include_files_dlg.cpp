///////////////////////////////////////////////////////////////////////////////
// Code generated by wxUiEditor - see https://github.com/KeyWorksRW/wxUiEditor/
//
// Do not edit any code above the "End of generated code" comment block.
// Any changes before that block will be lost if it is re-generated!
///////////////////////////////////////////////////////////////////////////////

// clang-format off

#include <wx/artprov.h>
#include <wx/sizer.h>

#include <wx/filedlg.h>
#include <wx/tokenzr.h>

#include "include_files_dlg.h"

#include "node.h"
#include "node_prop.h"
#include "project_handler.h"

bool IncludeFilesDialog::Create(wxWindow* parent, wxWindowID id, const wxString& title,
    const wxPoint& pos, const wxSize& size, long style, const wxString &name)
{
    // Scaling of pos and size are handled after the dialog
    // has been created and controls added.
    if (!wxDialog::Create(parent, id, title, pos, size, style, name))
    {
        return false;
    }

    auto* dlg_sizer = new wxBoxSizer(wxVERTICAL);

    m_staticText = new wxStaticText(this, wxID_ANY,
        "These header files will be added as #includes to the the generated header file.");
    m_staticText->Wrap(350);
    dlg_sizer->Add(m_staticText, wxSizerFlags().Border(wxALL));

    auto* box_sizer = new wxBoxSizer(wxHORIZONTAL);

    m_listbox = new wxListBox(this, wxID_ANY);
    m_listbox->SetMinSize(FromDIP(wxSize(200, 200)));
    box_sizer->Add(m_listbox, wxSizerFlags().Border(wxALL));

    auto* box_sizer_2 = new wxBoxSizer(wxVERTICAL);

    auto* btn_add = new wxButton(this, wxID_ANY, "&Add...");
        btn_add->SetBitmap(wxArtProvider::GetBitmapBundle(wxART_FILE_OPEN, wxART_BUTTON));
    box_sizer_2->Add(btn_add, wxSizerFlags().Expand().Border(wxALL));

    m_btn_remove = new wxButton(this, wxID_ANY, "&Remove");
        m_btn_remove->SetBitmap(wxArtProvider::GetBitmapBundle(wxART_DELETE, wxART_BUTTON));
    box_sizer_2->Add(m_btn_remove, wxSizerFlags().Expand().Border(wxALL));

    m_btn_move_up = new wxButton(this, wxID_ANY, "Move &Up");
        m_btn_move_up->SetBitmap(wxArtProvider::GetBitmapBundle(wxART_GO_UP, wxART_BUTTON));
    box_sizer_2->Add(m_btn_move_up, wxSizerFlags().Expand().Border(wxALL));

    m_btn_move_down = new wxButton(this, wxID_ANY, "Move &Down");
        m_btn_move_down->SetBitmap(wxArtProvider::GetBitmapBundle(wxART_GO_DOWN, wxART_BUTTON));
    box_sizer_2->Add(m_btn_move_down, wxSizerFlags().Expand().Border(wxALL));

    m_btn_sort = new wxButton(this, wxID_ANY, "&Sort All");
        m_btn_sort->SetBitmap(wxArtProvider::GetBitmapBundle(wxART_LIST_VIEW, wxART_BUTTON));
    box_sizer_2->Add(m_btn_sort, wxSizerFlags().Expand().Border(wxALL));

    box_sizer->Add(box_sizer_2, wxSizerFlags().Border(wxALL));

    dlg_sizer->Add(box_sizer, wxSizerFlags().Expand().Border(wxALL));

    auto* stdBtn = CreateStdDialogButtonSizer(wxOK|wxCANCEL);
    dlg_sizer->Add(CreateSeparatedSizer(stdBtn), wxSizerFlags().Expand().Border(wxALL));

    if (pos != wxDefaultPosition)
    {
        // Now that the dialog is created, set the scaled position
        SetPosition(FromDIP(pos));
    }
    if (size == wxDefaultSize)
    {
        // If default size let the sizer set the dialog's size
        // so that it is large enough to fit it's child controls.
        SetSizerAndFit(dlg_sizer);
    }
    else
    {
        SetSizer(dlg_sizer);
        if (size.x == wxDefaultCoord || size.y == wxDefaultCoord)
        {
            // Use the sizer to calculate the missing dimension
            Fit();
        }
        SetSize(FromDIP(size));
        Layout();
    }
    m_listbox->SetFocus();

    Centre(wxBOTH);

    // Event handlers
    Bind(wxEVT_BUTTON, &IncludeFilesDialog::OnOK, this, wxID_OK);
    btn_add->Bind(wxEVT_BUTTON, &IncludeFilesDialog::OnAdd, this);
    m_btn_move_down->Bind(wxEVT_BUTTON, &IncludeFilesDialog::OnMoveDown, this);
    m_btn_move_up->Bind(wxEVT_BUTTON, &IncludeFilesDialog::OnMoveUp, this);
    m_btn_remove->Bind(wxEVT_BUTTON, &IncludeFilesDialog::OnRemove, this);
    m_btn_sort->Bind(wxEVT_BUTTON, &IncludeFilesDialog::OnSort, this);
    Bind(wxEVT_INIT_DIALOG, &IncludeFilesDialog::OnInit, this);
    m_listbox->Bind(wxEVT_LISTBOX, &IncludeFilesDialog::OnItemSelected, this);

    return true;
}

// ************* End of generated code ***********
// DO NOT EDIT THIS COMMENT BLOCK!
//
// Code below this comment block will be preserved
// if the code for this class is re-generated.
//
// clang-format on
// ***********************************************

/////////////////// Non-generated Copyright/License Info ////////////////////
// Author:    Ralph Walden
// Copyright: Copyright (c) 2023-2024 KeyWorks Software (Ralph Walden)
// License:   Apache License -- see ../../LICENSE
/////////////////////////////////////////////////////////////////////////////

#include "sys_header_dlg.h"    // SysHeaderDlg class
#include "tt_string_vector.h"  // tt_string_vector -- Read/Write line-oriented strings/files
#include "tt_view_vector.h"    // tt_view_vector -- Read/Write line-oriented strings/files

void IncludeFilesDialog::Initialize(NodeProperty* prop)
{
    m_prop = prop;
    if (m_prop->isProp(prop_relative_require_list))
        m_language = GEN_LANG_RUBY;
    else if (m_prop->isProp(prop_python_import_list))
        m_language = GEN_LANG_PYTHON;
    else
        m_language = GEN_LANG_CPLUSPLUS;
}

void IncludeFilesDialog::SetButtonsEnableState(bool set_ok_btn)
{
    int sel = m_listbox->GetSelection();
    m_btn_remove->Enable(sel != wxNOT_FOUND);
    m_btn_move_up->Enable(sel > 0);
    m_btn_move_down->Enable(sel != wxNOT_FOUND &&
                            static_cast<unsigned int>(sel) < m_listbox->GetCount() - 1);
    m_btn_sort->Enable(m_listbox->GetCount() > 1);
    if (set_ok_btn)
        FindWindow(GetAffirmativeId())->Enable(m_listbox->GetCount() > 0);
}

void IncludeFilesDialog::OnInit(wxInitDialogEvent& WXUNUSED(event))
{
    if (m_prop->isProp(prop_relative_require_list))
    {
        m_staticText->SetLabel("These files will be loaded using relative require statements.");
    }
    else if (m_prop->isProp(prop_python_import_list))
    {
        m_staticText->SetLabel("These files will be loading using import statements.");
    }

    ASSERT_MSG(m_prop, "m_prop is nullptr -- call Initialize()!");
    if (m_prop->isProp(prop_system_hdr_includes) || m_prop->isProp(prop_system_src_includes))
    {
        SetTitle("System Header Files");
    }

    if (m_prop->hasValue())
    {
        tt_view_vector list;
        list.SetString(m_prop->value());
        for (auto& iter: list)
        {
            m_listbox->Append(iter.make_wxString());
        }
        if (m_listbox->GetCount())
        {
            m_listbox->SetSelection(0);
        }
    }

    SetButtonsEnableState();
}

void IncludeFilesDialog::OnAdd(wxCommandEvent& WXUNUSED(event))
{
    if (m_prop->isProp(prop_system_src_includes) || m_prop->isProp(prop_system_hdr_includes))
    {
        SysHeaderDlg dlg(this);
        dlg.Initialize(m_prop);
        if (dlg.ShowModal() == wxID_OK)
        {
            tt_string_vector files(dlg.GetResults(), ';');
            for (auto& iter: files)
            {
                auto item = iter.make_wxString();
                if (m_listbox->FindString(item) == wxNOT_FOUND)
                {
                    m_listbox->Append(item);
                }
            }
            SetButtonsEnableState();
        }
        return;
    }

    tt_string path;
    tt_string cur_file;
    if (m_prop->isProp(prop_local_hdr_includes) || m_prop->isProp(prop_local_src_includes) ||
        m_prop->isProp(prop_project_src_includes) || m_prop->isProp(prop_relative_require_list) ||
        m_prop->isProp(prop_python_import_list))
    {
        auto* form = m_prop->getNode();
        auto [output_path, has_base_file] = Project.GetOutputPath(form, m_language);
        path = std::move(output_path);
        if (has_base_file)
        {
            cur_file = path.filename();

            // We only got the node's filename in case it includes a path. We don't want the
            // filename portion as part of the path.
            path.remove_filename();
        }

        if (path.empty())
        {
            path = Project.getProjectPath();
        }
    }

    tt_string title;
    tt_string filter;
    if (m_prop->isProp(prop_python_import_list))
    {
        title = "Import Python File";
        filter = "Python Files|*.py";
    }
    else if (m_prop->isProp(prop_relative_require_list))
    {
        title = "Require Ruby File";
        filter = "Ruby Files|*.rb;*.rbw";
    }
    else
    {
        title = "Include Header File";
        filter = "Header Files|*.;*.h;*.hh;*.hpp;*.hxx";
    }

    if (path.size() && path.back() == '/')
    {
        path.pop_back();
    }

    tt_cwd cwd(true);
    wxFileDialog dialog(this, title.make_wxString(), path.make_wxString(), wxEmptyString,
                        filter.make_wxString(), wxFD_OPEN | wxFD_CHANGE_DIR);
    if (dialog.ShowModal() == wxID_OK)
    {
        tt_string filename = dialog.GetPath().utf8_string();
        filename.make_relative(path);
        filename.backslashestoforward();
        if (filename == cur_file)
        {
            wxMessageBox("You cannot add the current file to the list.", title.make_wxString(),
                         wxOK, this);
            return;
        }
        m_listbox->Append(filename.make_wxString());
        SetButtonsEnableState();
    }
}

void IncludeFilesDialog::OnItemSelected(wxCommandEvent& WXUNUSED(event))
{
    SetButtonsEnableState();
}

void IncludeFilesDialog::OnMoveUp(wxCommandEvent& WXUNUSED(event))
{
    // Move the currently selected item up one position in the listbox
    int sel = m_listbox->GetSelection();
    if (sel == wxNOT_FOUND || sel == 0)
        return;
    const wxString stringTmp = m_listbox->GetString(sel - 1);
    m_listbox->SetString(sel - 1, m_listbox->GetString(sel));
    m_listbox->SetString(sel, stringTmp);
    m_listbox->SetSelection(sel - 1);
    SetButtonsEnableState();
}

void IncludeFilesDialog::OnMoveDown(wxCommandEvent& WXUNUSED(event))
{
    // Move the currently selected item down one position in the listbox
    int sel = m_listbox->GetSelection();
    if (sel == wxNOT_FOUND || static_cast<unsigned int>(sel) == m_listbox->GetCount() - 1)
        return;
    const wxString stringTmp = m_listbox->GetString(sel + 1);
    m_listbox->SetString(sel + 1, m_listbox->GetString(sel));
    m_listbox->SetString(sel, stringTmp);
    m_listbox->SetSelection(sel + 1);
    SetButtonsEnableState();
}

void IncludeFilesDialog::OnRemove(wxCommandEvent& WXUNUSED(event))
{
    if (int sel = m_listbox->GetSelection(); sel != wxNOT_FOUND)
    {
        m_listbox->Delete(sel);
        if (static_cast<unsigned int>(sel) < m_listbox->GetCount())
        {
            m_listbox->SetSelection(sel);
        }
        // Don't disable the OK button, but do disable the other buttons
        SetButtonsEnableState(false);
    }
}

void IncludeFilesDialog::OnSort(wxCommandEvent& WXUNUSED(event))
{
    if (m_listbox->GetCount() < 2)
        return;

    std::vector<std::string> items;
    for (unsigned int i = 0; i < m_listbox->GetCount(); i++)
    {
        items.push_back(m_listbox->GetString(i).utf8_string());
    }
    std::sort(items.begin(), items.end(),
              [](const std::string& a, const std::string& b)
              {
                  return (a.compare(b) < 0);
              });
    m_listbox->Clear();
    for (auto& item: items)
    {
        m_listbox->Append(wxString::FromUTF8(item));
    }
    m_listbox->SetSelection(0);
    SetButtonsEnableState();
}

void IncludeFilesDialog::OnOK(wxCommandEvent& event)
{
    if (m_listbox->GetCount() > 0)
    {
        m_value.clear();
        for (unsigned int i = 0; i < m_listbox->GetCount(); i++)
        {
            if (m_value.size())
                m_value += ";";
            m_value += m_listbox->GetString(i);
        }
    }

    event.Skip();
}
