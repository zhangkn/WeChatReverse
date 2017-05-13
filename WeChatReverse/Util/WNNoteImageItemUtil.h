//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WNNoteItemUtilBase.h"

#import "MMImagePickerManagerDelegate.h"
#import "WCActionSheetDelegate.h"

@class NSMutableArray, NSString;

@interface WNNoteImageItemUtil : WNNoteItemUtilBase <WCActionSheetDelegate, MMImagePickerManagerDelegate>
{
    NSMutableArray *itemArray;
    unsigned long long m_imageChooseType;
}

@property(nonatomic) unsigned long long m_imageChooseType; // @synthesize m_imageChooseType;
- (void).cxx_destruct;
- (id)createThumbImage:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)PostFullResolutionImgWithALAsset:(id)arg1 Finish:(_Bool)arg2;
- (void)didselectFullImgWithImgUrl:(id)arg1 Finish:(_Bool)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onTakePhotoForPost;
- (void)onCreatePostImageView;
- (void)showImagePicker:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)configItemWithBigImgPath:(id)arg1 andThumbImgPath:(id)arg2 andImgSize:(struct CGSize)arg3;
- (void)insertItem:(id)arg1 isUpdate:(_Bool)arg2 isConfigData:(_Bool)arg3;
- (void)onClickItem:(id)arg1;
- (id)getIconHLName;
- (id)getIconName;
- (id)getTitle;
- (void)onAddItemBegin:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

