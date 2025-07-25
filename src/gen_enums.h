/////////////////////////////////////////////////////////////////////////////
// Purpose:   Enumerations for generators
// Author:    Ralph Walden
// Copyright: Copyright (c) 2021-2025 KeyWorks Software (Ralph Walden)
// License:   Apache License -- see ../LICENSE
/////////////////////////////////////////////////////////////////////////////

#pragma once

#include <map>
#include <optional>
#include <string_view>

namespace GenEnum
{
    enum PropType : size_t
    {

        type_animation,
        type_bitlist,
        type_bitmap,
        type_bmp_combo_item,
        type_bool,
        type_checklist_item,
        type_code_edit,      // includes a button that triggers a dialog with a scintilla editor
        type_custom_mockup,  // uses EditCustomMockup dialog
        type_editoption,     // same as option, except that property grid uses wxEditEnumProperty
                             // instead of wxEnumProperty
        type_file,
        type_float,
        type_html_edit,  // includes a button that triggers a dialog with a scintilla editor
        type_id,
        type_include_files,  // Uses custom dialog for editing a list of local or system include
                             // files
        type_image,
        type_int,
        type_option,
        type_path,
        type_radiobox_item,
        type_statbar_fields,
        type_string,

        // "_escapes" makes it possible for the user to include \n, \t, \r, and "\" in the string

        type_string_code_grow_columns,  // uses GridPropertyDlg to edit a list of growable columns
        type_string_code_grow_rows,     // uses GridPropertyDlg to edit a list of growable rows
        type_string_code_cstm_param,    // uses GridPropertyDlg to edit a list of custom parameters
        type_string_code_single,   // includes single-line custom editor, does not process escapes
        type_string_edit,          // includes a button that triggers a small text editor dialog
        type_string_edit_escapes,  // includes editor dialog and also escapes characters
        type_string_edit_single,   // includes single-line text editor, does not process escapes
        type_string_escapes,  // doubles the backslash in escaped characters: \n, \t, \r, and "\""

        // All the stringlist variants use wxArrayStringProperty, but with different separators.
        // All of them include a button to edit/move multiple choices.
        //
        // stringlist uses either quoted strings or strings separated by a semi-colon.
        // stringlist_semi uses ';' as the separator.
        // stringlist_escapes uses uses quoted strings.

        type_stringlist,          // includes button to edit/move multiple choices
        type_stringlist_semi,     // includes button to edit/move multiple choices
        type_stringlist_escapes,  // includes button to edit/move multiple choices

        type_uint,
        type_uintpairlist,
        type_wxColour,
        type_wxFont,
        type_wxPoint,
        type_wxSize,

        type_unknown,

    };
    extern std::map<std::string_view, PropType, std::less<>> umap_PropTypes;

    enum PropName : size_t
    {
        prop_template_description,
        prop_template_directory,
        prop_template_doc_name,
        prop_template_extension,
        prop_template_filter,
        prop_template_view_name,
        prop_template_visible,
        prop_mdi_class_name,
        prop_mdi_doc_name,

