# Contents

The following tables indicate whether or not code is being generated in a specific language.

- `---` indicates it has not been verified or not implemented yet.
- `no` indcates that the language doesn't support it.
- `partial` means that not all properties for the control are supported.

## Categories

### Bars

| Class                | C++ | Perl    | Python | Ruby | XRC | file                                  |
| -------------------- | --- | ------- | ------ | ---- | --- | ------------------------------------- |
| wxAuiToolBar         | yes | ---     | yes    | yes  | yes | ../src/generate/gen_aui_toolbar.cpp   |
| AuiTool              | yes | ---     | yes    | yes  | yes | ../src/generate/gen_aui_toolbar.cpp   |
| AuiToolLabel         | yes | ---     | yes    | yes  | yes | ../src/generate/gen_aui_toolbar.cpp   |
| AuiToolSpacer        | yes | ---     | yes    | yes  | yes | ../src/generate/gen_aui_toolbar.cpp   |
| AuiToolStretchSpacer | yes | ---     | yes    | yes  | yes | ../src/generate/gen_aui_toolbar.cpp   |
| wxInfoBar            | yes | ---     | ---    | ---  | yes | ../src/generate/gen_infobar.cpp       |
| wxMenu               | yes | yes     | yes    | yes  | --- | ../src/generate/gen_menu.cpp          |
| wxMenuBar            | yes | yes     | yes    | yes  | --- | ../src/generate/menu_widgets.cpp      |
| wxMenuItem           | yes | yes     | yes    | yes  | --- | ../src/generate/gen_menuitem.cpp      |
| SubMenu              | yes | ---     | ---    | ---  | --- | ../src/generate/gen_submenu.cpp       |
| wxRibbonBar          | yes | ---     | yes    | yes  | --- | ../src/generate/gen_ribbon_bar.cpp    |
| wxRibbonButtonBar    | yes | ---     | yes    | yes  | --- | ../src/generate/gen_ribbon_button.cpp |
| wxRibbonGallery      | yes | ---     | yes    | yes  | --- | ../src/generate/ribbon_widgets.cpp    |
| wxRibbonToolBar      | yes | ---     | yes    | yes  | --- | ../src/generate/ribbon_widgets.cpp    |
| RibbonButton         | yes | ---     | yes    | yes  | --- | ../src/generate/ribbon_widgets.cpp    |
| RibbonGalleryItem    | yes | ---     | yes    | yes  | --- | ../src/generate/ribbon_widgets.cpp    |
| RibbonTool           | yes | ---     | yes    | yes  | --- | ../src/generate/ribbon_widgets.cpp    |
| wxRibbonPage         | yes | ---     | yes    | yes  | --- | ../src/generate/gen_ribbon_page.cpp   |
| wxRibbonPanel        | yes | ---     | yes    | yes  | --- | ../src/generate/gen_ribbon_page.cpp   |
| wxScrollBar          | yes | ---     | yes    | yes  | yes | ../src/generate/gen_scrollbar.cpp     |
| wxStatusBar          | yes | partial | yes    | yes  | yes | ../src/generate/gen_status_bar.cpp    |
| wxToolBar            | yes | ---     | yes    | yes  | yes | ../src/generate/gen_toolbar.cpp       |
| ToolDropDown         | yes | ---     | ---    | ---  | --- | ../src/generate/gen_toolbar.cpp       |
| ToolGenerator        | yes | ---     | ---    | ---  | --- | ../src/generate/gen_toolbar.cpp       |
| ToolSeparator        | yes | ---     | ---    | ---  | --- | ../src/generate/gen_toolbar.cpp       |
| ToolStretchable      | yes | ---     | ---    | ---  | --- | ../src/generate/gen_toolbar.cpp       |
| Separator            | yes | yes     | ---    | ---  | --- | ../src/generate/menu_widgets.cpp      |

### Books

