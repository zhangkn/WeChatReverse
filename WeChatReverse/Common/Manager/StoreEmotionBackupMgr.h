//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt.h"
#import "MMService.h"
#import "StoreEmotionBackupLogicObjectDelegate.h"

@class NSString, StoreEmotionBackupLogicObject;

@interface StoreEmotionBackupMgr : MMService <MMKernelExt, StoreEmotionBackupLogicObjectDelegate, MMService>
{
    int _scene;
    StoreEmotionBackupLogicObject *_backupLogicObject;
}

@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) StoreEmotionBackupLogicObject *backupLogicObject; // @synthesize backupLogicObject=_backupLogicObject;
- (void).cxx_destruct;
- (void)onStoreEmotionBackupLogicNoneedBackup;
- (void)onStoreEmotionBackupLogicFailed;
- (void)onStoreEmotionBackupLogicOK;
- (void)onPreQuit;
- (void)onAuthOK;
- (_Bool)canStartCgiNow;
- (void)backupSortedEmotionToServer:(id)arg1;
- (void)backupStoreEmotionToServerFromScene:(int)arg1 needCheckFileExist:(_Bool)arg2;
- (void)backupStoreEmotionToServerFromScene:(int)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