        prop_Apply,
        prop_BottomDockable,
        prop_Cancel,
        prop_Close,
        prop_ContextHelp,
        prop_Help,
        prop_LeftDockable,
        prop_No,
        prop_OK,
        prop_RightDockable,
        prop_Save,
        prop_TopDockable,
        prop_Yes,
        prop_add_default_border,
        prop_add_externs,
        prop_additional_carets_blink,
        prop_additional_carets_visible,
        prop_additional_inheritance,
        prop_align,
        prop_alignment,
        prop_allow_mouse_rectangle,
        prop_animation,
        prop_art_directory,
        prop_art_provider,
        prop_aui_layer,
        prop_aui_name,
        prop_aui_position,
        prop_aui_row,
        prop_auth_needed,
        prop_auto_add,
        prop_auto_complete,
        prop_auto_start,
        prop_auto_update,
        prop_automatic_folding,
        prop_autosize_cols,
        prop_autosize_rows,
        prop_background_colour,
        prop_backspace_unindents,
        prop_base_directory,
        prop_base_file,
        prop_base_hdr_includes,
        prop_base_src_includes,
        prop_best_size,
        prop_bitmap,
        prop_bitmapsize,
        prop_bmp_background_colour,
        prop_bmp_min_width,
        prop_bmp_placement,
        prop_book_type,
        prop_border,
        prop_border_size,
        prop_borders,
        prop_buttons,
        prop_cancel_button,
        prop_caption,
        prop_caption_visible,
        prop_cell_bg,
        prop_cell_fit,
        prop_cell_font,
        prop_cell_horiz_alignment,
        prop_cell_text,
        prop_cell_vert_alignment,
        prop_center,
        prop_center_pane,
        prop_checkbox_var_name,
        prop_checked,
        prop_class_access,
        prop_class_decoration,
        prop_class_members,
        prop_class_methods,
        prop_class_name,
        prop_close_button,
        prop_cmake_file,
        prop_cmake_varname,
        prop_code_preference,
        prop_col_label_horiz_alignment,
        prop_col_label_size,
        prop_col_label_values,
        prop_col_label_vert_alignment,
        prop_collapsed,
        prop_colour,
        prop_cols,
        prop_colspan,
        prop_column,
        prop_column_labels,
        prop_column_sizes,
        prop_combine_all_forms,
        prop_combined_xrc_file,
        prop_compiler_standard,
        prop_const_values,
        prop_construction,
        prop_contents,
        prop_context_help,
        prop_context_menu,
        prop_cpp_conditional,
        prop_cpp_line_length,
        prop_current,
        prop_custom_colour,
        prop_custom_margin,
        prop_custom_mask_folders,
        prop_custom_mockup,
        prop_custom_mouse_sensitive,
        prop_custom_type,
        prop_custom_width,
        prop_data_file,
        prop_default,
        prop_default_button,
        prop_default_col_size,
        prop_default_pane,
        prop_default_row_size,
        prop_defaultfilter,
        prop_defaultfolder,
        prop_derived_class,
        prop_derived_class_name,
        prop_derived_directory,
        prop_derived_file,
        prop_derived_header,
        prop_derived_params,
        prop_dialog_units,
        prop_digits,
        prop_direction,
        prop_disable_language,
        prop_disable_rubo_cop,
        prop_disabled,
        prop_disabled_bmp,
        prop_display_images,
        prop_dock,
        prop_dock_fixed,
        prop_docking,
        prop_drag_col_move,
        prop_drag_col_size,
        prop_drag_grid_size,
        prop_drag_row_size,
        prop_duration,
        prop_editing,
        prop_ellipsize,
        prop_empty_cell_size,
        prop_enable_user_code,
        prop_end_colour,
        prop_eol_mode,
        prop_extra_accels,
        prop_extra_style,
        prop_factor,
        prop_fields,
        prop_filter,
        prop_filter_index,
        prop_flag,
        prop_flags,
        prop_flexible_direction,
        prop_floatable,
        prop_focus,
        prop_focus_bmp,
        prop_fold_flags,
        prop_fold_margin,
        prop_fold_marker_colour,
        prop_fold_marker_style,
        prop_fold_width,
        prop_font,
        prop_foreground_colour,
        prop_generate_cmake,
        prop_generate_ids,
        prop_generate_languages,
        prop_generate_translation_unit,
        prop_get_function,
        prop_grid_line_color,
        prop_grid_lines,
        prop_gripper,
        prop_growablecols,
        prop_growablerows,
        prop_handler_name,
        prop_header,
        prop_header_ext,
        prop_header_preamble,
        prop_height,
        prop_help,
        prop_help_provider,
        prop_hexadecimal,
        prop_hgap,
        prop_hidden,
        prop_hide_children,
        prop_hide_effect,
        prop_hint,
        prop_hover_color,
        prop_html_borders,
        prop_html_content,
        prop_html_file,
        prop_html_url,
        prop_icon,
        prop_id,
        prop_id_initial_value,
        prop_id_prefixes,
        prop_id_suffixes,
        prop_image_size,
        prop_import_all_dialogs,
        prop_inactive_bitmap,
        prop_inc,
        prop_include_advanced,
        prop_indentation_guides,
        prop_initial,
        prop_initial_enum_string,
        prop_initial_filename,
        prop_initial_folder,
        prop_initial_font,
        prop_initial_path,
        prop_initial_state,
        prop_inner_border,
        prop_inserted_hdr_code,
        prop_internationalize,
        prop_interval,
        prop_kind,
        prop_label,
        prop_label_bg,
        prop_label_font,
        prop_label_text,
        prop_line_digits,
        prop_line_margin,
        prop_line_numbers,
        prop_line_size,
        prop_local_hdr_includes,
        prop_local_pch_file,
        prop_local_src_includes,
        prop_main_label,
        prop_majorDimension,
        prop_margin_height,
        prop_margin_width,
        prop_margins,
        prop_markup,
        prop_max,
        prop_maxValue,
        prop_max_point_size,
        prop_max_rows,
        prop_max_size,
        prop_maximize_button,
        prop_maximum_size,
        prop_maxlength,
        prop_message,
        prop_min,
        prop_minValue,
        prop_min_pane_size,
        prop_min_point_size,
        prop_min_rows,
        prop_min_size,
        prop_minimize_button,
        prop_minimum_size,
        prop_mockup_size,
        prop_mode,
        prop_model_column,
        prop_moveable,
        prop_multiple_selection_typing,
        prop_multiple_selections,
        prop_name_space,
        prop_namespace,
        prop_native_col_header,
        prop_native_col_labels,
        prop_no_closing_brace,
        prop_no_compression,
        prop_non_flexible_grow_mode,
        prop_non_selected_tab_font,
        prop_normal_color,
        prop_note,
        prop_null_text,
        prop_one_shot,
        prop_optional_comments,
        prop_orientation,
        prop_outer_border,
        prop_output_file,
        prop_packing,
        prop_page_size,
        prop_pagesize,
        prop_pane_border,
        prop_pane_position,
        prop_pane_size,
        prop_parameters,
        prop_paste_multiple,
        prop_persist,
        prop_persist_name,
        prop_pin_button,
        prop_platforms,
        prop_play,
        prop_pos,
        prop_position,
        prop_precision,
        prop_pressed,
        prop_pressed_bmp,
        prop_private_members,
        prop_project_src_includes,
        prop_proportion,
        prop_protected_class_methods,
        prop_python_import_list,
        prop_radiobtn_var_name,
        prop_range,
        prop_read_only,
        prop_resize,
        prop_row,
        prop_row_label_horiz_alignment,
        prop_row_label_size,
        prop_row_label_values,
        prop_row_label_vert_alignment,
        prop_row_sizes,
        prop_rows,
        prop_rowspan,
        prop_ruby_require_all_dialogs,
        prop_sashgravity,
        prop_sashpos,
        prop_sashsize,
        prop_scale_border_size,
        prop_scale_mode,
        prop_scroll_rate_x,
        prop_scroll_rate_y,
        prop_search_button,
        prop_sel_end,
        prop_sel_start,
        prop_select,
        prop_selected_tab_font,
        prop_selection,
        prop_selection_int,
        prop_selection_mode,
        prop_selection_string,
        prop_separation,
        prop_separator_margin,
        prop_separator_width,
        prop_set_function,
        prop_settings_code,
        prop_shortcut,
        prop_show,
        prop_show_effect,
        prop_show_header,
        prop_show_hidden,
        prop_shrink_to_fit,
        prop_size,
        prop_source_ext,
        prop_source_preamble,
        prop_spellcheck,
        prop_splitmode,
        prop_src_preamble,
        prop_start_colour,
        prop_static_line,
        prop_statusbar,
        prop_stc_indentation_size,
        prop_stc_left_margin_width,
        prop_stc_lexer,
        prop_stc_right_margin_width,
        prop_stc_select_wrapped_line,
        prop_stc_wrap_indent_mode,
        prop_stc_wrap_mode,
        prop_stc_wrap_start_indent,
        prop_stc_wrap_visual_flag,
        prop_stc_wrap_visual_location,
        prop_stock_id,
        prop_style,
        prop_subclass,
        prop_subclass_header,
        prop_subclass_params,
        prop_symbol_margin,
        prop_symbol_mouse_sensitive,
        prop_sync_hover_colour,
        prop_system_hdr_includes,
        prop_system_src_includes,
        prop_tab_behaviour,
        prop_tab_height,
        prop_tab_indents,
        prop_tab_position,
        prop_tab_width,
        prop_text,
        prop_theme,
        prop_thumb_length,
        prop_thumbsize,
        prop_tick_frequency,
        prop_title,
        prop_toolbar_pane,
        prop_tooltip,
        prop_type,
        prop_unchecked_bitmap,
        prop_underlined,
        prop_url,
        prop_use_derived_class,
        prop_use_generic,
        prop_use_tabs,
        prop_user_cpp_code,
        prop_validator_data_type,
        prop_validator_style,
        prop_validator_type,
        prop_validator_variable,
        prop_value,
        prop_var_comment,
        prop_var_name,
        prop_variant,
        prop_vgap,
        prop_view_eol,
        prop_view_tab_strikeout,
        prop_view_whitespace,
        prop_visited_color,
        prop_width,
        prop_wildcard,
        prop_window_extra_style,
        prop_window_name,
        prop_window_style,
        prop_wrap,
        prop_wrap_flags,
        prop_wxWidgets_version,
        prop_xml_condensed_format,
        prop_xrc_art_directory,
        prop_xrc_directory,
        prop_xrc_file,
        prop_xrc_add_var_comments,
        prop_xrc_indent_attributes,
        prop_xrc_indent_with_spaces,
        prop_xrc_no_whitespace,

