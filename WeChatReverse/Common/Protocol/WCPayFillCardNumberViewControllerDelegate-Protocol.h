//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage, WCPayControlData;

@protocol WCPayFillCardNumberViewControllerDelegate <NSObject>
- (void)FillCardNumberBackToRefreshCardList;
- (void)FillCardNumberConfirmWithImage:(UIImage *)arg1 cardNumber:(NSString *)arg2 data:(WCPayControlData *)arg3;
- (void)FillCardNumberNext:(WCPayControlData *)arg1;
- (void)FillCardNumberCancel:(_Bool)arg1;

@optional
- (void)FillCardNumberShowedAllFavorInfo;
@end

