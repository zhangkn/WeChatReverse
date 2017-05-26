//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class WCActionSheet;

@protocol WCActionSheetDelegate <NSObject>

@optional
- (void)actionSheet:(WCActionSheet *)actionSheet didDismissWithButtonIndex:(NSInteger)arg2;
- (void)actionSheet:(WCActionSheet *)actionSheet willDismissWithButtonIndex:(NSInteger)arg2;
- (void)didPresentActionSheet:(WCActionSheet *)actionSheet;
- (void)willPresentActionSheet:(WCActionSheet *)actionSheet;
- (void)actionSheetCancel:(WCActionSheet *)actionSheet;
- (void)actionSheet:(WCActionSheet *)actionSheet clickedButtonAtIndex:(NSInteger)arg2;
@end