        prop_folder_base_directory,
        prop_folder_derived_directory,
        prop_folder_namespace,
        prop_folder_cmake_file,
        prop_folder_cmake_varname,

        prop_folder_xrc_directory,
        prop_folder_combined_xrc_file,

        prop_folder_python_combined_file,
        prop_folder_python_output_folder,
        prop_python_combine_forms,
        prop_python_combined_file,
        prop_python_conditional,
        prop_python_file,
        prop_python_inherit_name,
        prop_python_insert,
        prop_python_line_length,
        prop_python_output_folder,
        prop_python_project_preamble,
        prop_python_use_xrc,
        prop_python_variable_args,
        prop_python_xrc_file,
        prop_wxPython_version,

        prop_folder_ruby_combined_file,
        prop_folder_ruby_output_folder,
        prop_relative_require_list,
        prop_ruby_combine_forms,
        prop_ruby_combined_file,
        prop_ruby_conditional,
        prop_ruby_file,
        prop_ruby_inherit_name,
        prop_ruby_insert,
        prop_ruby_line_length,
        prop_ruby_output_folder,
        prop_ruby_project_preamble,
        prop_wxRuby_version,

        prop_folder_fortran_output_folder,
        prop_fortran_conditional,
        prop_fortran_file,
        prop_fortran_inherit_name,
        prop_fortran_insert,
        prop_fortran_line_length,
        prop_fortran_output_folder,
        prop_fortran_project_preamble,
        prop_wxFortran_version,