| Class         | C++ | Perl | Python | Ruby | XRC | file                                 |
| ------------- | --- | ---- | ------ | ---- | --- | ------------------------------------ |
| wxAuiNotebook | yes | ---  | yes    | yes  | --- | ../src/generate/gen_aui_notebook.cpp |
| wxChoicebook  | yes | ---  | yes    | yes  | --- | ../src/generate/gen_choicebook.cpp   |
| wxListbook    | yes | ---  | yes    | yes  | --- | ../src/generate/gen_listbook.cpp     |
| wxNotebook    | yes | ---  | yes    | yes  | yes | ../src/generate/gen_notebook.cpp     |
| wxSimplebook  | yes | ---  | yes    | yes  | --- | ../src/generate/gen_simplebook.cpp   |
| wxToolbook    | yes | ---  | yes    | yes  | --- | ../src/generate/gen_toolbook.cpp     |
| wxTreebook    | yes | ---  | yes    | yes  | yes | ../src/generate/gen_treebook.cpp     |

### Forms

| Class                  | C++ | Perl | Python | Ruby | XRC | file                                    |
| ---------------------- | --- | ---- | ------ | ---- | --- | --------------------------------------- |
| wxDialog               | yes | ---  | yes    | yes  | yes | ../src/generate/gen_dialog.cpp          |
| wxFrame                | yes | yes  | yes    | yes  | yes | ../src/generate/gen_frame.cpp           |
| wxMenu                 | yes | ---  | yes    | ---  | --- | ../src/generate/menu_widgets.cpp        |
| wxMenuBar              | yes | ---  | yes    | ---  | --- | ../src/generate/menu_widgets.cpp        |
| wxPanel                | yes | yes  | yes    | ---  | --- | ../src/generate/gen_panel_form.cpp      |
| wxPopupTransientWindow | yes | ---  | yes    | yes  | no  | ../src/generate/gen_popup_trans_win.cpp |
| wxRibbonBar            | yes | ---  | yes    | ---  | --- | ../src/generate/gen_ribbon_bar.cpp      |
| wxToolBar              | yes | ---  | yes    | ---  | --- | ../src/generate/gen_toolbar.cpp         |
| wxWizard               | yes | ---  | yes    | yes  | yes | ../src/generate/gen_wizard.cpp          |

### Pickers

| Class              | C++ | Perl | Python | Ruby | XRC | file                                |
| ------------------ | --- | ---- | ------ | ---- | --- | ----------------------------------- |
| wxColourPickerCtrl | yes | ---  | yes    | yes  | yes | ../src/generate/gen_clr_picker.cpp  |
| wxDatePickerCtrl   | yes | ---  | yes    | yes  | yes | ../src/generate/gen_date_picker.cpp |
| wxDirPickerCtrl    | yes | ---  | yes    | yes  | yes | ../src/generate/gen_dir_picker.cpp  |
| wxFilePickerCtrl   | yes | ---  | yes    | yes  | yes | ../src/generate/gen_file_picker.cpp |
| wxFontPickerCtrl   | yes | ---  | yes    | yes  | yes | ../src/generate/gen_font_picker.cpp |
| wxTimePickerCtrl   | yes | ---  | yes    | yes  | yes | ../src/generate/gen_time_picker.cpp |

### Sizers

| Class                    | C++ | Perl | Python | Ruby | XRC     | file                                       |
| ------------------------ | --- | ---- | ------ | ---- | ------- | ------------------------------------------ |
| wxBoxSizer               | yes | yes  | yes    | yes  | yes     | ../src/generate/gen_box_sizer.cpp          |
| wxCheckBoxSizer          | yes | ---  | no     | yes  | ---     | ../src/generate/gen_statchkbox_sizer.cpp   |
| wxFlexGridSizer          | yes | ---  | yes    | yes  | yes     | ../src/generate/gen_flexgrid_sizer.cpp     |
| wxGridBagSizer           | yes | ---  | yes    | yes  | yes     | ../src/generate/gen_gridbag_sizer.cpp      |
| wxGridSizer              | yes | ---  | yes    | yes  | yes     | ../src/generate/gen_grid_sizer.cpp         |
| wxStaticRadioBtnBoxSizer | yes | ---  | no     | yes  | ---     | ../src/generate/gen_statradiobox_sizer.cpp |
| wxStaticBoxSizer         | yes | ---  | yes    | yes  | yes     | ../src/generate/gen_staticbox_sizer.cpp    |
| wxStdDialogButtonSizer   | yes | ---  | yes    | yes  | partial | ../src/generate/gen_std_dlgbtn_sizer.cpp   |
| wxWrapSizer              | yes | ---  | yes    | yes  | yes     | ../src/generate/gen_wrap_sizer.cpp         |

