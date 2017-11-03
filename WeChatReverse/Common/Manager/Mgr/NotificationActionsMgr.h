//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMMNewSessionMgrExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "UNUserNotificationCenterDelegate.h"

@class MMDisturbConfirmViewController, MMToastViewController, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface NotificationActionsMgr : MMService <PBMessageObserverDelegate, UNUserNotificationCenterDelegate, IMMNewSessionMgrExt, UIAlertViewDelegate, MMService>
{
    NSMutableDictionary *_actionCompletions;
    MMToastViewController *_toastView;
    MMDisturbConfirmViewController *_distrubConfirmViewController;
    NSMutableArray *_sendingMessages;
    NSDictionary *_actionMaping;
}

@property(readonly, retain, nonatomic) NSDictionary *actionMaping; // @synthesize actionMaping=_actionMaping;

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleApnsDeepLink:(id)arg1;
- (void)handleReceiveLocalNotification:(id)arg1;
- (void)handleReceiveRemoteNotification:(id)arg1;
- (void)handleStatusNotifyResp:(id)arg1;
- (void)handleSendMsgResp:(id)arg1;
- (void)handleSetPushMuteResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)genRandomClienMsgId;
- (void)markChatRead:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)notifyUserSendMessageFailWithClientId:(unsigned int)arg1 toUsername:(id)arg2;
- (void)replyText:(id)arg1 toUsername:(id)arg2 userInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)handleReplyYoAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleMuteChatAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleReplyAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleReply1Action:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleUnlockDeviceAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleConfirmLoginAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleGoToMessageAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleMarkAsReadAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateShortcutsBecauseOfDisturbMayChanged;
- (_Bool)isDontDisturbModeAndCheckRestore:(_Bool)arg1;
- (void)_muteForSeconds:(unsigned int)arg1;
- (void)unmute;
- (void)muteForOneHour;
- (void)showDisturbConfirmViewController;
- (void)handleActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 withResponseInfo:(id)arg3 isRemote:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)handleRemoteActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleLocalActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)notificationCategoryWithIdentifier:(id)arg1 actions:(id)arg2;
- (void)registerNotification;
- (void)onServiceTerminate;
- (void)dealloc;
- (id)init;

@end

