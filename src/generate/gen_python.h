/////////////////////////////////////////////////////////////////////////////
// Purpose:   Generate wxPython code
// Author:    Ralph Walden
// Copyright: Copyright (c) 2024-2025 KeyWorks Software (Ralph Walden)
// License:   Apache License -- see ../../LICENSE
/////////////////////////////////////////////////////////////////////////////

#include "gen_base.h"  // BaseCodeGenerator

class PythonCodeGenerator : public BaseCodeGenerator
{
public:
    PythonCodeGenerator(Node* form_node);

    // All language generators must implement this method.
    void GenerateClass(PANEL_PAGE panel_type = NOT_PANEL) override;

protected:
    // This function simply generates unhandled event handlers in a multi-string comment.
    void GenUnhandledEvents(EventVector& events);

    void GenerateImagesForm();

    void WriteImageImportStatements(Code& code);
};