        prop_folder_haskell_output_folder,
        prop_haskell_conditional,
        prop_haskell_file,
        prop_haskell_inherit_name,
        prop_haskell_insert,
        prop_haskell_line_length,
        prop_haskell_output_folder,
        prop_haskell_project_preamble,
        prop_wxHaskell_version,

        prop_folder_lua_output_folder,
        prop_lua_conditional,
        prop_lua_file,
        prop_lua_inherit_name,
        prop_lua_insert,
        prop_lua_line_length,
        prop_lua_output_folder,
        prop_lua_project_preamble,
        prop_wxLua_version,

        prop_folder_perl_combined_file,
        prop_folder_perl_output_folder,
        prop_perl_conditional,
        prop_perl_file,
        prop_perl_inherit_name,
        prop_perl_insert,
        prop_perl_line_length,
        prop_perl_output_folder,
        prop_perl_project_preamble,
        prop_wxPerl_version,

        prop_folder_rust_output_folder,
        prop_rust_conditional,
        prop_rust_file,
        prop_rust_inherit_name,
        prop_rust_insert,
        prop_rust_line_length,
        prop_rust_output_folder,
        prop_rust_project_preamble,
        prop_wxRust_version,

        // This must always be the last item as it is used to calculate the array size needed to
        // store all items
        prop_name_array_size,
        prop_unknown = prop_name_array_size,
        prop_processed  // special value used by some importers
    };
    extern std::map<GenEnum::PropName, const char*> map_PropNames;
    extern std::map<GenEnum::PropName, const char*> map_PropHelp;
    extern std::map<std::string_view, GenEnum::PropName, std::less<>> rmap_PropNames;
    inline GenEnum::PropName FindProp(std::string_view name)
    {
        if (auto result = rmap_PropNames.find(name); result != rmap_PropNames.end())
            return result->second;
        else
            return prop_unknown;
    }

