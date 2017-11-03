//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMDelegateCenterExt.h"
#import "tableViewDelegate.h"

@class MMDelegateProxy<UITableViewDataSource>, MMDelegateProxy<UITableViewDelegate>, MMTableViewIndexView, NSString, UIColor, UIView;

@interface MMTableView : UITableView <MMDelegateCenterExt>
{
    MMDelegateProxy<UITableViewDataSource> *dataSourceProxy;
    MMDelegateProxy<UITableViewDelegate> *delegateProxy;
    id <tableViewDelegate> m_delegateProxy;
    _Bool cancelButtonTouchsTrack;
    Class cancelTouchsTrackClass;
    UIView *_footerView;
    UIView *_footerViewBackground;
    UIColor *_tailColor;
    _Bool m_dontDrawFooterLine;
    MMTableViewIndexView *_indexView;
    _Bool _isMainView;
    id <tableViewDelegate> m_delegate;
}

@property(nonatomic) _Bool isMainView; // @synthesize isMainView=_isMainView;
@property(retain, nonatomic) UIColor *tailColor; // @synthesize tailColor=_tailColor;
@property(nonatomic) Class cancelTouchsTrackClass; // @synthesize cancelTouchsTrackClass;
@property(nonatomic) _Bool cancelButtonTouchsTrack; // @synthesize cancelButtonTouchsTrack;

- (void)setWidth:(double)arg1;
- (void)useMMTableViewIndexViewWithDelegate:(id)arg1;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)setTableFooterView:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawFooterLine:(_Bool)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentInsetTop:(double)arg1 andBottom:(double)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)reloadDataAnimated;
- (void)setContentSize:(struct CGSize)arg1;
- (long long)firstSectionIndex;
- (void)reloadHeaderView;
- (void)reloadIndexView;
- (void)reloadData;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onClearMyDelegate:(id)arg1 forProtocols:(id)arg2;
@property(nonatomic) __weak id <tableViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;


@end

