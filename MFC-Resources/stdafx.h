// This is a part of the Active Template Library.
// Copyright (C) Microsoft Corporation
// All rights reserved.
//
// This source code is only intended as a supplement to the
// Active Template Library Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the	
// Active Template Library product.

#define _ATL_STATIC_LIB_IMPL
#define _ATL_DEBUG_INTERFACES

#include <atlbase.h>
#include <atlcom.h>
#include"../MFC-Resources/afx.h"
#include"../MFC-Resources/afxacceleratorkey.h"
#include"../MFC-Resources/afxacceleratorkeyassignctrl.h"
#include"../MFC-Resources/afxaccessibility.h"
#include"../MFC-Resources/afxadv.h"
#include"../MFC-Resources/afxanimationcontroller.h"
#include"../MFC-Resources/afxanimationhelper.h"
#include"../MFC-Resources/afxautohidebar.h"
#include"../MFC-Resources/afxautohidebutton.h"
#include"../MFC-Resources/afxautohidedocksite.h"
#include"../MFC-Resources/afxbasepane.h"
#include"../MFC-Resources/afxbaseribbonelement.h"
#include"../MFC-Resources/afxbasetabbedpane.h"
#include"../MFC-Resources/afxbasetabctrl.h"
#include"../MFC-Resources/afxbasetoolbar.h"
#include"../MFC-Resources/afxbutton.h"
#include"../MFC-Resources/afxcaptionbar.h"
#include"../MFC-Resources/afxcaptionbutton.h"
#include"../MFC-Resources/afxcaptionmenubutton.h"
#include"../MFC-Resources/afxcmdusagecount.h"
#include"../MFC-Resources/afxcmn.h"
#include"../MFC-Resources/afxcoll.h"
#include"../MFC-Resources/afxcolorbar.h"
#include"../MFC-Resources/afxcolorbutton.h"
#include"../MFC-Resources/afxcolordialog.h"
#include"../MFC-Resources/afxcolormenubutton.h"
#include"../MFC-Resources/afxcolorpickerctrl.h"
#include"../MFC-Resources/afxcolorpopupmenu.h"
#include"../MFC-Resources/afxcolorpropertysheet.h"
#include"../MFC-Resources/afxcommandmanager.h"
#include"../MFC-Resources/afxcom_.h"
#include"../MFC-Resources/afxcontextmenumanager.h"
#include"../MFC-Resources/afxcontrolbarimpl.h"
#include"../MFC-Resources/afxcontrolbars.h"
#include"../MFC-Resources/afxcontrolbarutil.h"
#include"../MFC-Resources/afxcontrolrenderer.h"
#include"../MFC-Resources/afxconv.h"
#include"../MFC-Resources/afxctl.h"
#include"../MFC-Resources/afxctrlcontainer.h"
#include"../MFC-Resources/afxcustomcolorspropertypage.h"
#include"../MFC-Resources/afxcustomizebutton.h"
#include"../MFC-Resources/afxcustomizemenubutton.h"
#include"../MFC-Resources/afxcview.h"
#include"../MFC-Resources/afxdao.h"
#include"../MFC-Resources/afxdatarecovery.h"
#include"../MFC-Resources/afxdb.h"
#include"../MFC-Resources/afxdb_.h"
#include"../MFC-Resources/afxdd_.h"
#include"../MFC-Resources/afxdesktopalertdialog.h"
#include"../MFC-Resources/afxdesktopalertwnd.h"
#include"../MFC-Resources/afxdhtml.h"
#include"../MFC-Resources/afxdialogex.h"
#include"../MFC-Resources/afxdialogimpl.h"
#include"../MFC-Resources/afxdisp.h"
#include"../MFC-Resources/afxdlgs.h"
#include"../MFC-Resources/afxdllx.h"
#include"../MFC-Resources/afxdll_.h"
#include"../MFC-Resources/afxdockablepane.h"
#include"../MFC-Resources/afxdockablepaneadapter.h"
#include"../MFC-Resources/afxdockingmanager.h"
#include"../MFC-Resources/afxdockingpanesrow.h"
#include"../MFC-Resources/afxdocksite.h"
#include"../MFC-Resources/afxdocob.h"
#include"../MFC-Resources/afxdragframeimpl.h"
#include"../MFC-Resources/afxdrawmanager.h"
#include"../MFC-Resources/afxdropdownlistbox.h"
#include"../MFC-Resources/afxdropdowntoolbar.h"
#include"../MFC-Resources/afxdtctl.h"
#include"../MFC-Resources/afxeditbrowsectrl.h"
#include"../MFC-Resources/afxext.h"
#include"../MFC-Resources/afxfontcombobox.h"
#include"../MFC-Resources/afxframeimpl.h"
#include"../MFC-Resources/afxframewndex.h"
#include"../MFC-Resources/afxfullscreenimpl.h"
#include"../MFC-Resources/afxglobals.h"
#include"../MFC-Resources/afxglobalutils.h"
#include"../MFC-Resources/afxheaderctrl.h"
#include"../MFC-Resources/afxhh.h"
#include"../MFC-Resources/afxhtml.h"
#include"../MFC-Resources/afximageeditordialog.h"
#include"../MFC-Resources/afximagepaintarea.h"
#include"../MFC-Resources/afximpl.h"
#include"../MFC-Resources/afxinet.h"
#include"../MFC-Resources/afxkeyboardmanager.h"
#include"../MFC-Resources/afxkeymapdialog.h"
#include"../MFC-Resources/afxlinkctrl.h"
#include"../MFC-Resources/afxlistctrl.h"
#include"../MFC-Resources/afxmaskededit.h"
#include"../MFC-Resources/afxmdichildwndex.h"
#include"../MFC-Resources/afxmdiclientareawnd.h"
#include"../MFC-Resources/afxmdiframewndex.h"
#include"../MFC-Resources/afxmenubar.h"
#include"../MFC-Resources/afxmenubutton.h"
#include"../MFC-Resources/afxmenuhash.h"
#include"../MFC-Resources/afxmenuimages.h"
#include"../MFC-Resources/afxmenutearoffmanager.h"
#include"../MFC-Resources/afxmousemanager.h"
#include"../MFC-Resources/afxmousepropertypage.h"
#include"../MFC-Resources/afxmsg_.h"
#include"../MFC-Resources/afxmt.h"
#include"../MFC-Resources/afxmultidoctemplateex.h"
#include"../MFC-Resources/afxmultipaneframewnd.h"
#include"../MFC-Resources/afxocc.h"
#include"../MFC-Resources/afxodlgs.h"
#include"../MFC-Resources/afxole.h"
#include"../MFC-Resources/afxolecntrframewndex.h"
#include"../MFC-Resources/afxoledb.h"
#include"../MFC-Resources/afxoledocipframewndex.h"
#include"../MFC-Resources/afxoleipframewndex.h"
#include"../MFC-Resources/afxoleserverdocex.h"
#include"../MFC-Resources/afxoutlookbar.h"
#include"../MFC-Resources/afxoutlookbarpane.h"
#include"../MFC-Resources/afxoutlookbarpaneadapter.h"
#include"../MFC-Resources/afxoutlookbarpanebutton.h"
#include"../MFC-Resources/afxoutlookbartabctrl.h"
#include"../MFC-Resources/afxpane.h"
#include"../MFC-Resources/afxpanecontainer.h"
#include"../MFC-Resources/afxpanecontainermanager.h"
#include"../MFC-Resources/afxpanedialog.h"
#include"../MFC-Resources/afxpanedivider.h"
#include"../MFC-Resources/afxpaneframewnd.h"
#include"../MFC-Resources/afxplex_.h"
#include"../MFC-Resources/afxpopupmenu.h"
#include"../MFC-Resources/afxpopupmenubar.h"
#include"../MFC-Resources/afxpreviewviewex.h"
#include"../MFC-Resources/afxpriv.h"
#include"../MFC-Resources/afxpriv2.h"
#include"../MFC-Resources/afxpropertygridctrl.h"
#include"../MFC-Resources/afxpropertygridtooltipctrl.h"
#include"../MFC-Resources/afxpropertypage.h"
#include"../MFC-Resources/afxpropertysheet.h"
#include"../MFC-Resources/afxrebar.h"
#include"../MFC-Resources/afxrebarstate.h"
#include"../MFC-Resources/afxrecentdocksiteinfo.h"
#include"../MFC-Resources/afxregpath.h"
#include"../MFC-Resources/afxrendertarget.h"
#include"../MFC-Resources/afxres.h"
#include"../MFC-Resources/afxribbonbar.h"
#include"../MFC-Resources/afxribbonbutton.h"
#include"../MFC-Resources/afxribbonbuttonsgroup.h"
#include"../MFC-Resources/afxribboncategory.h"
#include"../MFC-Resources/afxribboncheckbox.h"
#include"../MFC-Resources/afxribboncollector.h"
#include"../MFC-Resources/afxribboncolorbutton.h"
#include"../MFC-Resources/afxribboncombobox.h"
#include"../MFC-Resources/afxribboncommandslistbox.h"
#include"../MFC-Resources/afxribbonconstructor.h"
#include"../MFC-Resources/afxribboncustomizedialog.h"
#include"../MFC-Resources/afxribbonedit.h"
#include"../MFC-Resources/afxribboninfo.h"
#include"../MFC-Resources/afxribboninfoloader.h"
#include"../MFC-Resources/afxribbonkeyboardcustomizedialog.h"
#include"../MFC-Resources/afxribbonkeytip.h"
#include"../MFC-Resources/afxribbonlabel.h"
#include"../MFC-Resources/afxribbonlinkctrl.h"
#include"../MFC-Resources/afxribbonmainpanel.h"
#include"../MFC-Resources/afxribbonminitoolbar.h"
#include"../MFC-Resources/afxribbonpalettegallery.h"
#include"../MFC-Resources/afxribbonpanel.h"
#include"../MFC-Resources/afxribbonpanelmenu.h"
#include"../MFC-Resources/afxribbonprogressbar.h"
#include"../MFC-Resources/afxribbonquickaccesstoolbar.h"
#include"../MFC-Resources/afxribbonres.h"
#include"../MFC-Resources/afxribbonslider.h"
#include"../MFC-Resources/afxribbonstatusbar.h"
#include"../MFC-Resources/afxribbonstatusbarpane.h"
#include"../MFC-Resources/afxribbonundobutton.h"
#include"../MFC-Resources/afxrich.h"
#include"../MFC-Resources/afxsettingsstore.h"
#include"../MFC-Resources/afxshelllistctrl.h"
#include"../MFC-Resources/afxshellmanager.h"
#include"../MFC-Resources/afxshelltreectrl.h"
#include"../MFC-Resources/afxshowallbutton.h"
#include"../MFC-Resources/afxsmartdockingguide.h"
#include"../MFC-Resources/afxsmartdockinghighlighterwnd.h"
#include"../MFC-Resources/afxsmartdockingmanager.h"
#include"../MFC-Resources/afxsock.h"
#include"../MFC-Resources/afxsound.h"
#include"../MFC-Resources/afxspinbuttonctrl.h"
#include"../MFC-Resources/afxsplitterwndex.h"
#include"../MFC-Resources/afxstandardcolorspropertypage.h"
#include"../MFC-Resources/afxstatusbar.h"
#include"../MFC-Resources/afxstat_.h"
#include"../MFC-Resources/afxstr.h"
#include"../MFC-Resources/afxtabbedpane.h"
#include"../MFC-Resources/afxtabctrl.h"
#include"../MFC-Resources/afxtabview.h"
#include"../MFC-Resources/afxtagmanager.h"
#include"../MFC-Resources/afxtaskdialog.h"
#include"../MFC-Resources/afxtaskspane.h"
#include"../MFC-Resources/afxtaskspaneframewnd.h"
#include"../MFC-Resources/afxtempl.h"
#include"../MFC-Resources/afxtls_.h"
#include"../MFC-Resources/afxtoolbar.h"
#include"../MFC-Resources/afxtoolbarbutton.h"
#include"../MFC-Resources/afxtoolbarbuttoncustomizedialog.h"
#include"../MFC-Resources/afxtoolbarbuttonslistbutton.h"
#include"../MFC-Resources/afxtoolbarcomboboxbutton.h"
#include"../MFC-Resources/afxtoolbardatetimectrl.h"
#include"../MFC-Resources/afxtoolbardropsource.h"
#include"../MFC-Resources/afxtoolbardroptarget.h"
#include"../MFC-Resources/afxtoolbareditboxbutton.h"
#include"../MFC-Resources/afxtoolbarfontcombobox.h"
#include"../MFC-Resources/afxtoolbarimages.h"
#include"../MFC-Resources/afxtoolbarmenubutton.h"
#include"../MFC-Resources/afxtoolbarmenubuttonsbutton.h"
#include"../MFC-Resources/afxtoolbarnamedialog.h"
#include"../MFC-Resources/afxtoolbarscommandslistbox.h"
#include"../MFC-Resources/afxtoolbarscustomizedialog.h"
#include"../MFC-Resources/afxtoolbarskeyboardpropertypage.h"
#include"../MFC-Resources/afxtoolbarslistcheckbox.h"
#include"../MFC-Resources/afxtoolbarslistpropertypage.h"
#include"../MFC-Resources/afxtoolbarsmenupropertypage.h"
#include"../MFC-Resources/afxtoolbarsoptionspropertypage.h"
#include"../MFC-Resources/afxtoolbarspineditboxbutton.h"
#include"../MFC-Resources/afxtoolbarstoolspropertypage.h"
#include"../MFC-Resources/afxtoolbarsystemmenubutton.h"
#include"../MFC-Resources/afxtooltipctrl.h"
#include"../MFC-Resources/afxtooltipmanager.h"
#include"../MFC-Resources/afxusertool.h"
#include"../MFC-Resources/afxusertoolsmanager.h"
#include"../MFC-Resources/afxver_.h"
#include"../MFC-Resources/afxvisualmanager.h"
#include"../MFC-Resources/afxvisualmanageroffice2003.h"
#include"../MFC-Resources/afxvisualmanageroffice2007.h"
#include"../MFC-Resources/afxvisualmanagerofficexp.h"
#include"../MFC-Resources/afxvisualmanagervs2005.h"
#include"../MFC-Resources/afxvisualmanagervs2008.h"
#include"../MFC-Resources/afxvisualmanagerwindows.h"
#include"../MFC-Resources/afxvisualmanagerwindows7.h"
#include"../MFC-Resources/afxvslistbox.h"
#include"../MFC-Resources/afxv_cfg.h"
#include"../MFC-Resources/afxv_cpu.h"
#include"../MFC-Resources/afxv_dll.h"
#include"../MFC-Resources/afxv_w32.h"
#include"../MFC-Resources/afxwfrmcmd.h"
#include"../MFC-Resources/afxwin.h"
#include"../MFC-Resources/afxwinappex.h"
#include"../MFC-Resources/afxwindowsmanagerdialog.h"
#include"../MFC-Resources/afxwinforms.h"
#include"../MFC-Resources/afxwinverapi.h"
#include"../MFC-Resources/atlacc.h"
#include"../MFC-Resources/atlalloc.h"
#include"../MFC-Resources/atlbase.h"
#include"../MFC-Resources/atlbuild.h"
#include"../MFC-Resources/atlchecked.h"
#include"../MFC-Resources/atlcoll.h"
#include"../MFC-Resources/atlcom.h"
#include"../MFC-Resources/atlcomcli.h"
#include"../MFC-Resources/ATLComMem.h"
#include"../MFC-Resources/ATLComTime.h"
#include"../MFC-Resources/atlconv.h"
#include"../MFC-Resources/atlcore.h"
#include"../MFC-Resources/atlctl.h"
#include"../MFC-Resources/atlcur.h"
#include"../MFC-Resources/atldb.h"
#include"../MFC-Resources/atldbcli.h"
#include"../MFC-Resources/atldbgmem.h"
#include"../MFC-Resources/atldbsch.h"
#include"../MFC-Resources/atldef.h"
#include"../MFC-Resources/atlenc.h"
#include"../MFC-Resources/atlevent.h"
#include"../MFC-Resources/atlexcept.h"
#include"../MFC-Resources/atlfile.h"
#include"../MFC-Resources/atlhandler.h"
#include"../MFC-Resources/atlhandlerimpl.h"
#include"../MFC-Resources/atlhost.h"
#include"../MFC-Resources/atliface.h"
#include"../MFC-Resources/atlimage.h"
#include"../MFC-Resources/atlmem.h"
#include"../MFC-Resources/atlpath.h"
#include"../MFC-Resources/atlplus.h"
#include"../MFC-Resources/atlpreviewctrlimpl.h"
#include"../MFC-Resources/atlrc.h"
#include"../MFC-Resources/atlsafe.h"
#include"../MFC-Resources/atlsecurity.h"
#include"../MFC-Resources/atlsimpcoll.h"
#include"../MFC-Resources/atlsimpstr.h"
#include"../MFC-Resources/atlsnap.h"
#include"../MFC-Resources/atlsocket.h"
#include"../MFC-Resources/atlstdthunk.h"
#include"../MFC-Resources/atlstr.h"
#include"../MFC-Resources/atlsync.h"
#include"../MFC-Resources/atltime.h"
#include"../MFC-Resources/atltrace.h"
#include"../MFC-Resources/atltransactionmanager.h"
#include"../MFC-Resources/atltypes.h"
#include"../MFC-Resources/atlutil.h"
#include"../MFC-Resources/atlwin.h"
#include"../MFC-Resources/atlwinverapi.h"
#include"../MFC-Resources/atlxml.h"
#include"../MFC-Resources/cstringt.h"
#include"../MFC-Resources/ctlimpl.h"
#include"../MFC-Resources/daoimpl.h"
#include"../MFC-Resources/dbimpl.h"
#include"../MFC-Resources/dispimpl.h"
#include"../MFC-Resources/elements.h"
#include"../MFC-Resources/fixalloc.h"
#include"../MFC-Resources/mfcm80.h"
#include"../MFC-Resources/occimpl.h"
#include"../MFC-Resources/ocdb.h"
#include"../MFC-Resources/ocdbid.h"
#include"../MFC-Resources/olebind.h"
#include"../MFC-Resources/oleimpl2.h"
#include"../MFC-Resources/sockimpl.h"
#include"../MFC-Resources/statreg.h"
#include"../MFC-Resources/winhand_.h"
#include"../MFC-Resources/winspool.h"