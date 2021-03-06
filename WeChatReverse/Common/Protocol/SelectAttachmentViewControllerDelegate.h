//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class RecommandAppItem, ServiceAppData;

@protocol SelectAttachmentViewControllerDelegate <NSObject>
- (BOOL)canShowGroupPayEntry;
- (BOOL)canShowCardPkgEntry;
- (BOOL)canShowSight;
- (BOOL)canShowServiceEntry;
- (BOOL)canShowRedEnvelopesEntey;
- (BOOL)canShowTransferMoneyEntry;
- (NSArray *)getAttachmentViewServiceAppList;
- (void)didSelectAttachmentAtIndex:(NSUInteger)attachmentIndex;

@optional
- (void)onGroupPayButtonClicked:(UIButton *)clickedButton;
- (void)onEnterpriseBrandEntryButtonClicked:(UIButton *)clickedButton;
- (void)onMultiTalkButtonClicked:(UIButton *)clickedButton;
- (void)onRedEnvelopesClicked:(UIButton *)clickedButton;
- (void)onVoiceInputButtonClicked:(UIButton *)clickedButton;
- (void)onTransferButtonClicked:(UIButton *)clickedButton;
- (void)demoSendShortVideo:(UIButton *)clickedButton;
- (void)onServiceButtonClicked:(UIButton *)clickedButton;
- (void)onMyFavoritesButtonClicked:(UIButton *)clickedButton;
- (void)on3rdServiceButtonClicked:(ServiceAppData *)clickedButton;
- (void)on3rdRecommandButtonClicked:(RecommandAppItem *)clickedButtonItem;
- (void)onVoiceInputClicked:(UIButton *)clickedButton;
- (void)onVoiceVoipButtonClicked:(UIButton *)clickedButton;
- (void)onVideoVoipButtonClicked:(UIButton *)clickedButton;
- (void)onShareCardButtonClicked:(UIButton *)clickedButton;
- (void)onLocationButtonClicked:(UIButton *)clickedButton;
- (void)onCameraControllerClicked:(UIButton *)clickedButton;
- (void)onMediaBrowserClicked:(UIButton *)clickedButton;
@end

