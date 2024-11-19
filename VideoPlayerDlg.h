
// video_playerDlg.h
//

#pragma once

class CVideoPlayerDlg : public CDialogEx
{
public:
    CVideoPlayerDlg(CWnd *pParent = nullptr);

#ifdef AFX_DESIGN_TIME
    enum { IDD = IDD_VIDEO_PLAYER_DIALOG };
#endif

protected:
    virtual void DoDataExchange(CDataExchange *pDX);

protected:
    HICON m_hIcon;

    virtual BOOL OnInitDialog();
    afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();
    DECLARE_MESSAGE_MAP()
};
