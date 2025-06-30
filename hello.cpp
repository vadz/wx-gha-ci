#include <wx/wx.h>

class HelloWorldFrame : public wxFrame {
public:
    HelloWorldFrame() : wxFrame(nullptr, wxID_ANY, "Hello World in wxWidgets") {
        auto panel = new wxPanel(this, wxID_ANY);
        auto sizer = new wxBoxSizer(wxVERTICAL);
        panel->SetSizer(sizer);

        sizer->AddStretchSpacer();
        auto label = new wxStaticText(panel, wxID_ANY,
            wxString::Format("Hello from %s!", wxVERSION_STRING)
        );
        sizer->Add(label, wxSizerFlags().Center().Border(wxALL, 10));
        sizer->AddStretchSpacer();
    }
};

class HelloWorldApp : public wxApp {
public:
    virtual bool OnInit() {
        HelloWorldFrame* frame = new HelloWorldFrame();
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(HelloWorldApp);
