//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IContactMgrExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "MessageObserverDelegate.h"
#import "PBMessageObserverDelegate.h"

@class NSRecursiveLock, NSString;

@interface UpdateProfileMgr : MMService <MMService, MMKernelExt, PBMessageObserverDelegate, MessageObserverDelegate, IContactMgrExt>
{
    NSRecursiveLock *m_lock;
    long long m_profileUpdateEvent;
}

+ (_Bool)modifyUserInfo:(id)arg1;
+ (void)modifySetting:(id)arg1;
+ (id)getOplog:(id)arg1;
+ (_Bool)isModifyExtInfo:(id)arg1;
+ (_Bool)isUserInfoNotReady;
- (void).cxx_destruct;
- (void)onModifySelfContact:(id)arg1;
- (void)onAuthOK;
- (void)setIsNeedUpdateAfterAuth:(_Bool)arg1;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)updateUserProfile;
- (void)HandleModUsrInfoExt:(id)arg1;
- (void)HandleModUsrInfo:(id)arg1;
- (void)handleModUserInfoExt:(id)arg1 withSetting:(id)arg2;
- (void)handleModUserInfo:(id)arg1 withSetting:(id)arg2;
- (void)onServiceClearData;
- (void)dealloc;
- (id)init;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
