//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageCellView.h"

#import "IAppDataExt.h"
#import "IContactMgrExt.h"
#import "IQQContactMgrExt.h"
#import "IStrangerContactMgrExt.h"
#import "WCActionSheetDelegate.h"

@class AppMessageBlockButton, CTRichTextView, CommonMessageViewModel, MMCPLabel, MMHeadImageView, NSString, UIActivityIndicatorView, UIButton, UIView, YYAsyncImageView;

@interface CommonMessageCellView : BaseMessageCellView <IAppDataExt, IContactMgrExt, IStrangerContactMgrExt, IQQContactMgrExt, WCActionSheetDelegate>
{
    struct CGRect m_bubbleBorderFrame;
    MMHeadImageView *m_headImageView;
    MMCPLabel *m_chatRoomNameLabel;
    YYAsyncImageView *m_bgImageView;
    YYAsyncImageView *m_maskImageView;
    UIActivityIndicatorView *m_sendingView;
    UIButton *m_sendFailButton;
    UIButton *m_cancelButton;
    UIView *m_sourceViewInside;
    UIView *m_sourceViewBottom;
    AppMessageBlockButton *m_appMessageBlockButton;
    CTRichTextView *m_crashWarningLabel;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)handleMagicTapAction:(id)arg1;
- (_Bool)accessibilityPerformMagicTap;
- (void)addMagicTapActions:(id)arg1;
- (void)onModifyQQContact:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onModifyContact:(id)arg1;
- (void)OnAppInfoChanged:(id)arg1;
- (void)OnAppWatermarkChanged:(id)arg1;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)onAppButtonClicked:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onSendFailButtonClicked:(id)arg1;
- (void)onHeadImageLongPressed:(id)arg1;
- (void)onHeadImageClicked:(id)arg1;
- (void)layoutForCrashWarning;
- (void)setHighlighted:(_Bool)arg1;
- (void)initAppMessageBlockButton;
- (void)initSourceViewInside;
- (void)initSourceViewBottom;
- (void)addCancelButton;
- (void)addSendFailButton;
- (void)addSendingView;
- (void)initMaskImageView;
- (void)initBgImageView;
- (void)initChatRoomNameLabel;
- (void)initHeadImageView;
- (void)initCrashWarningLabel;
- (void)setFrameForBgImageView:(struct CGRect)arg1;
- (struct CGRect)showRectForMenuController;
- (void)showUIStatus;
- (void)hideUIStatus;
- (void)updateStatus;
- (void)updateNodeStatus;
- (void)layoutContentView;
- (void)layoutInternal;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CommonMessageViewModel *viewModel; // @dynamic viewModel;

@end

