//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "BaseEmoticonViewDelegate.h"
#import "EmoticonBoardViewDelegate.h"
#import "EmoticonDescMgrExt.h"
#import "IRecordPermissionCheckExt.h"
#import "ISysCallCheckExt.h"
#import "MMGrowTextViewDelegate.h"
#import "MMTransparentButtonDelegate.h"
#import "SelectAttachmentViewControllerDelegate.h"
#import "ShortVideoBarDelegate.h"
#import "VoiceInputViewDelegate.h"
#import "WCActionSheet.h"
#import "MMInputToolViewDelegate.h"
#import "MMInputToolViewCustomizationDelegate.h"

@class ALAssetsLibrary, CAGradientLayer, EmoticonBoardView, MMEmoticonView, MMGrowTextView, MMTransparentButton, NSString, NSURL, RecordView, SelectAttachmentView, SelectAttachmentViewController, ShortVideoToolbar, UIButton, UIView, VoiceInputView;

@interface MMInputToolView : MMUIView <UITextViewDelegate, ISysCallCheckExt, WCActionSheetDelegate, MMGrowTextViewDelegate, MMTransparentButtonDelegate, SelectAttachmentViewControllerDelegate, VoiceInputViewDelegate, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, IRecordPermissionCheckExt, EmoticonDescMgrExt, ShortVideoBarDelegate>
{
    VoiceInputView *_voiceInputView;
    SelectAttachmentView *_attachmentView;
    UIButton *_sendCaptrueView;
    UIButton *m_quickSendEmoticonBackView;
    UIView *m_quickSendEmoticonView;
    MMEmoticonView *m_emoticonView;
    SelectAttachmentViewController *m_selectAttachmentViewController;
    long long iMuteCount;
    int _recordStatus;
    id <MMInputToolViewCustomizationDelegate> _uiDelegate;
    NSURL *_nsLastCaptrueAssetURL;
    ALAssetsLibrary *_oLibrary;
    BOOL m_bPositioning;
    int _preSightInputMode;
    int _preSightPositionMode;
    int _preSightContentMode;
    double _bizInputBtnWidth;
    BOOL _showToolViewAfterAnimation;
    double _keyboardTop;
    UIView *_bkgView;
    BOOL _isDetectingExternalKeyboard;
    UIView *m_keyboardBackgroundView;
    SEL mRecordSelector;
}

@property(retain, nonatomic) CAGradientLayer *toolViewShadowLayer;
@property(nonatomic) unsigned long long fMaxLength;
@property(retain, nonatomic) UIView *m_quickSendEmoticonView; // @synthesize m_quickSendEmoticonView;
@property(retain, nonatomic) MMEmoticonView *m_emoticonView; // @synthesize m_emoticonView;
@property(retain, nonatomic) UIButton *m_quickSendEmoticonBackView; // @synthesize m_quickSendEmoticonBackView;
@property(nonatomic) SEL mRecordSelector; // @synthesize mRecordSelector;
@property(nonatomic, weak) id <MMInputToolViewCustomizationDelegate> _uiDelegate; // @synthesize _uiDelegate;
@property(nonatomic) BOOL m_bPositioning; // @synthesize m_bPositioning;
@property(retain, nonatomic) RecordView *recordView;
@property(nonatomic) int contentMode;
@property(nonatomic) int positionMode;
@property(nonatomic) int inputMode;
@property(nonatomic, weak) id <MMInputToolViewDelegate> delegate;
@property(nonatomic) long long keyboardHeight;
@property(retain, nonatomic) MMTransparentButton *recordButton;
@property(retain, nonatomic) UIView *recordingTipsView;
@property(retain, nonatomic) UIButton *expressionDoneButton;
@property(retain, nonatomic) UIButton *expressionButton;
@property(retain, nonatomic) UIButton *attachmentButton;
@property(retain, nonatomic) MMGrowTextView *textView;
@property(retain, nonatomic) EmoticonBoardView *expressionView;
@property(retain, nonatomic) ShortVideoToolbar *sightToolbar;
@property(retain, nonatomic) UIView *toolView;
@property(retain, nonatomic) UIButton *inputModeChangeButton;
@property(nonatomic, weak) NSString *text;
@property(nonatomic) long long iKeyboardAnimationCurve;
@property(nonatomic) double fKeyboardAnimationDuration;


#
- (BOOL)hasGroupPayEntry;


