//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TipsView;

@protocol TipsViewDelegate <NSObject>

@optional
- (void)onPerformExposeAction:(TipsView *)arg1;
- (void)onPerformIconAction:(TipsView *)arg1;
- (void)onPerformAction:(TipsView *)arg1;
- (void)onTipsViewClose:(TipsView *)arg1;
- (void)onTipsViewClick:(TipsView *)arg1;
@end

