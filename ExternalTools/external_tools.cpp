//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: external_tools.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "external_tools.h"

// Declare the bitmap loading function
extern void wxC403FInitBitmapResources();

static bool bBitmapLoaded = false;

ExternalToolBaseDlg::ExternalToolBaseDlg(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos,
                                         const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC403FInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* bSizer6 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer6);

    wxBoxSizer* bSizer8 = new wxBoxSizer(wxHORIZONTAL);

    bSizer6->Add(bSizer8, 1, wxEXPAND, WXC_FROM_DIP(5));

    m_dvListCtrlTools = new clThemedListCtrl(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(300, 200)),
                                             wxDV_ROW_LINES | wxDV_SINGLE);

    bSizer8->Add(m_dvListCtrlTools, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_dvListCtrlTools->AppendTextColumn(_("ID"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                        wxDATAVIEW_COL_RESIZABLE);
    m_dvListCtrlTools->AppendTextColumn(_("Name"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                        wxDATAVIEW_COL_RESIZABLE);
    m_dvListCtrlTools->AppendTextColumn(_("Path"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                        wxDATAVIEW_COL_RESIZABLE);
    wxBoxSizer* bSizer9 = new wxBoxSizer(wxVERTICAL);

    bSizer8->Add(bSizer9, 0, 0, WXC_FROM_DIP(5));

    m_buttonNewTool = new wxButton(this, wxID_ANY, _("New..."), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    bSizer9->Add(m_buttonNewTool, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_buttonEdit = new wxButton(this, wxID_ANY, _("Edit..."), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    bSizer9->Add(m_buttonEdit, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_buttonDelete =
        new wxButton(this, wxID_ANY, _("Delete..."), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    bSizer9->Add(m_buttonDelete, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_stdBtnSizer2 = new wxStdDialogButtonSizer();

    bSizer6->Add(m_stdBtnSizer2, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(5));

    m_button4 = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_button4->SetDefault();
    m_stdBtnSizer2->AddButton(m_button4);

    m_button6 = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stdBtnSizer2->AddButton(m_button6);
    m_stdBtnSizer2->Realize();

    SetName(wxT("ExternalToolBaseDlg"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_dvListCtrlTools->Connect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED,
                               wxDataViewEventHandler(ExternalToolBaseDlg::OnItemActivated), NULL, this);
    m_buttonNewTool->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ExternalToolBaseDlg::OnButtonNew),
                             NULL, this);
    m_buttonNewTool->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(ExternalToolBaseDlg::OnButtonNewUI), NULL, this);
    m_buttonEdit->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ExternalToolBaseDlg::OnButtonEdit), NULL,
                          this);
    m_buttonEdit->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(ExternalToolBaseDlg::OnButtonEditUI), NULL, this);
    m_buttonDelete->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ExternalToolBaseDlg::OnButtonDelete),
                            NULL, this);
    m_buttonDelete->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(ExternalToolBaseDlg::OnButtonDeleteUI), NULL, this);
}

ExternalToolBaseDlg::~ExternalToolBaseDlg()
{
    m_dvListCtrlTools->Disconnect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED,
                                  wxDataViewEventHandler(ExternalToolBaseDlg::OnItemActivated), NULL, this);
    m_buttonNewTool->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ExternalToolBaseDlg::OnButtonNew),
                                NULL, this);
    m_buttonNewTool->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(ExternalToolBaseDlg::OnButtonNewUI), NULL,
                                this);
    m_buttonEdit->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ExternalToolBaseDlg::OnButtonEdit),
                             NULL, this);
    m_buttonEdit->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(ExternalToolBaseDlg::OnButtonEditUI), NULL, this);
    m_buttonDelete->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ExternalToolBaseDlg::OnButtonDelete),
                               NULL, this);
    m_buttonDelete->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(ExternalToolBaseDlg::OnButtonDeleteUI), NULL,
                               this);
}

ExternalToolsManagerBase::ExternalToolsManagerBase(wxWindow* parent, wxWindowID id, const wxString& title,
                                                   const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC403FInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer10 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer10);

    wxBoxSizer* boxSizer19 = new wxBoxSizer(wxHORIZONTAL);

    boxSizer10->Add(boxSizer19, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_dvListCtrlTasks = new clThemedListCtrl(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                                             wxDV_VERT_RULES | wxDV_ROW_LINES | wxDV_MULTIPLE | wxDV_SINGLE);
    m_dvListCtrlTasks->SetFocus();

    boxSizer19->Add(m_dvListCtrlTasks, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_dvListCtrlTasks->AppendIconTextColumn(_("PID"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                            wxDATAVIEW_COL_RESIZABLE);
    m_dvListCtrlTasks->AppendTextColumn(_("Command"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                        wxDATAVIEW_COL_RESIZABLE);
    wxBoxSizer* boxSizer21 = new wxBoxSizer(wxVERTICAL);

    boxSizer19->Add(boxSizer21, 0, wxEXPAND, WXC_FROM_DIP(5));

    m_buttonKill = new wxButton(this, wxID_STOP, _("Stop"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer21->Add(m_buttonKill, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_buttonKillAll =
        new wxButton(this, wxID_ANY, _("Stop All"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer21->Add(m_buttonKillAll, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_buttonRefresh =
        new wxButton(this, wxID_REFRESH, _("Refresh"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer21->Add(m_buttonRefresh, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    boxSizer21->Add(0, 0, 1, wxALL, WXC_FROM_DIP(5));

    m_button33 = new wxButton(this, wxID_CANCEL, _("Cancel"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer21->Add(m_button33, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    SetName(wxT("ExternalToolsManagerBase"));
    SetMinClientSize(wxSize(500, 300));
    SetSize(wxDLG_UNIT(this, wxSize(500, 300)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_buttonKill->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ExternalToolsManagerBase::OnKill), NULL,
                          this);
    m_buttonKill->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(ExternalToolsManagerBase::OnKillUI), NULL, this);
    m_buttonKillAll->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ExternalToolsManagerBase::OnKillAll),
                             NULL, this);
    m_buttonKillAll->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(ExternalToolsManagerBase::OnKillAllUI), NULL,
                             this);
    m_buttonRefresh->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ExternalToolsManagerBase::OnRefresh),
                             NULL, this);
}

ExternalToolsManagerBase::~ExternalToolsManagerBase()
{
    m_buttonKill->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ExternalToolsManagerBase::OnKill),
                             NULL, this);
    m_buttonKill->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(ExternalToolsManagerBase::OnKillUI), NULL, this);
    m_buttonKillAll->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                                wxCommandEventHandler(ExternalToolsManagerBase::OnKillAll), NULL, this);
    m_buttonKillAll->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(ExternalToolsManagerBase::OnKillAllUI), NULL,
                                this);
    m_buttonRefresh->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                                wxCommandEventHandler(ExternalToolsManagerBase::OnRefresh), NULL, this);
}