    // Given a prop_ name, this will return the actual string used in the XRC file.
    inline std::optional<tt_string_view> GetPropStringName(PropName prop_name)
    {
        if (auto result = map_PropNames.find(prop_name); result != map_PropNames.end())
            return result->second;
        else
            return {};
    }

    enum GenType : size_t
    {

        type_aui_tool,
        type_aui_toolbar,
        type_aui_toolbar_form,
        type_auinotebook,
        type_bookpage,
        type_choicebook,
        type_container,
        type_ctx_menu,
        type_data_folder,
        type_data_list,
        type_data_string,
        type_dataviewcolumn,
        type_dataviewctrl,
        type_dataviewlistcolumn,
        type_dataviewlistctrl,
        type_dataviewtreectrl,
        type_embed_image,
        type_folder,
        type_form,
        type_frame_form,
        type_gbsizer,
        type_gbsizeritem,
        type_images,
        type_interface,
        type_listbook,
        type_menu,
        type_menubar,
        type_menubar_form,
        type_menuitem,
        type_notebook,
        type_oldbookpage,
        type_page,
        type_panel,
        type_panel_form,
        type_popup_menu,
        type_project,
        type_propgrid,
        type_propgrid_category,  // This is for a propGridItem used as a category
        type_propgriditem,
        type_propgridman,
        type_propgridpage,
        type_propsheetform,
        type_ribbonbar,
        type_ribbonbar_form,
        type_ribbonbutton,
        type_ribbonbuttonbar,
        type_ribbongallery,
        type_ribbongalleryitem,
        type_ribbonpage,
        type_ribbonpanel,
        type_ribbontool,
        type_ribbontoolbar,
        type_simplebook,
        type_sizer,
        type_sizeritem,
        type_splitter,
        type_splitteritem,
        type_staticbox,
        type_statusbar,
        type_sub_folder,
        type_submenu,
        type_timer,
        type_tool,
        type_tool_dropdown,
        type_tool_separator,
        type_toolbar,
        type_toolbar_form,
        type_treelistctrl,
        type_treelistctrlcolumn,
        type_widget,
        type_wizard,
        type_wizardpagesimple,

        type_DocViewApp,
        type_wx_document,
        type_mdi_menubar,
        type_doc_menubar,
        type_wx_view,

        // This must always be the last item as it is used to calculate the array size needed to
        // store all items
        gen_type_array_size,
        gen_type_unknown = gen_type_array_size
    };
    extern std::map<GenType, std::string_view> map_GenTypes;

    enum GenName : size_t
    {

