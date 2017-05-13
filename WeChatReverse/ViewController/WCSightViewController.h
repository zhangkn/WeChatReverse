//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ForwardMessageLogicDelegate.h"
#import "FullScreenGestureDelegate.h"
#import "IUiUtilExt.h"
#import "SightViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCFacadeExt.h"

@class ForwardMessageLogicController, MMUIWindow, NSString, SightView, UIImageView, UIView, WCDataItem, WCMediaItem, WXFullScreenGestureRecognizer;

@interface WCSightViewController : MMUIViewController <SightViewDelegate, IUiUtilExt, FullScreenGestureDelegate, WCFacadeExt, ForwardMessageLogicDelegate, WCActionSheetDelegate>
{
    unsigned int _startTime;
    MMUIWindow *_fullScreenWindow;
    UIView *_nodeView;
    UIView *_fullScreenContent;
    SightView *_sightView;
    double _videoTime;
    _Bool _fullScreenPlaying;
    WCMediaItem *_mediaItem;
    UIImageView *_thumbImageView;
    struct CGRect _thumbRect;
    WXFullScreenGestureRecognizer *m_gestureReconizer;
    WCDataItem *_dataItem;
    _Bool _bTimelineScene;
    unsigned int m_uOperateMode;
    _Bool m_bPreventRotate;
    CDStruct_1b6d18a9 m_currentPlayTime;
    NSString *_nsFromVCName;
    ForwardMessageLogicController *m_forwardMsgLogic;
    _Bool _silencePlay;
    id <WCSNSNodeVideoViewDelegate> _delegate;
}

@property(nonatomic) _Bool silencePlay; // @synthesize silencePlay=_silencePlay;
@property(nonatomic) __weak id <WCSNSNodeVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)OnDownloadSuccessForSaveVideoToAlbum;
- (void)tryToSaveVideoToAlbum;
- (void)OnDownloadSuccessForForwardVideoToFriend;
- (void)trySendSightToFriend;
- (void)OnDownloadSuccessForFavoriteAdd;
- (void)tryToAddFavorite;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onShowSightAction;
- (void)OnVideoStreamDownloadProgressUpdate:(id)arg1 FinishedLength:(unsigned int)arg2 TotalLength:(unsigned int)arg3;
- (void)onMediaVideoDownloadSuccess:(id)arg1;
- (void)startLoadFullDownloadView;
- (_Bool)checkDownloadForOperateMode:(unsigned int)arg1;
- (void)onVideoStreamDownloadFail:(_Bool)arg1;
- (void)onVideoTotalTimeUpdate:(double)arg1 msgClientId:(id)arg2;
- (void)onSightDurationUpdate:(CDStruct_1b6d18a9)arg1;
- (void)reStartStateMachine;
- (void)onStartToPlayVideo;
- (_Bool)sightView:(id)arg1 playbackDidReadEnd:(_Bool)arg2;
- (void)onMainWindowFrameChanged;
- (void)onFullScreenBackgroupColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenClose;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenSingleTap;
- (void)clearSubviews;
- (double)calTransformFromRect:(struct CGRect)arg1;
- (void)stopAndCloseFullScreenWindow;
- (void)setThumbImage:(id)arg1;
- (_Bool)isFullScreenPlaying;
- (void)startPlayWithAnimation;
- (void)initGestures;
- (void)initSubviewWithDataItem:(id)arg1 superWindow:(id)arg2 thumbView:(id)arg3 isTimeLineScene:(_Bool)arg4 nodeView:(id)arg5;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

