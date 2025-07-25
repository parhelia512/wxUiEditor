/////////////////////////////////////////////////////////////////////////////
// Purpose:   Derived wxStringProperty class for single-line text
// Author:    Ralph Walden
// Copyright: Copyright (c) 2021-2023 KeyWorks Software (Ralph Walden)
// License:   Apache License -- see ../../LICENSE
/////////////////////////////////////////////////////////////////////////////

#include <wx/propgrid/propgrid.h>  // wxPropertyGrid

#include "txt_string_prop.h"

#include "node_prop.h"       // NodeProperty class
#include "tt_view_vector.h"  // tt_view_vector -- Read/Write line-oriented strings/files
#include "utils.h"           // Miscellaneous utility functions

#include "wxui/editstringdialog_base.h"  // auto-generated: wxui/editstringdialog_base.cpp

EditStringProperty::EditStringProperty(const wxString& label, NodeProperty* prop) :
    wxStringProperty(label, wxPG_LABEL, prop->as_wxString()), m_prop(prop)
{
}

class EditStringDialog : public EditStringDialogBase
{
public:
    EditStringDialog(wxWindow* parent, NodeProperty* prop) : EditStringDialogBase(parent)
    {
        SetTitle(tt_string() << prop->declName() << " property editor");
        if (prop->isProp(prop_bitmap))
        {
            tt_view_vector mstr(prop->as_string(), ';', tt::TRIM::both);
            m_value.clear();
            if (mstr.size() > IndexImage)
            {
                if (auto result = FileNameToVarName(mstr[IndexImage].filename()); result)
                {
                    m_textCtrl->SetHint(result->make_wxString());
                }
            }
            // With wxWidgets 3.2.0, calling m_textCtrl->SetFocus(); in
            // EditStringDialogBase::Create() doesn't work, so we call it again here.
            m_textCtrl->SetFocus();
            // Now that m_static_hdr_text is visible, we need to fit the dialog to the new size
            Fit();
        }
        else
        {
            m_value = prop->as_wxString();
        }
    };
};

bool EditStringDialogAdapter::DoShowDialog(wxPropertyGrid* propGrid,
                                           wxPGProperty* WXUNUSED(property))
{
    EditStringDialog dlg(propGrid->GetPanel(), m_prop);
    if (dlg.ShowModal() == wxID_OK)
    {
        SetValue(dlg.GetResults());
        return true;
    }

    return false;
}