### Other

| Class                  | C++ | Perl    | Python  | Ruby | XRC     | file                                  |
| ---------------------- | --- | ------- | ------- | ---- | ------- | ------------------------------------- |
| wxActivityIndicator    | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_activity.cpp      |
| wxAnimationCtrl        | yes | ---     | ---     | yes  | ---     | ../src/generate/gen_animation.cpp     |
| wxBannerWindow         | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_banner_window.cpp |
| wxBitmapComboBox       | --- | ---     | ---     | ---  | ---     | ../src/generate/gen_bitmap_combo.cpp  |
| wxButton               | yes | ---     | yes     | yes  | partial | ../src/generate/gen_button.cpp        |
| wxCalendarCtrl         | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_calendar_ctrl.cpp |
| wxCheckBox             | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_checkbox.cpp      |
| wxCheckListBox         | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_check_listbox.cpp |
| wxChoice               | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_choice.cpp        |
| wxCollapsiblePane      | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_collapsible.cpp   |
| wxComboBox             | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_combobox.cpp      |
| wxCommandLinkButton    | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_cmd_link_btn.cpp  |
| wxDataViewListCtrl     | yes | ---     | yes     | no   | no      | ../src/generate/dataview_widgets.cpp  |
| wxDataViewCtrl         | yes | ---     | yes     | no   | no      | ../src/generate/dataview_widgets.cpp  |
| wxEditableListBox      | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_edit_listbox.cpp  |
| wxFileCtrl             | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_file_ctrl.cpp     |
| wxGauge                | yes | ---     | yes     | yes  | ---     | ../src/generate/gen_gauge.cpp         |
| wxGenericDirCtrl       | yes | ---     | partial | yes  | partial | ../src/generate/gen_dir_ctrl.cpp      |
| wxGrid                 | yes | ---     | yes     | yes  | no      | ../src/generate/gen_grid.cpp          |
| wxHtmlWindow           | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_html_window.cpp   |
| wxHyperlinkCtrl        | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_hyperlink.cpp     |
| wxListBox              | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_listbox.cpp       |
| wxListView             | yes | ---     | yes     | yes  | partial | ../src/generate/gen_listview.cpp      |
| wxPanel                | yes | yes     | yes     | yes  | yes     | ../src/generate/gen_panel.cpp         |
| wxPropertyGrid         | yes | ---     | yes     | yes  | no      | ../src/generate/gen_prop_grid.cpp     |
| wxPropertyGridManager  | yes | ---     | yes     | yes  | no      | ../src/generate/grid_widgets.cpp      |
| wxPropertySheetDialog  | no  | ---     | no      | no   | no      | ../src/generate/gen_propsheet_dlg.cpp |
| wxRadioBox             | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_prop_grid.cpp     |
| wxRadioButton          | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_radio_btn.cpp     |
| wxRearrangeCtrl        | yes | ---     | yes     | yes  | no      | ../src/generate/gen_rearrange.cpp     |
| wxRichTextCtrl         | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_rich_text.cpp     |
| wxScrolled\<wxPanel\>  | yes | ---     | yes     | yes  | ---     | ../src/generate/window_widgets.cpp    |
| wxScrolled\<wxWindow\> | yes | ---     | yes     | yes  | ---     | ../src/generate/window_widgets.cpp    |
| wxSearchCtrl           | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_search_ctrl.cpp   |
| wxSimpleHtmlListBox    | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_html_listbox.cpp  |
| wxSlider               | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_slider.cpp        |
| wxSpinButton           | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_spin_btn.cpp      |
| wxSpinCtrl             | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_spin_ctrl.cpp     |
| wxSpinCtrlDouble       | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_spin_ctrl.cpp     |
| wxSplitterWindow       | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_split_win.cpp     |
| wxStaticBitmap         | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_static_bmp.cpp    |
| wxStaticBox            | yes | ---     | ---     | ---  | ---     | ../src/generate/gen_static_box.cpp    |
| wxStaticLine           | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_static_line.cpp   |
| wxStaticText           | yes | partial | yes     | yes  | yes     | ../src/generate/gen_static_text.cpp   |
| wxStyledTextCtrl       | yes | ---     | partial | yes  | partial | ../src/generate/styled_text.cpp       |
| wxTextCtrl             | yes | yes     | yes     | yes  | yes     | ../src/generate/gen_text_ctrl.cpp     |
| wxToggleButton         | yes | ---     | yes     | yes  | partial | ../src/generate/gen_toggle_btn.cpp    |
| wxTreeCtrl             | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_tree_ctrl.cpp     |
| wxTreeListCtrl         | yes | ---     | no      | no   | no      | ../src/generate/gen_tree_list.cpp     |
| wxWebView              | yes | ---     | yes     | no   | no      | ../src/generate/gen_web_view.cpp      |
| wxWizardPageSimple     | yes | ---     | yes     | yes  | yes     | ../src/generate/gen_wizard.cpp        |

