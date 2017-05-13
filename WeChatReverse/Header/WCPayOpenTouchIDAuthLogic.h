//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "UIAlertViewDelegate.h"

@class NSString;

@interface WCPayOpenTouchIDAuthLogic : WCPayControlLogic <UIAlertViewDelegate>
{
    unsigned long long _action;
}

@property(nonatomic) unsigned long long action; // @synthesize action=_action;
- (void)handleError:(id)arg1;
- (void)verifyPassword;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)showCloseAlert;
- (void)openPWDVC;
- (void)refreshLocalDataFromServerWithState:(_Bool)arg1;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

