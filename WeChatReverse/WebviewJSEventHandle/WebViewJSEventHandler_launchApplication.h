//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "PBMessageObserverDelegate.h"

@class NSString;

@interface WebViewJSEventHandler_launchApplication : WebviewJSEventHandlerBase <PBMessageObserverDelegate>
{
    NSString *_appID;
    NSString *_launchAppID;
    NSString *_messageExt;
    NSString *_parameter;
    NSString *_scheme;
    _Bool _bIsShowLaunchFailToast;
}

- (void).cxx_destruct;
- (void)sendReqLaunchAppWithShowType:(unsigned long long)arg1;
- (void)onCheckResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

@end

