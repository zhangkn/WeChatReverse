//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReaderMessageCellView.h"

@class AttributedReaderMessageViewModel, CTRichTextView, UIImageView, UIView;

@interface AttributedReaderMessageCellView : ReaderMessageCellView
{
    UIView *m_lineViewTop;
    UIView *m_lineViewBot;
    CTRichTextView *m_digestView;
    UIImageView *m_bgImageView;
}

- (void).cxx_destruct;
- (id)operationMenuItems;
- (void)jumpWeappOpWrap:(id)arg1;
- (void)onClicked;
- (void)onHeadImageClick;
- (void)initDigestView;
- (void)initBgImageView;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutContentView;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, nonatomic) AttributedReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