# Objects

| Class              | C++ | Perl | Python | Ruby | XRC | file                                 |
| ------------------ | --- | ---- | ------ | ---- | --- | ------------------------------------ |
| BookPage           | yes | ---  | yes    | yes  | yes | ../src/generate/gen_book_page.cpp    |
| Check3State        | yes | ---  | ---    | ---  | --- | ../src/generate/gen_checkbox.cpp     |
| CustomControl      | yes | ---  | no     | ---  | --- | ../src/generate/gen_custom_ctrl.cpp  |
| DataViewColumn     | yes | ---  | yes    | no   | no  | ../src/generate/dataview_widgets.cpp |
| DataViewListColumn | yes | ---  | ---    | ---  | --- | ../src/generate/dataview_widgets.cpp |
| NewCloseButton     | yes | ---  | yes    | yes  | yes | ../src/generate/gen_close_btn.cpp    |
| PageCtrl           | yes | ---  | ---    | ---  | no  | ../src/generate/gen_page_ctrl.cpp    |
| PropertyGridItem   | yes | ---  | yes    | ---  | no  | ../src/generate/gen_prop_item.cpp    |
| PropertyGridPage   | yes | ---  | yes    | ---  | no  | ../src/generate/grid_widgets.cpp     |
| Spacer             | yes | ---  | ---    | ---  | --- | ../src/generate/gen_spacer_sizer.cpp |
| TreeListCtrlColumn | yes | ---  | ---    | ---  | no  | ../src/generate/gen_tree_list.cpp    |
| wxContextMenuEvent | yes | ---  | no     | ---  | no  | ../src/generate/gen_ctx_menu.cpp     |

# Special Notes:

Neither wxPython nor XRC support setting the initial folder in wxGenericDirCtrl, though it works fine in wxRuby3

The Unsupported lists below are for controls that the language port doesn't support.

# Python Unsupported

- CheckBoxSizer
- RadioBoxSizer
- wxTreeListCtrl
- wxTextProofOptions (for wxTextCtrl)

# Perl Unsupported

- wxStatusBar doesn't support wxSB_SUNKEN style, and it doesn't appear to allow more than one field.
- wxSizerFlags
- wxStaticText.SetLabelMarkup()
- wxTextCtrl.SetHint()
- wxTextProofOptions (for wxTextCtrl)
- wxWindow.FromDIP()

# Ruby Unsupported

- wxBannerWindow
- wxInfoBar
- wxRearrangeCtrl
- wxSpinCtrlDouble
- wxWebView
- wxWrapSizer
- wxCommandLinkButton

- wxDataViewListCtrl
- wxDataViewCtrl
- DataViewColumn
- DataViewListColumn
- wxTreeListCtrl
