/////////////////////////////////////////////////////////////////////////////
// Purpose:   Import a wxFormBuider project
// Author:    Ralph Walden
// Copyright: Copyright (c) 2019-2025 KeyWorks Software (Ralph Walden)
// License:   Apache License -- see ../../LICENSE
/////////////////////////////////////////////////////////////////////////////

#pragma once

class Node;

#include "import_xml.h"  // ImportXML -- Base class for XML importing

class wxImage;

using ImportNameMap = std::unordered_map<std::string, const char*>;

class FormBuilder : public ImportXML
{
public:
    FormBuilder() {};
    ~FormBuilder() {};

    bool Import(const tt_string& filename, bool write_doc = true) override;
    NodeSharedPtr CreateFbpNode(pugi::xml_node& xml_prop, Node* parent, Node* sizeritem = nullptr);

protected:
    void ConvertNameSpaceProp(NodeProperty* prop, std::string_view org_names);

    // Called when a property is unknown and has a value set.
    void ProcessPropValue(pugi::xml_node& xml_prop, tt_string_view prop_name,
                          tt_string_view class_name, Node* newobject, Node* parent);

    void BitmapProperty(pugi::xml_node& xml_obj, NodeProperty* prop);
    void createProjectNode(pugi::xml_node& xml_obj, Node* new_node);

private:
    tt_string m_embedPath;
    tt_string m_eventGeneration;
    tt_string m_baseFile;
    tt_string m_class_decoration;

    int m_VerMinor { 0 };
};
