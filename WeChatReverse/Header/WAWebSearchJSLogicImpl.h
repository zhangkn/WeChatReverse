//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LocalJSLogicBase.h"

#import "UIWebViewDelegate.h"

@class NSString;

@interface WAWebSearchJSLogicImpl : LocalJSLogicBase <UIWebViewDelegate>
{
    id <WASearchJSEventHandlerDelegate> _jsEventDelegate;
}

@property(nonatomic) __weak id <WASearchJSEventHandlerDelegate> jsEventDelegate; // @synthesize jsEventDelegate=_jsEventDelegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)showWebview:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)makeNetworkFailParam:(_Bool)arg1;
- (id)makeEmptyJSONResultParam:(_Bool)arg1;
- (id)makePageClearParam;
- (void)handleJSApiFuncOfRegisterWebViewDidScroll:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfLaunchDetailPage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfReportFTSRealTime:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfReportWeAppSearchRealTime:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOpenWeAppPage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfSetSearchWord:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetAvatar:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetImage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetSuggestion:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfClickReport:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetSearchData:(id)arg1 withCallBackID:(id)arg2;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)sendPageOffsetChanged:(double)arg1;
- (void)sendResourceDataToJS:(id)arg1;
- (void)sendSearchDataNetFailedJSONToJSIsNewSearch:(_Bool)arg1;
- (void)sendSearchDataJSONToJS:(id)arg1 isNewSearch:(_Bool)arg2 isFromFuncQuery:(_Bool)arg3;
- (void)sendSugDataJSONToJS:(id)arg1;
- (void)sendSearchDidClickedToJS:(id)arg1;
- (void)sendQueryDidChangedToJS:(id)arg1;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