- (CGPoint)CheckVoiceBtnPressLocation;
- (BOOL)CheckVoiceBtnState;
- (void)onDragTableViewEnd:(CGFloat)arg1;
- (void)onDragTableView:(CGPoint)point;
- (BOOL)tryDetectExtenalKeyboard;
- (BOOL)isFocusOnTextInput;
- (void)changeToSightToolView;
- (void)initSightToolView;
- (void)hideSightCamera;
- (void)setVoiceEnabled:(BOOL)arg1;
- (void)resetSelectAttachmentView;
- (void)resetVoiceInputView;
- (void)resetRecordView;
- (BOOL)isPointInRecordGarbageView:(CGPoint)point;
- (BOOL)isPointInRecordButton:(CGPoint)point;
- (void)SetPeakPower:(CGFloat)arg1;
- (void)resetGrowTextView;
- (void)insertString:(id)arg1;
- (void)ShowCountingTips:(NSInteger)arg1;
- (void)HideRecordTips;
- (void)ShowTooShortTips;
- (void)ShowTooLongTips;
- (void)ShowRecording;
- (void)ShowPreparing;
- (void)showRecord:(id)arg1;
- (void)showCancel:(id)arg1;
- (void)cancelRecording;
- (void)stopRecording:(id)arg1;
- (void)resalStartRecording;
- (void)startRecording:(id)arg1;
- (void)setContentMode:(int)arg1 animated:(BOOL)animated;
- (void)NotifyViewControllerPostionChanged:(BOOL)arg1 Animated:(BOOL)animated;
- (void)setPoisitionMode:(int)arg1 animated:(BOOL)animated fromShake:(BOOL)arg3;
- (void)setPoisitionMode:(int)arg1 animated:(BOOL)animated;

- (CGFloat)getContentViewHeight:(int)arg1;
- (void)onPositionAnimationEnd;
- (void)setInputMode:(int)arg1 animated:(BOOL)animated;
- (void)logSightCameraEntranceWithCameraButton:(BOOL)arg1;
- (void)onCardPkgButtonClicked:(id)arg1;
- (void)realStartMultiTalk;
- (void)videoVoipBtnRealClicked;
- (BOOL)isEnableVoiceVoipFromPlugin;
- (void)asyncStartNetDetect;

- (BOOL)canShowEnterpriseBrandEntry;
- (BOOL)canShowLocation;
- (BOOL)canShowFavEntry;
- (BOOL)hasRedEnvelopesEntry;
- (BOOL)hasTransferMoneyEntry;
- (BOOL)hasServiceEntry;
- (id)getServiceAppList;
- (void)voiceInputBtnRealClicked;
- (void)voiceVoipBtnRealClicked;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onSendCaptrueButtonClicked:(id)arg1;
- (void)onAttachmentModeChangeButtonClicked:(id)arg1;
- (void)showCaptrueButton;
- (void)tryShowCaptrueButton;
- (void)onInputModeChangeButtonClicked:(id)arg1;
- (void)onWillDisappear;
- (void)hideToolView:(BOOL)arg1;
- (void)Reset;
- (instancetype)initWithUIDelegate:(id <MMInputToolViewCustomizationDelegate>)uiDelegate;

- (void)initSubView;
- (void)updateCustomToolView;
- (void)UpdateTabBarSendButtonState;
- (void)changeTextViewColorForEmoticonState:(BOOL)arg1;
- (void)updateRecordButtonDisabled;
- (void)updateToolViewHeight:(BOOL)arg1;
- (void)SetButtonHighlighted:(BOOL)arg1;
- (void)showSendCaptrueViewAnimated:(BOOL)arg1;
- (void)hideSendCaptrueView;
- (void)hideSendCaptrueViewAnimated:(BOOL)arg1;
- (void)initVoiceInputView;
- (void)OnVoiceInputSendBtnClicked;
- (void)OnVoiceInputKeyboardBtnClicked;
- (BOOL)ifStreamVoiceInputOn;
- (void)initAttachmentView;
- (void)updateAttachmentView;
- (void)setIsAllowShareCard:(BOOL)arg1;
- (void)setIsAllowNameCardFollowRedEnveLope:(BOOL)arg1;
- (void)setIsAllowWxTalkFollowSight:(BOOL)arg1;
- (void)setIsAllowRecommendApp:(BOOL)arg1;
- (void)setIsAllowMultiTalk:(BOOL)arg1;
- (void)setIsAllowWxTalk:(BOOL)arg1;
- (void)setIsAllowVoiceInput:(BOOL)arg1;
- (void)setIsAllowVoip:(BOOL)arg1 VoiceVoip:(BOOL)arg2;
- (id)configEmoticonView;
- (void)onClickQuickSendEmoticonView:(id)arg1;
- (void)quickSendEmoticonViewHideDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)quickSendEmoticonViewShowDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)hideQuickSendEmoticonView;
- (void)showQuickSendEmoticonView;
- (void)clearQuickSendEmoticonViewAnimation;
- (id)genQuickSendEmoticonView;
- (void)fixBtnY;
- (CGFloat)getDefaultTextViewHeight;
- (void)lighterToolView;
- (BOOL)isHiddenInputChangeButton;
- (void)initToolView;


- (void)toRecordStautsTooShortTips;
- (void)toRecordStautsTooLongTips;
- (void)toRecordStautsRecordCancelTips;
- (void)toRecordStautsRecording;
- (void)toRecordStautsPerparing;
- (void)toRecordStautsIdle;


@end

