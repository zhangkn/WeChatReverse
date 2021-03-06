//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "ILinkEventExt.h"
#import "MMRichTextCopyEventDelegate.h"
#import "scrollViewDelegate.h"

@class CTRichTextView, MMRichTextCoverView, MMScrollView, NSString, TextFloatViewController, UIButton, UIFont, UIImageView, UIView;

@interface TextFloatPreview : MMUIWindow <ILinkEventExt, scrollViewDelegate, MMRichTextCopyEventDelegate>
{
    UIView *m_oBackView;
    UIButton *m_view;
    UIImageView *m_headerMask;
    MMScrollView *m_oScrollView;
    CTRichTextView *m_oRichTextView;
    id <ILinkEventExt> m_linkDelegate;
    struct CGPoint m_origin;
    id <TextFloatPreviewDelegate> m_delegate;
    _Bool _bNeedRebuildTextView;
    _Bool m_bHidden;
    TextFloatViewController *m_viewController;
    MMRichTextCoverView *m_oRichTextCoverView;
    NSString *_nsContent;
    UIFont *_oFont;
    unsigned long long _parserType;
}

@property(nonatomic) unsigned long long parserType; // @synthesize parserType=_parserType;
@property(retain, nonatomic) UIFont *oFont; // @synthesize oFont=_oFont;
@property(retain, nonatomic) NSString *nsContent; // @synthesize nsContent=_nsContent;
@property(nonatomic) __weak id <TextFloatPreviewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (id)getTextFloatViewController;
- (void)setTextFloatViewHidden:(_Bool)arg1;
- (id)getUIViewController;
- (id)getScrollView;
- (void)onRichTextViewExit;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)hideWithAnimate:(_Bool)arg1;
- (void)showWithAnimate:(_Bool)arg1;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)onSingleTap;
- (void)setOriginFrame:(struct CGRect)arg1;
- (void)setContent:(id)arg1;
- (void)updateTextView;
- (void)setLinkDelegate:(id)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

