//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WNRichEditViewController.h"

#import "FavForwardLogicDelegate.h"
#import "FavFullScreenImageViewDelegate.h"
#import "FavTagViewDelegate.h"
#import "IFavoritesExt.h"
#import "IRecordDownloadExt.h"
#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "WCActionSheetDelegate.h"

@class CMessageWrap, FavForwardLogicController, FavoritesItem, MMTimer, NSMutableArray, NSString, NSURL, UIButton, UITextField, UITextView, WNNoteVoiceItemUtil;

@interface WNNoteViewController : WNRichEditViewController <IFavoritesExt, IRecordDownloadExt, WCActionSheetDelegate, FavForwardLogicDelegate, UITextFieldDelegate, FavTagViewDelegate, UIScrollViewDelegate, FavFullScreenImageViewDelegate, UIAlertViewDelegate>
{
    int _footerHeight;
    UITextField *_titleTextView;
    NSMutableArray *_toolbarBtns;
    NSURL *_indexFileURL;
    NSString *_notehtmlPath;
    _Bool _isLoadEnd;
    NSMutableArray *_itemArray;
    unsigned int _editTime;
    FavForwardLogicController *_favForwardLogicController;
    FavoritesItem *_backupItem;
    WNNoteVoiceItemUtil *_voiceUtil;
    UIButton *_voiceBtn;
    int originVersion;
    NSString *originDeviceId;
    int _saveStatus;
    _Bool dismissAfterSave;
    _Bool showActionsAfterSave;
    FavoritesItem *tagEditItem;
    MMTimer *backupTimer;
    _Bool hasAppear;
    _Bool isEmpty;
    UITextView *_jsLogView;
    _Bool m_editable;
    _Bool m_edited;
    _Bool m_editing;
    int _noteState;
    FavoritesItem *_favItem;
    FavoritesItem *_textFavItem;
    id <FavPostControllerDelegate> _favPostControllerDelegate;
    CMessageWrap *_recordMsg;
}

@property(retain, nonatomic) CMessageWrap *recordMsg; // @synthesize recordMsg=_recordMsg;
@property(nonatomic) __weak id <FavPostControllerDelegate> favPostControllerDelegate; // @synthesize favPostControllerDelegate=_favPostControllerDelegate;
@property(retain, nonatomic) FavoritesItem *textFavItem; // @synthesize textFavItem=_textFavItem;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(retain, nonatomic) UITextView *jsLogView; // @synthesize jsLogView=_jsLogView;
@property(nonatomic) _Bool m_editing; // @synthesize m_editing;
@property(nonatomic) _Bool m_edited; // @synthesize m_edited;
@property(nonatomic) _Bool m_editable; // @synthesize m_editable;
@property(nonatomic) int noteState; // @synthesize noteState=_noteState;
- (void).cxx_destruct;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (void)onFavFullScreenImageViewHide;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)onFavTagEditOK;
- (void)onFavTagEditBegin:(int)arg1;
- (id)getFavForawrdViewController;
- (id)getCurrentItem;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(_Bool)arg3;
- (void)OnRecordMessageDownloadOK:(id)arg1;
- (void)OnDownloadFavoritesItemFail:(id)arg1 LocalDataId:(id)arg2;
- (void)OnDownloadFavoritesItemOK:(id)arg1 LocalDataId:(id)arg2;
- (void)onExportData:(id)arg1;
- (void)onBecomeEdited;
- (void)onBecomeEditing;
- (void)onLongClickNode:(id)arg1 andRect:(struct CGRect)arg2;
- (void)onClickNode:(id)arg1 andRect:(struct CGRect)arg2;
- (void)onClickImageItem:(id)arg1 withData:(id)arg2 andRect:(struct CGRect)arg3;
- (void)registerJavascriptLoggerCallback;
- (void)configJavascriptLoggerView;
- (_Bool)enableJavascriptLogger;
- (id)insertTitleToContentBegin:(id)arg1 withTitle:(id)arg2;
- (id)configInitData;
- (void)stopVoiceRecord;
- (void)updateItem:(id)arg1;
- (void)insertItems:(id)arg1;
- (_Bool)exceedSizeLimit:(id)arg1;
- (void)insertItem:(id)arg1;
- (void)registerJSCallBack;
- (void)showMenuAction:(_Bool)arg1;
- (void)onMenuAction:(id)arg1;
- (void)clearBackup;
- (void)backup;
- (void)scheduleBackup;
- (void)save;
- (void)onAddItem:(id)arg1;
- (void)changeNoteEditable:(_Bool)arg1;
- (void)configNavbarEditing:(_Bool)arg1;
- (void)configEditing:(_Bool)arg1;
- (void)onHideKeyboard;
- (void)configHeaderViewEditable:(_Bool)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)updateToolViewBtns;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)initToolView;
- (void)initNoteItemsData;
- (void)viewDidLoad;
- (void)DidEnterBackground:(id)arg1;
- (void)dealloc;
- (void)DismissMyselfAnimated:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertIfSaveWhenQuit;
- (void)quitWithoutSave;
- (void)disMissSelf;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)loadURL:(id)arg1;
- (void)configData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

