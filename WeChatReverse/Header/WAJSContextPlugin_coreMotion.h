//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

#import "ILocationMgrExt.h"
#import "INetworkStatusMgrExt.h"

@class CMMotionManager;

@interface WAJSContextPlugin_coreMotion : WAJSContextPluginBase <ILocationMgrExt, INetworkStatusMgrExt>
{
    CMMotionManager *_motionMgr;
    unsigned long long m_headingTag;
    id <IJSContextPluginDelegate> _resultDelegate;
}

@property(nonatomic) __weak id <IJSContextPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void).cxx_destruct;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onHeadingError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)enableCompass:(_Bool)arg1;
- (void)dealloc;
- (void)enableAccelerometer:(_Bool)arg1;
- (id)init;

@end