        // Note that this list not only includes all the top level generators, but also the
        // interface generators that a top level generator can include as part of it's declaration.

        gen_AUI = 0,

        // The following are categories (type="interface")

        gen_Bitmaps,
        gen_Boolean_Validator,
        gen_Choice_Validator,
        gen_Code_Generation,
        gen_Command_Bitmaps,
        gen_DlgWindowSettings,
        gen_Integer_Validator,
        gen_List_Validator,
        gen_String_Validator,
        gen_Text_Validator,
        gen_Window_Events,
        gen_XrcSettings,
        gen_flexgridsizerbase,
        gen_folder_Code,
        gen_folder_XRC,
        gen_folder_wxPerl,
        gen_folder_wxPython,
        gen_folder_wxRuby,
        gen_sizer_child,
        gen_sizeritem_settings,
        gen_wxTopLevelWindow,
        gen_wxTreeCtrlBase,
        gen_wxWindow,

        // Language categories

        gen_Code,
        gen_wxPython,
        gen_wxRuby,
        gen_XRC,
        gen_wxFortran,
        gen_wxHaskell,
        gen_wxLua,
        gen_wxPerl,
        gen_wxRust,

        gen_LanguageSettings,  // Using this will pull in all the language settings

        gen_CPlusSettings,
        gen_DerivedCPlusSettings,
        gen_CPlusHeaderSettings,
        gen_FortranSettings,
        gen_HaskellSettings,
        gen_LuaSettings,
        gen_PerlSettings,
        gen_RustSettings,
        gen_PythonSettings,
        gen_RubySettings,

        // These are special purpose generators. gen_Images is used for code, but gen_folder is
        // just for organtizing forms in the Navigation panel.

        gen_Data,
        gen_Images,
        gen_data_folder,
        gen_data_string,
        gen_data_xml,
        gen_embedded_image,
        gen_folder,
        gen_sub_folder,

        // Note all gen_ values from gen_wxMdiWindow gen_name_array_size are bound to the Add menu
        // items.

        // These are for DocViewApp

        gen_wxMdiWindow,
        gen_DocViewApp,
        gen_MdiFrameMenuBar,
        gen_MdiDocMenuBar,
        gen_DocumentTextCtrl,
        gen_ViewTextCtrl,

        // The following are the rergular generators

