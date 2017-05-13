//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WAPermissionMgrExtension.h"
#import "WAPermissionUserAuthImplDelegate.h"

@class NSData, NSString, WAPermissionUserAuthImpl, WAPermissionWeAppBindInfo;

@interface WAPermissionHandler : NSObject <WAPermissionMgrExtension, WAPermissionUserAuthImplDelegate>
{
    NSString *_appID;
    unsigned int _debugModeType;
    CDUnknownBlockType _downloadCompletionHandler;
    WAPermissionUserAuthImpl *_userAuthImpl;
    id <WAPermissionHandlerDelegate> _delegate;
    NSData *_permissionBytes;
    WAPermissionWeAppBindInfo *_weAppBindInfo;
}

@property(retain) WAPermissionWeAppBindInfo *weAppBindInfo; // @synthesize weAppBindInfo=_weAppBindInfo;
@property(retain) NSData *permissionBytes; // @synthesize permissionBytes=_permissionBytes;
@property(nonatomic) __weak id <WAPermissionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)userAuthFailWithJSAPI:(id)arg1 failHandler:(CDUnknownBlockType)arg2 errMsg:(id)arg3 scene:(unsigned long long)arg4;
- (void)userAuthOKWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 scene:(unsigned long long)arg3;
- (void)onDownloadPermissionBytes:(id)arg1 weAppBindInfo:(id)arg2 isSuccess:(_Bool)arg3 errorCode:(int)arg4;
- (void)loadWeAppBindInfo;
- (void)loadPermissionBytes;
- (id)getWeAppBindJumpToUserNameFromAppID:(id)arg1;
- (void)checkUserAuthWithAppID:(id)arg1 jsapi:(id)arg2 handler:(CDUnknownBlockType)arg3 failHandler:(CDUnknownBlockType)arg4 scene:(unsigned long long)arg5;
- (_Bool)hasPermissionWithJSAPI:(id)arg1 getState:(unsigned int *)arg2;
- (_Bool)checkRunMode:(id)arg1 onWebview:(_Bool)arg2;
- (void)asyncUpdatePermissionBytes;
- (void)downloadPermissionBytesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasPermissionBytes;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 debugModeType:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