        gen_AuiToolBar,
        gen_BookPage,
        gen_Check3State,
        gen_CloseButton,
        gen_CustomControl,
        gen_MenuBar,
        gen_PageCtrl,
        gen_PanelForm,
        gen_PopupMenu,
        gen_Project,
        gen_RibbonBar,  // form version of wxRibbonBar
        gen_StaticCheckboxBoxSizer,
        gen_StaticRadioBtnBoxSizer,
        gen_TextSizer,
        gen_ToolBar,
        gen_TreeListCtrlColumn,
        gen_UserCode,
        gen_VerticalBoxSizer,
        gen_auitool,
        gen_auitool_label,
        gen_auitool_spacer,
        gen_auitool_stretchable,
        gen_dataViewColumn,
        gen_dataViewListColumn,
        gen_gbsizeritem,
        gen_oldbookpage,
        gen_propGridCategory,
        gen_propGridItem,
        gen_propGridPage,
        gen_ribbonButton,
        gen_ribbonGalleryItem,
        gen_ribbonSeparator,
        gen_ribbonTool,
        gen_separator,
        gen_sizer_dimension,
        gen_sizeritem,
        gen_spacer,
        gen_splitteritem,
        gen_submenu,
        gen_tool,
        gen_tool_dropdown,
        gen_toolSeparator,
        gen_toolStretchable,
        gen_wxActivityIndicator,
        gen_wxAnimationCtrl,
        gen_wxAuiNotebook,
        gen_wxAuiToolBar,
        gen_wxBannerWindow,
        gen_wxBitmapComboBox,
        gen_wxBitmapToggleButton,
        gen_wxBoxSizer,
        gen_wxButton,
        gen_wxCalendarCtrl,
        gen_wxCheckBox,
        gen_wxCheckListBox,
        gen_wxChoice,
        gen_wxChoicebook,
        gen_wxCollapsiblePane,
        gen_wxColourPickerCtrl,
        gen_wxComboBox,
        gen_wxCommandLinkButton,
        gen_wxContextHelpButton,
        gen_wxContextMenuEvent,
        gen_wxDataViewCtrl,
        gen_wxDataViewListCtrl,
        gen_wxDataViewTreeCtrl,
        gen_wxDatePickerCtrl,
        gen_wxDialog,
        gen_wxDirPickerCtrl,
        gen_wxEditableListBox,
        gen_wxFileCtrl,
        gen_wxFilePickerCtrl,
        gen_wxFlexGridSizer,
        gen_wxFontPickerCtrl,
        gen_wxFrame,
        gen_wxGauge,
        gen_wxGenericDirCtrl,
        gen_wxGrid,
        gen_wxGridBagSizer,
        gen_wxGridSizer,
        gen_wxHtmlWindow,
        gen_wxHyperlinkCtrl,
        gen_wxInfoBar,
        gen_wxListBox,
        gen_wxListView,
        gen_wxListbook,
        gen_wxMenu,
        gen_wxMenuBar,
        gen_wxMenuItem,
        gen_wxNotebook,
        gen_wxPanel,
        gen_wxPopupTransientWindow,
        gen_wxPopupWindow,
        gen_wxPropertyGrid,
        gen_wxPropertyGridManager,
        gen_wxPropertySheetDialog,
        gen_wxRadioBox,
        gen_wxRadioButton,
        gen_wxRearrangeCtrl,
        gen_wxRibbonBar,
        gen_wxRibbonButtonBar,
        gen_wxRibbonGallery,
        gen_wxRibbonPage,
        gen_wxRibbonPanel,
        gen_wxRibbonToolBar,
        gen_wxRichTextCtrl,
        gen_wxScrollBar,
        gen_wxScrolledCanvas,
        gen_wxScrolledWindow,
        gen_wxSearchCtrl,
        gen_wxSimpleHtmlListBox,
        gen_wxSimplebook,
        gen_wxSlider,
        gen_wxSpinButton,
        gen_wxSpinCtrl,
        gen_wxSpinCtrlDouble,
        gen_wxSplitterWindow,
        gen_wxStaticBitmap,
        gen_wxStaticBox,
        gen_wxStaticBoxSizer,
        gen_wxStaticLine,
        gen_wxStaticText,
        gen_wxStatusBar,
        gen_wxStdDialogButtonSizer,
        gen_wxStyledTextCtrl,
        gen_wxTextCtrl,
        gen_wxTimePickerCtrl,
        gen_wxTimer,
        gen_wxToggleButton,
        gen_wxToolBar,
        gen_wxToolbook,
        gen_wxTreeCtrl,
        gen_wxTreeListCtrl,
        gen_wxTreebook,
        gen_wxWebView,
        gen_wxWizard,
        gen_wxWizardPageSimple,
        gen_wxWrapSizer,

        gen_wxDocParentFrame,
        gen_wxDocChildFrame,

        gen_wxDocMDIParentFrame,
        gen_wxDocMDIChildFrame,

        gen_wxAuiMDIParentFrame,
        gen_wxAuiMDIChildFrame,

        // This must always be the last item as it is used to calculate the array size needed to
        // store all items
        gen_name_array_size,
        gen_unknown = gen_name_array_size,

        // This is not an actual generator, but is used by NavigationPanel
        gen_svg_embedded_image,

    };
    extern std::map<GenEnum::GenName, const char*> map_GenNames;

}  // namespace GenEnum

extern std::map<GenEnum::PropName, const char*> map_PropMacros;
extern std::map<std::string_view, GenEnum::PropName, std::less<>> map_MacroProps;
extern std::map<std::string_view, GenEnum::GenName, std::less<>> rmap_GenNames;
